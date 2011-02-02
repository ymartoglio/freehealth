/***************************************************************************
 *  The FreeMedForms project is a set of free, open source medical         *
 *  applications.                                                          *
 *  (C) 2008-2010 by Eric MAEKER, MD (France) <eric.maeker@free.fr>        *
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
 *   Main Developper : Eric MAEKER, <eric.maeker@free.fr>                  *
 *   Contributors :                                                        *
 *       NAME <MAIL@ADRESS>                                                *
 ***************************************************************************/
#ifndef TKCONSTANTTRANSLATIONS_H
#define TKCONSTANTTRANSLATIONS_H

#include <translationutils/translationutils_exporter.h>

#include <QString>
#include <QStringList>
#include <QCoreApplication>

namespace Trans {
namespace Constants {

const char* const CONSTANTS_TR_CONTEXT = "tkConstants";
const char* const CONSTANTS_TRANSLATOR_NAME = "translationutils";

namespace Physiology {

    enum PregnancyLimit  // QFlag
    {
        NeverDuringPregnacy = 0x00000000,
        FirstQuaOk          = 0x00000010,
        SecondQuaOk         = 0x00000100,
        ThirdQuaOk          = 0x00001000,
        UsableWithWarn      = 0x00010000,
        PregnancyOk         = 0x00100000
    };
    Q_DECLARE_FLAGS( PregnancyLimits, PregnancyLimit );

    enum PhysiologicalLimit // QFlag
    {
        EveryOne     = 0x00000000,
        Infant       = 0x00000001,  // Nourrisson
        Child        = 0x00000010,
        AdultOnly    = 0x00000100,
        ChronicRenalFailureAvoid   = 0x00001000,
        ChronicHepaticFailureAvoid   = 0x00010000,
        ManOnly      = 0x01000000,
        WomanOnly    = 0x10000000
    };
    Q_DECLARE_FLAGS( PhysiologicalLimits, PhysiologicalLimit );

}
Q_DECLARE_OPERATORS_FOR_FLAGS( Physiology::PregnancyLimits)
Q_DECLARE_OPERATORS_FOR_FLAGS( Physiology::PhysiologicalLimits)


namespace Time {

    enum Period
    {
        Seconds = 0,
        Minutes,
        Hours,
        Days,
        Weeks,
        Months,
        Quarter,
        Year,
        Decade
    };

    enum MealTime
    {
        Undefined = 0,
        NoRelationWithMeal,
        DuringMeal,
        BeforeMeal,
        AfterMeal,
        OutsideMeal,
        OnlyIfMeal,
        SeparatedFromFood,
        SuggestedWithFood,
        WithOrWithoutFood
    };


    enum DailyScheme
    {
        DS_WakeUpTime = 0,
        DS_Breakfast,
        DS_Morning,
        DS_10OClockBrunch,
        DS_MidDay,
        DS_Lunch,
        DS_TeaTime,
        DS_Evening,
        DS_Diner,
        DS_BedTime,
        DS_MaxParam
    };
//    Q_DECLARE_FLAGS( DailySchemes, DailyScheme );
}
//Q_DECLARE_OPERATORS_FOR_FLAGS(Time::DailySchemes)


enum TitleInterpret {
    NoTitle = 0,
    Mister,
    Miss,
    Madam,
    Doctor,
    Professor,
    Captain
};




	// Used for the language menu
	const char * const  ENGLISH             = QT_TRANSLATE_NOOP("tkConstants", "English");             /*!< \brief Default text for menu File  \ingroup constants_actionmanager */

