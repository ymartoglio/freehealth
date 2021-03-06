/***************************************************************************
 *  The FreeMedForms project is a set of free, open source medical         *
 *  applications.                                                          *
 *  (C) 2008-2016 by Eric MAEKER, MD (France) <eric.maeker@gmail.com>      *
 *  All rights reserved.                                                   *
 *                                                                         *
 *  The FreeAccount plugins are free, open source FreeMedForms' plugins.   *
 *  (C) 2010-2011 by Pierre-Marie Desombre, MD <pm.desombre@medsyn.fr>     *
 *  and Eric Maeker, MD <eric.maeker@gmail.com>                            *
 *  All rights reserved.                                                   *
 *                                                                         *
 *  This program is free software: you can redistribute it and/or modify   *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation, either version 3 of the License, or      *
 *  (at your option) any later version.                                    *
 *                                                                         *
 *  This program is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *  You should have received a copy of the GNU General Public License      *
 *  along with this program (COPYING.FREEMEDFORMS file).                   *
 *  If not, see <http://www.gnu.org/licenses/>.                            *
 ***************************************************************************/
/***************************************************************************
 *  Main Developers:  Pierre-Marie DESOMBRE <pm.desombre@medsyn.fr>,      *
 *                     Eric MAEKER, <eric.maeker@gmail.com>                *
 *  Contributors:                                                          *
 *      NAME <MAIL@ADDRESS.COM>                                            *
 ***************************************************************************/
#include "actsmodel.h"
#include "accountbase.h"
#include "constants.h"

#include <coreplugin/icore.h>
#include <coreplugin/isettings.h>
#include <coreplugin/iuser.h>
#include <coreplugin/constants_tokensandsettings.h>

#include <utils/log.h>
#include <translationutils/constanttranslations.h>

#include <QSqlTableModel>

using namespace AccountDB;
using namespace Trans::ConstantTranslations;

enum {WarnFilter=true};

static inline Core::ISettings *settings()  { return Core::ICore::instance()->settings(); }
static inline AccountDB::AccountBase *accountBase() {return AccountDB::AccountBase::instance();}
static inline Core::IUser *user() { return  Core::ICore::instance()->user(); }


namespace AccountDB {
namespace Internal {

// TODO: Manage user change
class ActsModelPrivate
{
public:
    ActsModelPrivate(ActsModel *parent) :
            m_SqlTable(0), m_IsDirty(false),
            m_StartDate(QDate::currentDate()), m_EndDate(QDate::currentDate()),
            m_UserUid(user()->uuid()),
            q(parent)
    {qDebug() << __FILE__ << QString::number(__LINE__) << " m_UserUid =  " << m_UserUid;
        m_SqlTable = new QSqlTableModel(q, QSqlDatabase::database(Constants::DB_ACCOUNTANCY));
        m_SqlTable->setTable(accountBase()->table(Constants::Table_Acts));
        refreshFilter();
    }
    ~ActsModelPrivate () {}

    void refreshFilter()
    {
        if (!m_SqlTable)
            return;
        QHash<int, QString> where;
        if (m_EndDate==m_StartDate) {
            where.insert(AccountDB::Constants::ACTS_DATE, QString("='%1'").arg(m_EndDate.toString(Qt::ISODate)));
        } else {
            where.insertMulti(AccountDB::Constants::ACTS_DATE, QString(">='%1'").arg(m_StartDate.toString(Qt::ISODate)));
            where.insertMulti(AccountDB::Constants::ACTS_DATE, QString("<='%1'").arg( m_EndDate.toString(Qt::ISODate)));
        }
        where.insert(AccountDB::Constants::ACTS_USER_UID, QString("='%1'").arg(m_UserUid));

        q->beginResetModel();
        m_SqlTable->setFilter(accountBase()->getWhereClause(Constants::Table_Acts, where));
        if (WarnFilter)
            qWarning() << m_SqlTable->filter() << __FILE__ << __LINE__;
        q->endResetModel();
    }

public:
    QSqlTableModel *m_SqlTable;
    bool m_IsDirty;
    QDate m_StartDate, m_EndDate;
    QString m_UserUid;

private:
    ActsModel *q;
};

}  // End namespace Internal
}  // End namespace AccountDB



ActsModel::ActsModel(QObject *parent) :
        QAbstractTableModel(parent), d(new Internal::ActsModelPrivate(this))
{
//    d->m_SqlTable->setEditStrategy(QSqlTableModel::OnManualSubmit);
    d->m_SqlTable->setEditStrategy(QSqlTableModel::OnFieldChange);

    connect(user(), SIGNAL(userChanged()), this, SLOT(userChanged()));
    userChanged();

    d->m_SqlTable->select();
}

