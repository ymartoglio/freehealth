/***************************************************************************
 *  The FreeMedForms project is a set of free, open source medical         *
 *  applications.                                                          *
 *  (C) 2008-2012 by Eric MAEKER, MD (France) <eric.maeker@gmail.com>      *
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
 *   Main developers : Eric MAEKER, <eric.maeker@gmail.com>                *
 *   Contributors :                                                        *
 *       NAME <MAIL@ADDRESS.COM>                                           *
 ***************************************************************************/
#include "icddialog.h"
#include "icdviewer.h"
#include "simpleicdmodel.h"
#include "fullicdcodemodel.h"
#include "icdassociation.h"

#include <QGridLayout>
#include <QDialogButtonBox>

#include <QDebug>


using namespace ICD;

IcdDialog::IcdDialog(const QVariant &SID, QWidget *parent) :
        QDialog(parent),
        m_View(0)
{
    QGridLayout *lay = new QGridLayout(this);
    setLayout(lay);
    m_View = new IcdViewer(this);
    lay->addWidget(m_View, 0, 0);
    m_View->setCodeSid(SID);

    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    lay->addWidget(buttonBox, 10, 0);
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
}

void IcdDialog::done(int result)
{
    QDialog::done(result);
}

bool IcdDialog::isSelectionValid() const
{
    return m_View->icdModel()->isSelectionValid();
}

bool IcdDialog::isUniqueCode() const
{
    // Ask FullIcdModel about the selected code
    if (!m_View)
        return false;
    if (!m_View->icdModel())
        return false;
//    qWarning() << m_View->icdModel()->codeCanBeUsedAlone() <<
//                  m_View->icdModel()->dagStarModel()->numberOfCheckedItems();
    return (m_View->icdModel()->codeCanBeUsedAlone() &&
            (m_View->icdModel()->dagStarModel()->numberOfCheckedItems()==0));
}

bool IcdDialog::isAssociation() const
{
    if (!m_View)
        return false;
    if (!m_View->icdModel())
        return false;

    return (m_View->icdModel()->isSelectionValid() &&
            (m_View->icdModel()->dagStarModel()->numberOfCheckedItems()>0));
}

QVariant IcdDialog::getSidCode() const
{
    if (isAssociation())
        return QVariant();
    return m_View->icdModel()->getCodeSid();
}

QVector<Internal::IcdAssociation> IcdDialog::getAssocation() const
{
    if (!isAssociation())
        return QVector<Internal::IcdAssociation>();
    return m_View->icdModel()->dagStarModel()->getCheckedAssociations();
}