        // Menus translations
        const char * const  M_FILE_TEXT              = QT_TRANSLATE_NOOP("tkConstants", "File");               /*!< \brief Default text for menu File  \ingroup constants_actionmanager */
        const char * const  M_FILE_RECENTFILES_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Recent files");   /*!< \brief Default text for menu File  \ingroup constants_actionmanager */
        const char * const  M_PATIENT_HISTORY_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Patient history");   /*!< \brief Default text for menu File  \ingroup constants_actionmanager */
        const char * const  M_EDIT_TEXT              = QT_TRANSLATE_NOOP("tkConstants", "Edit");               /*!< \brief Default text for menu Edit  \ingroup constants_actionmanager */
        const char * const  M_EDIT_SELECT_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Selection");          /*!< \brief Default text for menu Selection  \ingroup constants_actionmanager */
        const char * const  M_EDIT_LIST_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "List");               /*!< \brief Default text for menu List  \ingroup constants_actionmanager */
        const char * const  M_EDIT_TEMPLATES_TEXT    = QT_TRANSLATE_NOOP("tkConstants", "Templates");               /*!< \brief Default text for menu List  \ingroup constants_actionmanager */
        const char * const  M_FORMAT_TEXT            = QT_TRANSLATE_NOOP("tkConstants", "Format");             /*!< \brief Default text for menu Format  \ingroup constants_actionmanager */
        const char * const  M_FORMAT_FONT_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Font");               /*!< \brief Default text for menu Format  \ingroup constants_actionmanager */
        const char * const  M_FORMAT_PARAGRAPH_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Paragraph");     /*!< \brief Default text for menu Format  \ingroup constants_actionmanager */
        const char * const  M_FORMAT_TABLE_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "Table");              /*!< \brief Default text for menu Format  \ingroup constants_actionmanager */
        const char * const  M_FORMAT_IMAGE_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "Image");             /*!< \brief Default text for menu Format  \ingroup constants_actionmanager */
        const char * const  M_TOOLS_TEXT             = QT_TRANSLATE_NOOP("tkConstants", "Tools");              /*!< \brief Default text for menu Tools  \ingroup constants_actionmanager */
        const char * const  M_PLUGINS_TEXT           = QT_TRANSLATE_NOOP("tkConstants", "Plugins");            /*!< \brief Default text for menu Plugins  \ingroup constants_actionmanager */
        const char * const  M_CONFIGURATION_TEXT     = QT_TRANSLATE_NOOP("tkConstants", "Configuration");      /*!< \brief Default text for menu Configuration  \ingroup constants_actionmanager */
        const char * const  M_TOOLBARS_TEXT          = QT_TRANSLATE_NOOP("tkConstants", "Toolbars");           /*!< \brief Default text for menu Toolbars  \ingroup constants_actionmanager */
        const char * const  M_LANGUAGES_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Languages");          /*!< \brief Default text for menu Languages  \ingroup constants_actionmanager */
        const char * const  M_INTERPRETOR_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Interpretor");        /*!< \brief Default text for menu Interpretor  \ingroup constants_actionmanager */
        const char * const  M_ABOUT_TEXT             = QT_TRANSLATE_NOOP("tkConstants", "About");              /*!< \brief Default text for menu About  \ingroup constants_actionmanager */
        const char * const  ABOUTDATABASES_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "About databases");              /*!< \brief Default text for menu About  \ingroup constants_actionmanager */
        const char * const  M_UPDATE_TEXT            = QT_TRANSLATE_NOOP("tkConstants", "Update available");   /*!< \brief Default text for menu Update  \ingroup constants_actionmanager */

        // Actions translations
        const char * const  FILENEW_TEXT          = QT_TRANSLATE_NOOP("tkConstants", "New");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FILEOPEN_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Open");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FILESAVE_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Save");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FILESAVEAS_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Save as");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FILEPRINT_TEXT        = QT_TRANSLATE_NOOP("tkConstants", "Print...");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  PRINTPREVIEW_TEXT     = QT_TRANSLATE_NOOP("tkConstants", "Print preview");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FILEEXIT_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Exit");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  SEARCHMENU_TEXT           = QT_TRANSLATE_NOOP("tkConstants", "Search...");

        const char * const  PATIENTNEW_TEXT           = QT_TRANSLATE_NOOP("tkConstants", "New Patient");
        const char * const  PATIENTREMOVE_TEXT        = QT_TRANSLATE_NOOP("tkConstants", "Remove Patient");
        const char * const  PATIENTVIEWIDENTITY_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "View Patient Identity");
        const char * const  IDENTITY_TEXT             = QT_TRANSLATE_NOOP("tkConstants", "Identity");

        const char * const  OPENPRESCRIPTION_TEXT = QT_TRANSLATE_NOOP("tkConstants", "Open a prescription");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  SAVEPRESCRIPTION_TEXT = QT_TRANSLATE_NOOP("tkConstants", "Save a prescription");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  PRINTPRESCRIPTION_TEXT = QT_TRANSLATE_NOOP("tkConstants", "Print a prescription");    /*!< \brief Default action text  \ingroup constants_actionmanager */

        const char * const  CLOSE_TEXT            = QT_TRANSLATE_NOOP("tkConstants", "Close");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  EDITCOPY_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Copy");      /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  EDITCUT_TEXT          = QT_TRANSLATE_NOOP("tkConstants", "Cut");        /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  EDITPASTE_TEXT        = QT_TRANSLATE_NOOP("tkConstants", "Paste");      /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  EDITUNDO_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Undo");       /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  EDITREDO_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Redo");       /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  EDITSELECTALL_TEXT    = QT_TRANSLATE_NOOP("tkConstants", "Select All"); /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  EDITDESESLECT_TEXT    = QT_TRANSLATE_NOOP("tkConstants", "Deselect");   /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  NEXT_TEXT             = QT_TRANSLATE_NOOP("tkConstants", "Next");       /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  PREVIOUS_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Previous");   /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  HOME_TEXT             = QT_TRANSLATE_NOOP("tkConstants", "Home");       /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  LISTADD_TEXT          = QT_TRANSLATE_NOOP("tkConstants", "Add to list");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  LISTREMOVE_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Remove from list"); /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  LISTMOVEUP_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Move item up");   /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  LISTMOVEDOWN_TEXT     = QT_TRANSLATE_NOOP("tkConstants", "Move item down"); /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  LISTCLEAR_TEXT        = QT_TRANSLATE_NOOP("tkConstants", "Clear");          /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  LISTSORT_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Sort");          /*!< \brief Default action text  \ingroup constants_actionmanager */

        const char * const  TEMPLATES             = QT_TRANSLATE_NOOP("tkConstants", "Templates");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  CREATETEMPLATE_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Create a new template");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  TEMPLATES_TOGGLEVIEW_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Toggle template view");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  ADDCATEGORY_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "Add a category");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  ADD_TEXT              = QT_TRANSLATE_NOOP("tkConstants", "Add");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  REMOVE_TEXT           = QT_TRANSLATE_NOOP("tkConstants", "Remove");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  LOCK_TEXT             = QT_TRANSLATE_NOOP("tkConstants", "Lock");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  UNLOCK_TEXT           = QT_TRANSLATE_NOOP("tkConstants", "Unlock");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  LOCKED_TEXT           = QT_TRANSLATE_NOOP("tkConstants", "Locked");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  UNLOCKED_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Unlocked");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  TEMPLATES_DATABASE_INFORMATIONS_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "Templates database informations");    /*!< \brief Default action text  \ingroup constants_actionmanager */

        const char * const  FORMATBOLD_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Bold");           /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FORMATITALIC_TEXT     = QT_TRANSLATE_NOOP("tkConstants", "Italic");         /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FORMATUNDERLINE_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Underline");      /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FORMATSTRIKE_TEXT     = QT_TRANSLATE_NOOP("tkConstants", "Strike");         /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FORMATBIGGER_TEXT     = QT_TRANSLATE_NOOP("tkConstants", "Bigger");         /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FORMATSMALLER_TEXT    = QT_TRANSLATE_NOOP("tkConstants", "Smaller");        /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FORMATFONT_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Font format");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FORMATFONTCOLOR_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Color");          /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FORMATTABLE_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "Table format");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  FORMATIMAGE_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "Image format");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  ALIGNCENTER_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "Center");     /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  ALIGNLEFT_TEXT        = QT_TRANSLATE_NOOP("tkConstants", "Left");       /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  ALIGNRIGHT_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Right");      /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  ALIGNJUSTIFY_TEXT     = QT_TRANSLATE_NOOP("tkConstants", "Justify");    /*!< \brief Default action text  \ingroup constants_actionmanager */

        const char * const  TABLE_ADDTABLE_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Add table");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  TABLE_PROPERTIES_TEXT = QT_TRANSLATE_NOOP("tkConstants", "Table properties");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  TABLE_ADDROW_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Add row");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  TABLE_REMOVEROW_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Remove row");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  TABLE_ADDCOLUMN_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Add colunm");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  TABLE_REMOVECOLUMN_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Remove column");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  TABLE_MERGECELLS_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Merge cells");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  TABLE_SPLITCELLS_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Split cells");    /*!< \brief Default action text  \ingroup constants_actionmanager */

        const char * const  ABOUT_TEXT            = QT_TRANSLATE_NOOP("tkConstants", "About");             /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  ABOUTPLUGINS_TEXT     = QT_TRANSLATE_NOOP("tkConstants", "About Plugins");             /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  ABOUTQT_TEXT          = QT_TRANSLATE_NOOP("tkConstants", "About Qt");          /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  ABOUTFORM_TEXT        = QT_TRANSLATE_NOOP("tkConstants", "About this form");   /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  APPLICATIONHELP_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Help");              /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  DEBUGHELPER_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "Debugging tools");   /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  HELPTEXTTOGGLER_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Display/Hide form's help text");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  HELP_TEXT             = QT_TRANSLATE_NOOP("tkConstants", "Help");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  INTERPRETOR_GENERAL_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Interpretor");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  USERMANAGER_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "User manager");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  PREFERENCES_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "Preferences");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  APPCONFIGURATOR_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Application global configurator");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char* const   CONFIGMEDINTUX_TEXT   = QT_TRANSLATE_NOOP("tkConstants", "Configure MedinTux");
        const char * const  VIEWUPDATE_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "View update informations");    /*!< \brief Default action text  \ingroup constants_actionmanager */
        const char * const  PRINT_PREVIEW_TEXT    = QT_TRANSLATE_NOOP("tkConstants", "Print Preview");
        const char * const  TRANSLATORS_TEXT      = QT_TRANSLATE_NOOP("tkConstants", "Translators");

        const char * const  FULLSCREEN_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Toggle full screen");
        const char * const  ZOOMIN_TEXT           = QT_TRANSLATE_NOOP("tkConstants", "Zoom in");
        const char * const  ZOOMOUT_TEXT          = QT_TRANSLATE_NOOP("tkConstants", "Zoom out");

        const char * const  NAVIGATION            = QT_TRANSLATE_NOOP("tkConstants", "Navigation");
        const char * const  DEFAULTS              = QT_TRANSLATE_NOOP("tkConstants", "Defaults");

        // Drugs
        const char* const DRUGS_DATABASE                = QT_TRANSLATE_NOOP("tkConstants", "Drugs database");
        const char* const DRUGS_DATABASE_INFORMATIONS   = QT_TRANSLATE_NOOP("tkConstants", "Drugs database informations");
        const char* const DOSAGES_DATABASE_INFORMATIONS   = QT_TRANSLATE_NOOP("tkConstants", "Protocols database informations");
        const char* const INTERACTIONS_DATABASE_INFORMATIONS   = QT_TRANSLATE_NOOP("tkConstants", "Interactions database informations");
        const char* const INTERACTIONS_DATABASE         = QT_TRANSLATE_NOOP("tkConstants", "Interactions database");
        const char* const DRUGS                         = QT_TRANSLATE_NOOP("tkConstants", "Drugs");
        const char* const PROTOCOLS                     = QT_TRANSLATE_NOOP("tkConstants", "Protocols");
        const char* const INN                           = QT_TRANSLATE_NOOP("tkConstants", "INN");
        const char* const ATC                           = QT_TRANSLATE_NOOP("tkConstants", "ATC");
        const char* const INTAKES                       = QT_TRANSLATE_NOOP("tkConstants", "intake(s)");
        const char* const VIEWINTERACTIONS_TEXT         = QT_TRANSLATE_NOOP("tkConstants", "View synthetic interactions");
        const char* const FROM                          = QT_TRANSLATE_NOOP("tkConstants", "from");
        const char* const TO                            = QT_TRANSLATE_NOOP("tkConstants", "to");
        const char* const DURING                        = QT_TRANSLATE_NOOP("tkConstants", "during");
        const char* const EACH                          = QT_TRANSLATE_NOOP("tkConstants", "each");
        const char* const AND                           = QT_TRANSLATE_NOOP("tkConstants", "and");
        const char* const ALLERGY_TO_1                  = QT_TRANSLATE_NOOP("tkConstants", "Allergy to %1");
        const char* const INTOLERANCE_TO_1              = QT_TRANSLATE_NOOP("tkConstants", "Intolerance to %1");
        const char* const NO_ALLERGIES_INTOLERANCES     = QT_TRANSLATE_NOOP("tkConstants", "No known allergies / intolerances");
        const char* const KNOWN_ALLERGIES               = QT_TRANSLATE_NOOP("tkConstants", "Known allergies");
        const char* const KNOWN_INTOLERANCES            = QT_TRANSLATE_NOOP("tkConstants", "Known intolerances");

        // Drugs Interactions
        const char* const INTERACTION                   = QT_TRANSLATE_NOOP("tkConstants", "Interaction");
        const char* const TAKE_INTO_ACCOUNT             = QT_TRANSLATE_NOOP("tkConstants", "Take into account");
        const char* const DISCOURAGED                   = QT_TRANSLATE_NOOP("tkConstants", "Discouraged");
        const char* const CONTRAINDICATION              = QT_TRANSLATE_NOOP("tkConstants", "Contraindication");
        const char* const P450_IAM                      = QT_TRANSLATE_NOOP("tkConstants", "Cytochrome P450 interaction");
        const char* const GPG_IAM                       = QT_TRANSLATE_NOOP("tkConstants", "Glycoprotein-P interaction");
        const char* const PRECAUTION_FOR_USE            = QT_TRANSLATE_NOOP("tkConstants", "Precaution for use");
        const char* const INFORMATION                   = QT_TRANSLATE_NOOP("tkConstants", "Information");
        const char* const INN_DUPLICATION               = QT_TRANSLATE_NOOP("tkConstants", "Molecule is duplicated");

        // Account
        const char* const ACCOUNTANCY  = QT_TRANSLATE_NOOP("tkConstants", "Accountancy");
        const char* const BANK_DETAILS = QT_TRANSLATE_NOOP("tkConstants", "Bank details");
        const char* const AVAILABLE_MOVEMENTS = QT_TRANSLATE_NOOP("tkConstants", "Available movements");
        const char* const MEDICAL_PROCEDURES = QT_TRANSLATE_NOOP("tkConstants", "Medical procedures");
        const char*const  SITES = QT_TRANSLATE_NOOP("tkConstants", "Sites");
        const char*const  INSURANCE = QT_TRANSLATE_NOOP("tkConstants", "Insurance");
        const char*const  PERCENT = QT_TRANSLATE_NOOP("tkConstants", "Percentages");

        // Database related
        const char *const SQLITE_DRIVER_NOT_AVAILABLE = QT_TRANSLATE_NOOP("tkConstants", "SQLite driver is not available.");
        const char *const SQLITE_DRIVER_NOT_AVAILABLE_DETAIL = QT_TRANSLATE_NOOP("tkConstants", "The SQLite database driver is not installed or can not be found. Please report this error to the developper.");

        // Time and periods
        const char* const DURATION   = QT_TRANSLATE_NOOP("tkConstants", "Duration");
        const char* const SECOND_S    = QT_TRANSLATE_NOOP("tkConstants", "second(s)");
        const char* const MINUTE_S    = QT_TRANSLATE_NOOP("tkConstants", "minute(s)");
        const char* const HOUR_S      = QT_TRANSLATE_NOOP("tkConstants", "hour(s)");
        const char* const DAY_S       = QT_TRANSLATE_NOOP("tkConstants", "day(s)");
        const char* const WEEK_S      = QT_TRANSLATE_NOOP("tkConstants", "week(s)");
        const char* const MONTH_S     = QT_TRANSLATE_NOOP("tkConstants", "month(s)");
        const char* const QUARTER_S   = QT_TRANSLATE_NOOP("tkConstants", "quarter(s)");
        const char* const YEAR_S      = QT_TRANSLATE_NOOP("tkConstants", "year(s)");
        const char* const DECADE_S    = QT_TRANSLATE_NOOP("tkConstants", "decade(s)");

        const char* const SECOND    = QT_TRANSLATE_NOOP("tkConstants", "second");
        const char* const MINUTE    = QT_TRANSLATE_NOOP("tkConstants", "minute");
        const char* const HOUR      = QT_TRANSLATE_NOOP("tkConstants", "hour");
        const char* const DAY       = QT_TRANSLATE_NOOP("tkConstants", "day");
        const char* const WEEK      = QT_TRANSLATE_NOOP("tkConstants", "week");
        const char* const MONTH     = QT_TRANSLATE_NOOP("tkConstants", "month");
        const char* const QUARTER   = QT_TRANSLATE_NOOP("tkConstants", "quarter");
        const char* const YEAR      = QT_TRANSLATE_NOOP("tkConstants", "year");
        const char* const DECADE    = QT_TRANSLATE_NOOP("tkConstants", "decade");

        const char* const SECONDS    = QT_TRANSLATE_NOOP("tkConstants", "seconds");
        const char* const MINUTES    = QT_TRANSLATE_NOOP("tkConstants", "minutes");
        const char* const HOURS      = QT_TRANSLATE_NOOP("tkConstants", "hours");
        const char* const DAYS       = QT_TRANSLATE_NOOP("tkConstants", "days");
        const char* const WEEKS      = QT_TRANSLATE_NOOP("tkConstants", "weeks");
        const char* const MONTHS     = QT_TRANSLATE_NOOP("tkConstants", "months");
        const char* const QUARTERS   = QT_TRANSLATE_NOOP("tkConstants", "quarters");
        const char* const YEARS      = QT_TRANSLATE_NOOP("tkConstants", "years");
        const char* const DECADES    = QT_TRANSLATE_NOOP("tkConstants", "decades");

        // Day
        const char* const WAKEUPTIME           = QT_TRANSLATE_NOOP("tkConstants", "wake up");
        const char* const BREAKFAST            = QT_TRANSLATE_NOOP("tkConstants", "breakfast");
        const char* const TENOCLOCKBRUNCH      = QT_TRANSLATE_NOOP("tkConstants", "mid-morning");
        const char* const MORNING              = QT_TRANSLATE_NOOP("tkConstants", "morning");
        const char* const MIDDAY               = QT_TRANSLATE_NOOP("tkConstants", "midday");
        const char* const LUNCH                = QT_TRANSLATE_NOOP("tkConstants", "lunch");
        const char* const AFTERNOON            = QT_TRANSLATE_NOOP("tkConstants", "afternoon");
        const char* const TEATIME              = QT_TRANSLATE_NOOP("tkConstants", "mid-afternoon");
        const char* const DINER                = QT_TRANSLATE_NOOP("tkConstants", "dinner");
        const char* const EVENING              = QT_TRANSLATE_NOOP("tkConstants", "evening");
        const char* const BEDTIME              = QT_TRANSLATE_NOOP("tkConstants", "bedtime");

        // Meal time relations
        const char* const NOMEALRELATION      = QT_TRANSLATE_NOOP("tkConstants", "no meal relation");
        const char* const DURINGMEAL          = QT_TRANSLATE_NOOP("tkConstants", "during meal");
        const char* const AFTERMEAL           = QT_TRANSLATE_NOOP("tkConstants", "after meal");
        const char* const BEFOREMEAL          = QT_TRANSLATE_NOOP("tkConstants", "before meal");
        const char* const NOTDURINGMEAL       = QT_TRANSLATE_NOOP("tkConstants", "not during meal");
        const char* const ONLYIFMEAL          = QT_TRANSLATE_NOOP("tkConstants", "only if meal");
        const char* const SEPARATEDFROMFOOD   = QT_TRANSLATE_NOOP("tkConstants", "separated from food (1-2 hours)");
        const char* const SUGGESTEDWITHFOOD   = QT_TRANSLATE_NOOP("tkConstants", "suggested with food");
        const char* const WITHORWITHOUTFOOD   = QT_TRANSLATE_NOOP("tkConstants", "with or without food");

        // Splashscreen messages
        const char* const USING_LIBRARY_1                   = QT_TRANSLATE_NOOP("tkConstants", "Using library : %1");
        const char* const STARTING_APPLICATION_AT_1         = QT_TRANSLATE_NOOP("tkConstants", "Starting application at %1");
        const char* const INITIALIZING_TRANSLATIONS         = QT_TRANSLATE_NOOP("tkConstants", "Initializing Translations...");
        const char* const INITIALIZING_LIBRARIES            = QT_TRANSLATE_NOOP("tkConstants", "Initializing libraries..." );
        const char* const NEED_LICENSE_AGREEMENT            = QT_TRANSLATE_NOOP("tkConstants", "Needed Licence Agreement...");
        const char* const CHECKING_DIRECTORY_STRUCTURE      = QT_TRANSLATE_NOOP("tkConstants", "Checking directory structure...");
        const char* const INITIALIZING_DEFAULTS_PARAMS      = QT_TRANSLATE_NOOP("tkConstants", "Initializing Default Parameters..." );
        const char* const INITIALIZING_PLUGINS              = QT_TRANSLATE_NOOP("tkConstants", "Initializing Plugins...");
        const char* const FIRST_TIME_RUNNING                = QT_TRANSLATE_NOOP("tkConstants", "First time running");
        const char* const FEATURE_NOT_IMPLEMENTED           = QT_TRANSLATE_NOOP("tkConstants", "This feature is not yet implemented.");
        const char* const RAISING_APPLICATION               = QT_TRANSLATE_NOOP("tkConstants", "Raising Application...");
        const char* const CHECKUPDATE                       = QT_TRANSLATE_NOOP("tkConstants", "Check for update");
        const char* const CHECKING_UPDATES                  = QT_TRANSLATE_NOOP("tkConstants", "Checking for updates...");
        const char* const INITIALIZATING_DATABASES          = QT_TRANSLATE_NOOP("tkConstants", "Initializing databases...");


        // Settings related messages
        const char* const SETTINGS_RECOVERED                = QT_TRANSLATE_NOOP("tkConstants", "Settings recovered" );
        const char* const LOADING_SETTINGS                  = QT_TRANSLATE_NOOP("tkConstants", "Reading settings file");
        const char* const SAVING_SETTINGS                   = QT_TRANSLATE_NOOP("tkConstants", "Settings recovered" );
        const char* const CREATING_DEFAULT_SETTINGS_FOR_1   = QT_TRANSLATE_NOOP("tkConstants", "Creating default settings for %1");

        // Users related msessage
        const char* const WELCOME_USER                      = QT_TRANSLATE_NOOP("tkConstants", "Welcome to FreeMedForms, you are now connected.");
        const char* const CONNECTED_AS_1                    = QT_TRANSLATE_NOOP("tkConstants", "Connected as\n  %1");
        const char* const NO_USER_CONNECTED                 = QT_TRANSLATE_NOOP("tkConstants", "No user connected.");
        const char* const USER                              = QT_TRANSLATE_NOOP("tkConstants", "User");
        const char* const USER_DATAS                        = QT_TRANSLATE_NOOP("tkConstants", "User datas");

        const char* const SAVE_AND_RESTORE                  = QT_TRANSLATE_NOOP("tkConstants", "Save and restore");

        // Files and Paths
        const char* const PATH                               = QT_TRANSLATE_NOOP("tkConstants", "Path");
        const char* const PATH_1_DOESNOT_EXISTS              = QT_TRANSLATE_NOOP("tkConstants", "Path %1 does not exist");
        const char* const PATH_1_ISNOT_EMPTY                 = QT_TRANSLATE_NOOP("tkConstants", "Path %1 is not empty");
        const char* const PATH_1_CONTAINS_DIRS               = QT_TRANSLATE_NOOP("tkConstants", "Path %1 contains dirs");
        const char* const PATH_1_CANNOT_BE_REMOVED           = QT_TRANSLATE_NOOP("tkConstants", "Path %1 can not be removed");
        const char* const PATH_1_CANNOT_BE_CREATED           = QT_TRANSLATE_NOOP("tkConstants", "Path %1 can not be created");
        const char* const CREATE_DIR_1                       = QT_TRANSLATE_NOOP("tkConstants", "Creating dir %1");
        const char* const FILE_1_DOESNOT_EXISTS              = QT_TRANSLATE_NOOP("tkConstants", "File %1 does not exist");
        const char* const FILE_1_ISNOT_READABLE              = QT_TRANSLATE_NOOP("tkConstants", "File %1 is not readable");
        const char* const FILE_1_CANNOT_BE_REMOVED           = QT_TRANSLATE_NOOP("tkConstants", "File %1 can not be removed");
        const char* const FILE_1_LOADED                      = QT_TRANSLATE_NOOP("tkConstants", "File %1 loaded");
        const char* const FILE_1_ISEMPTY                     = QT_TRANSLATE_NOOP("tkConstants", "File %1 is empty");

        const char* const OPEN_FILE                          = QT_TRANSLATE_NOOP("tkConstants", "Open file");
        const char* const OPENING_FILE_1                     = QT_TRANSLATE_NOOP("tkConstants", "Opening file %1");
        const char* const SAVING_FILE_1                      = QT_TRANSLATE_NOOP("tkConstants", "Saving file %1");

        // Widely used words
        const char* const TYPE                               = QT_TRANSLATE_NOOP("tkConstants", "Type");
        const char* const STATUS                             = QT_TRANSLATE_NOOP("tkConstants", "Status");
        const char* const ICD10                              = QT_TRANSLATE_NOOP("tkConstants", "ICD10");


        // Messages and errors
        const char* const INFORMATIONS                       = QT_TRANSLATE_NOOP("tkConstants", "Informations");
        const char* const CANCEL                             = QT_TRANSLATE_NOOP("tkConstants", "Cancel");
        const char* const CLEAR                              = QT_TRANSLATE_NOOP("tkConstants", "Clear");
        const char* const VERSION                            = QT_TRANSLATE_NOOP("tkConstants", "Version");
        const char* const DESCRIPTION                        = QT_TRANSLATE_NOOP("tkConstants", "Description");
        const char* const AUTHOR                             = QT_TRANSLATE_NOOP("tkConstants", "Author");
        const char* const PROVIDER                           = QT_TRANSLATE_NOOP("tkConstants", "Provider");
        const char* const UNKNOWN                            = QT_TRANSLATE_NOOP("tkConstants", "Unknown");
        const char* const READY                              = QT_TRANSLATE_NOOP("tkConstants", "Ready");
        const char* const AVAILABLE                          = QT_TRANSLATE_NOOP("tkConstants", "Available");
        const char* const UNAVAILABLE                        = QT_TRANSLATE_NOOP("tkConstants", "Unavailable");
        const char* const MESSAGES                           = QT_TRANSLATE_NOOP("tkConstants", "Messages");
        const char* const LOGGED_MESSAGES                    = QT_TRANSLATE_NOOP("tkConstants", "Logged Messages");
        const char* const ERRORS                             = QT_TRANSLATE_NOOP("tkConstants", "Errors");
        const char* const LOGGED_ERRORS                      = QT_TRANSLATE_NOOP("tkConstants", "Logged Errors");
        const char* const INFORMATIVE_MESSAGE_1              = QT_TRANSLATE_NOOP("tkConstants", "Informative message : %1");
        const char* const STARTING_TASK_1                    = QT_TRANSLATE_NOOP("tkConstants", "Starting task : %1");
        const char* const POST_TO_1                          = QT_TRANSLATE_NOOP("tkConstants", "posting message to : %1");
        const char* const ERROR_1_OCCURED_WHILE_2            = QT_TRANSLATE_NOOP("tkConstants", "Error %1 occured while %2");
        const char* const ERROR_1_LINE_2_COLUMN_3            = QT_TRANSLATE_NOOP("tkConstants", "Error %1 : line %2, column %3");
        const char* const CAN_NOT_CREATE_1_ALREADY_EXISTS    = QT_TRANSLATE_NOOP("tkConstants", "Can not create %1 : it already exists");
        const char* const CAN_NOT_RETURN_1_DOESNOT_EXISTS    = QT_TRANSLATE_NOOP("tkConstants", "Can not return %1 : it does not exists");
        const char* const CAN_NOT_CREATE_1_NOPARENT          = QT_TRANSLATE_NOOP("tkConstants", "Can not create %1 : no parent founded");
        const char* const _1_ISNOT_AVAILABLE                 = QT_TRANSLATE_NOOP("tkConstants", "%1 is not avaible");
        const char* const _1_ISNOT_AVAILABLE_CANNOTBE_CREATED = QT_TRANSLATE_NOOP("tkConstants", "%1 is not avaible and can not be created");
        const char* const _1_ARENOT_AVAILABLE                = QT_TRANSLATE_NOOP("tkConstants", "%1 are not avaible");
        const char* const SETTING_1_PATH_TO_2                = QT_TRANSLATE_NOOP("tkConstants", "Setting %1 path to %2");
        const char* const ERROR_1_FROM_DATABASE_2            = QT_TRANSLATE_NOOP("tkConstants", "Error %1 from database %2");
        const char* const NO_OBJECT_TO_TRANSLATE             = QT_TRANSLATE_NOOP("tkConstants", "No object to translate");
        const char* const NO_1_FOUND                         = QT_TRANSLATE_NOOP("tkConstants", "No %1 found.");
        const char* const PLEASE_DESCRIBE_PROBLEM            = QT_TRANSLATE_NOOP("tkConstants", "Please describe your problem.");
        const char* const YES                                = QT_TRANSLATE_NOOP("tkConstants", "Yes");
        const char* const NO                                 = QT_TRANSLATE_NOOP("tkConstants", "No");
        const char* const GENERAL                            = QT_TRANSLATE_NOOP("tkConstants", "General");
        const char* const APPLICATION_FAILURE                = QT_TRANSLATE_NOOP("tkConstants", "Fatal error : Application failure. Please restart application.");

        const char* const TRYING_TO_CREATE_1_PLACE_2         = QT_TRANSLATE_NOOP("tkConstants", "Trying to create %1 \nPlace : %2");
        const char* const UNABLE_TO_OPEN_DATABASE_1_ERROR_2  = QT_TRANSLATE_NOOP("tkConstants", "Unable to open database %1 : Error : %2");
        const char* const UNABLE_TO_SAVE_DATA_IN_DATABASE_1  = QT_TRANSLATE_NOOP("tkConstants", "Unable to save data in database %1.");
        const char* const DATABASE_1_CORRECTLY_CREATED       = QT_TRANSLATE_NOOP("tkConstants", "Database %1 correctly created");
        const char* const DATABASE_1_CANNOT_BE_CREATED_ERROR_2 = QT_TRANSLATE_NOOP("tkConstants", "Database %1 can not be created. Error: %2.");

        // Sender and Updater
        const char* const START_MESSAGE_SENDING              = QT_TRANSLATE_NOOP("tkConstants", "Starting to send message.");
        const char* const MESSAGE_SENDED_OK                  = QT_TRANSLATE_NOOP("tkConstants", "Message sended without error.");
        const char* const MESSAGE_NOT_SENDED                 = QT_TRANSLATE_NOOP("tkConstants", "An error occured, message was not sended.");
        const char* const CHECKING_UPDATE_FROM_1             = QT_TRANSLATE_NOOP("tkConstants", "Checking for updates from %1");
        const char* const VERSION_UPTODATE                   = QT_TRANSLATE_NOOP("tkConstants", "Version up to date");
        const char* const CURRENT_VERSION                    = QT_TRANSLATE_NOOP("tkConstants", "Current version :");
        const char* const LATEST_VERSION                     = QT_TRANSLATE_NOOP("tkConstants", "Lastest version :");
        const char* const UPDATE_AVAILABLE                   = QT_TRANSLATE_NOOP("tkConstants", "Update Available");

        // Team functions
        const char* const TEAM_CREATOR = QT_TRANSLATE_NOOP("tkConstants", "Creator and Main Developper");
        const char* const TEAM_DEVELOPPERS_CONTRIBUTORS = QT_TRANSLATE_NOOP("tkConstants", "Developpers and Contributors");
        const char* const TEAM_DEBUGGER_ADVISOR = QT_TRANSLATE_NOOP("tkConstants", "Debugger advisor");
        const char* const TEAM_DEVELOPPER_AND_DEBUGGER = QT_TRANSLATE_NOOP("tkConstants", "Developper and debugger advisor");
        const char* const TEAM_PACKAGER = QT_TRANSLATE_NOOP("tkConstants", "Packager");
        const char* const TEAM_PACKAGER_FOR_1 = QT_TRANSLATE_NOOP("tkConstants", "Packager for %1");
        const char* const TEAM_DRUG_DATABASE_MANAGER = QT_TRANSLATE_NOOP("tkConstants", "Drugs Database Management");
        const char* const TEAM_MEDICAL_ADVISORS = QT_TRANSLATE_NOOP("tkConstants", "Medical advisors");
        const char* const TEAM_MEDICAL_ADVISOR = QT_TRANSLATE_NOOP("tkConstants", "Medical advisor");
	const char* const TEAM_WEBMASTER = QT_TRANSLATE_NOOP("tkConstants", "Webmaster");
	const char* const TEAM_TRANSLATORS = QT_TRANSLATE_NOOP("tkConstants", "Translators");

        // Build related
        const char* const BUILD_INFORMATIONS = QT_TRANSLATE_NOOP("tkConstants", "Build informations");
        const char* const BUILD_VERSION_INFORMATIONS = QT_TRANSLATE_NOOP("tkConstants", "Version informations");
        const char* const BUILD_DATE_TIME_1_2 = QT_TRANSLATE_NOOP("tkConstants", "Build on %1 %2");
        const char* const BUILD_VERSION_1 = QT_TRANSLATE_NOOP("tkConstants", "Build version : %1");
        const char* const BUILD_FULLAPP = QT_TRANSLATE_NOOP("tkConstants", "Full application");
        const char* const BUILD_SVNAPP = QT_TRANSLATE_NOOP("tkConstants", "SVN application");
        const char* const BUILD_DEBUG = QT_TRANSLATE_NOOP("tkConstants", "Build in debug mode");
        const char* const BUILD_RELEASE = QT_TRANSLATE_NOOP("tkConstants", "Build in release mode");

        // Print related
        const char* const HEADER = QT_TRANSLATE_NOOP("tkConstants", "Header");
        const char* const FOOTER = QT_TRANSLATE_NOOP("tkConstants", "Footer");
        const char* const WATERMARK = QT_TRANSLATE_NOOP("tkConstants", "Watermark");
        const char* const PRINTING = QT_TRANSLATE_NOOP("tkConstants", "Printing");


        // File filters
        const char * const FILE_FILTER_ZIP = QT_TRANSLATE_NOOP("tkConstants", "Zip archive (*zip)");

        // Plugins related
        const char* const PLUGINS_CATEGORY = QT_TRANSLATE_NOOP("tkConstants", "Plugins");

        // Countries
        const char* const COUNTRY_FRANCE      = QT_TRANSLATE_NOOP( "tkConstants", "France" );
        const char* const COUNTRY_GERMANY     = QT_TRANSLATE_NOOP( "tkConstants", "Germany" );
        const char* const COUNTRY_CANADA      = QT_TRANSLATE_NOOP( "tkConstants", "Canada" );

        // Patient related
        const char* const PATIENT_NAME = QT_TRANSLATE_NOOP("tkConstants", "Patient Name");
        const char* const PATIENT      = QT_TRANSLATE_NOOP("tkConstants", "Patient");
        const char* const PATIENTS     = QT_TRANSLATE_NOOP("tkConstants", "Patients");
        const char* const PATIENT_INFORMATION  = QT_TRANSLATE_NOOP("tkConstants", "Patient informations");
        const char* const PATIENT_DATABASE  = QT_TRANSLATE_NOOP("tkConstants", "Patient database");
        const char* const CLEAR_PATIENT_INFOS = QT_TRANSLATE_NOOP("tkConstants", "Clear patient's information");
        const char* const TOGGLE_PATIENT_INFORMATIONS = QT_TRANSLATE_NOOP("tkConstants", "Toggle patient's information");

        // Genders
        const char* const MALE          = QT_TRANSLATE_NOOP("tkConstants", "Male");
        const char* const FEMALE        = QT_TRANSLATE_NOOP("tkConstants", "Female");
        const char* const HERMAPHRODISM = QT_TRANSLATE_NOOP("tkConstants", "Hermaphrodism");

        // Titles
        const char* const MISTER      = QT_TRANSLATE_NOOP("tkConstants", "Mister");
        const char* const MISS        = QT_TRANSLATE_NOOP("tkConstants", "Miss");
        const char* const MADAM       = QT_TRANSLATE_NOOP("tkConstants", "Madam");
        const char* const DOCTOR      = QT_TRANSLATE_NOOP("tkConstants", "Doctor");
        const char* const PROFESSOR   = QT_TRANSLATE_NOOP("tkConstants", "Professor");
        const char* const CAPTAIN     = QT_TRANSLATE_NOOP("tkConstants", "Captain");

        // ShortCut keys
         /*: Text Align Left shortcut key */
        const char* const K_ALIGNLEFT                = QT_TRANSLATE_NOOP("tkConstants", "Ctrl+L");

         /*: Text Align Right shortcut key */
        const char* const K_ALIGNRIGHT               = QT_TRANSLATE_NOOP("tkConstants", "Ctrl+R");

        /*: Text Align Center shortcut key */
        const char* const K_ALIGNCENTER              = QT_TRANSLATE_NOOP("tkConstants", "Ctrl+E");

        /*: Text Align Justify shortcut key */
        const char* const K_ALIGNJUSTIFY             = QT_TRANSLATE_NOOP("tkConstants", "Ctrl+J");

        /*: Text Align Left shortcut key : Mac specific */
        const char* const K_ALIGNLEFT_MAC            = QT_TRANSLATE_NOOP("tkConstants", "Ctrl+L");

        /*: Text Align Right shortcut key : Mac specific */
        const char* const K_ALIGNRIGHT_MAC           = QT_TRANSLATE_NOOP("tkConstants", "Ctrl+R");

        /*: Text Align Center shortcut key : Mac specific */
        const char* const K_ALIGNCENTER_MAC          = QT_TRANSLATE_NOOP("tkConstants", "Ctrl+E");

        /*: Text Align Justify shortcut key : Mac specific */
        const char* const K_ALIGNJUSTIFY_MAC         = QT_TRANSLATE_NOOP("tkConstants", "Ctrl+J");

        /*: Add table Editor shortcut key */
        const char* const K_EDITOR_ADDTABLE         = QT_TRANSLATE_NOOP("tkConstants", "Ctrl+Shift+T");

        /*: Add table Editor shortcut key : Mac specific */
        const char* const K_EDITOR_ADDTABLE_MAC     = QT_TRANSLATE_NOOP("tkConstants", "");