ActsModel::~ActsModel()
{
    if (d) {
        delete d;
        d=0;
    }
}

int ActsModel::rowCount(const QModelIndex &parent) const
{
    int rows = 0;
    d->m_SqlTable->setFilter("");
    d->m_SqlTable->select();
    rows = d->m_SqlTable->rowCount(parent);
    qDebug() << __FILE__ << QString::number(__LINE__) << " rows = " << QString::number(rows);

    return rows;
}

int ActsModel::columnCount(const QModelIndex &parent) const
{
    return d->m_SqlTable->columnCount(parent);
}

void ActsModel::setUserUuid(const QString &uuid)
{
    d->m_UserUid = uuid;
    d->refreshFilter();
}


QVariant ActsModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid()) {
        return QVariant();
    }

    if (role==Qt::DisplayRole) {
        if (index.column()==Constants::ACTS_DATE) {
            QDate date = d->m_SqlTable->data(index, role).toDate();
            return date.toString(settings()->value(Core::Constants::S_DATEFORMAT, QLocale().dateFormat(QLocale::LongFormat)).toString());
        }
        return d->m_SqlTable->data(index, role);
    }
    return QVariant();
}

bool ActsModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    bool ret = d->m_SqlTable->setData(index, value, role);
    d->m_IsDirty = d->m_SqlTable->isDirty(index);
    return ret;
}


QVariant ActsModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    Q_UNUSED(role);
    if (orientation==Qt::Horizontal) {
        switch (section) {
        // TODO: remove tr translations use tkTr
        case Constants::ACTS_COMMENT : return tr("Comments");
        case Constants::ACTS_DATE : return tr("Date");
        case Constants::ACTS_ID : return "ID";
        case Constants::ACTS_INSURANCE_ID : return "Assurance Id";
        case Constants::ACTS_MEDICALPROCEDURE_TEXT : return "MP";
        case Constants::ACTS_PATIENT_NAME : return tr(Trans::Constants::PATIENT);
        case Constants::ACTS_PATIENT_UID : return "Patient uuid";
        case Constants::ACTS_SITE_ID : return "Site Id";
        case Constants::ACTS_USER_UID : return tkTr(Trans::Constants::USER);
        }
    }

    return QVariant();
}

bool ActsModel::insertRows(int row, int count, const QModelIndex &parent)
{
    d->m_IsDirty = true;
//    d->m_SqlTable->setEditStrategy(QSqlTableModel::OnRowChange);
    bool ret = d->m_SqlTable->insertRows(row, count, parent);
//    d->m_SqlTable->setEditStrategy(QSqlTableModel::OnManualSubmit);
    return ret;
}

bool ActsModel::removeRows(int row, int count, const QModelIndex &parent)
{
    d->m_IsDirty = true;
    return d->m_SqlTable->removeRows(row, count, parent);
}

bool ActsModel::submit()
{
    if (d->m_SqlTable->submitAll()) {
        d->m_IsDirty = false;
        return true;
    }
    return false;
}

void ActsModel::revert()
{
    d->m_IsDirty = false;
    d->m_SqlTable->revert();
}

bool ActsModel::isDirty() const
{
    return d->m_IsDirty;
}

void ActsModel::setStartDate(const QDate &date)
{
    d->m_StartDate = date;
    d->refreshFilter();
}

void ActsModel::setEndDate(const QDate &date)
{
    d->m_EndDate = date;
    d->refreshFilter();
}

double ActsModel::sum(const int &fieldRef)
{
    // construct query == SELECT total(FIELD) FROM TABLE WHERE...
    QSqlQuery query(accountBase()->totalSqlCommand(Constants::Table_Acts, fieldRef) + " WHERE " + d->m_SqlTable->filter(), d->m_SqlTable->database());
    if (query.isActive()) {
        if (query.next())
            return query.value(0).toDouble();
    } else {
        Utils::Log::addQueryError(this, query);
    }
    return 0.0;
}

void ActsModel::userChanged()
{
    d->m_UserUid = user()->uuid();
    d->refreshFilter();
}

QSqlError ActsModel::lastError(){
    return d->m_SqlTable->lastError();
}

bool ActsModel::canFetchMore ( const QModelIndex & parent  ) const  {
    return d->m_SqlTable->canFetchMore ( parent  );
}

void ActsModel::fetchMore ( const QModelIndex & parent ) {
    d->m_SqlTable->canFetchMore ( parent  );
}