const char * const EDITOR_TOGGLETOOLBAR_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Toggle toolbar");
const char * const EDITOR_FILEOPEN_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Open in editor");
const char * const EDITOR_FILESAVE_TEXT  = QT_TRANSLATE_NOOP("tkConstants", "Save editor");
const char * const EDITORMENU_TEXT       = QT_TRANSLATE_NOOP("tkConstants", "Rich Text Editor");


// ShortCuts
//: ShortCut for "Print prescription"
const char* const   K_PRINT_PRESCRIPTION = QT_TRANSLATE_NOOP("tkConstants", "Ctrl+Shift+P");


// For multilingual class template
const char* const ALL_LANGUAGE = "xx";


} // end Constants


namespace ConstantTranslations {

TRUTILS_EXPORT QString tkTr(const char* toTr, const int plurials=1);
TRUTILS_EXPORT QStringList periods();
TRUTILS_EXPORT QString period(int id);
TRUTILS_EXPORT QString periodPlurialForm(int id, int nb = 1, const QString &defaultValue = QString::null);
TRUTILS_EXPORT QStringList dailySchemeList();
TRUTILS_EXPORT QStringList dailySchemeXmlTagList();
TRUTILS_EXPORT QString dailyScheme(const int dailySchemeFlag);
TRUTILS_EXPORT QStringList preDeterminedAges();
TRUTILS_EXPORT QStringList mealTime();
TRUTILS_EXPORT QString mealTime(const int index);

TRUTILS_EXPORT QStringList genders();
TRUTILS_EXPORT QStringList titles();

} // end  ConstantTranslations

} // end TranslationUtils

#endif // TKCONSTANTTRANSLATIONS_H
