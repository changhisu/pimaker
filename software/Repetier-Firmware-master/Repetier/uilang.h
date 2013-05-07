/*
    This file is part of PiMaker-Firmware.

    PiMaker-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Foobar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with PiMaker-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

// At first all terms in english are defined. After that the selected language
// can overwrite the definition. That way new strings are at least in english
// available.

#define UI_TEXT_ON               "On"
#define UI_TEXT_OFF              "Off"
#define UI_TEXT_NA               "N/A" // Output for not available
#define UI_TEXT_YES              "Yes"
#define UI_TEXT_NO               "No"
#define UI_TEXT_SEL              "\003"
#define UI_TEXT_NOSEL            "\004"
#define UI_TEXT_PRINT_POS        "Printing..."
#define UI_TEXT_PRINTING         "Printing"
#define UI_TEXT_IDLE             "Idle"
#define UI_TEXT_NOSDCARD         "No SD Card"
#define UI_TEXT_ERROR            "**** ERROR ****"
#define UI_TEXT_BACK             "Back \001"
#define UI_TEXT_QUICK_SETTINGS   "Quick Settings"
#define UI_TEXT_CONFIGURATION    "Configuration"
#define UI_TEXT_POSITION         "Position"
#define UI_TEXT_EXTRUDER         "Extruder"
#define UI_TEXT_SD_CARD          "SD Card"
#define UI_TEXT_DEBUGGING        "Debugging"
#define UI_TEXT_HOME_ALL         "Home All"
#define UI_TEXT_HOME_X           "Home X"
#define UI_TEXT_HOME_Y           "Home Y"
#define UI_TEXT_HOME_Z           "Home Z"
#define UI_TEXT_PREHEAT_PLA      "Preheat PLA"
#define UI_TEXT_PREHEAT_ABS      "Preheat ABS"
#define UI_TEXT_COOLDOWN         "Cooldown"
#define UI_TEXT_SET_TO_ORIGIN    "Set to Origin"
#define UI_TEXT_DISABLE_STEPPER  "Disable stepper"
#define UI_TEXT_X_POSITION       "X Position"
#define UI_TEXT_X_POS_FAST       "X Pos. Fast"
#define UI_TEXT_Y_POSITION       "Y Position"
#define UI_TEXT_Y_POS_FAST       "Y Pos. Fast"
#define UI_TEXT_Z_POSITION       "Z Position"
#define UI_TEXT_Z_POS_FAST       "Z Pos. Fast"
#define UI_TEXT_E_POSITION       "Extr. position"
#define UI_TEXT_BED_TEMP         "Bed Temp.:%Eb\002C"
#define UI_TEXT_EXTR0_TEMP       "Temp. 0  :%E0\002C"
#define UI_TEXT_EXTR1_TEMP       "Temp. 1  :%E0\002C"
#define UI_TEXT_EXTR0_OFF        "Extruder 0 Off"
#define UI_TEXT_EXTR1_OFF        "Extruder 1 Off"
#define UI_TEXT_EXTR0_SELECT     "%X0 Select Extr.0"
#define UI_TEXT_EXTR1_SELECT     "%X1 Select Extr.1"
#define UI_TEXT_EXTR_ORIGIN      "Set Origin"
#define UI_TEXT_PRINT_X          "Print X:%ax"
#define UI_TEXT_PRINT_Y          "Print Y:%ay"
#define UI_TEXT_PRINT_Z          "Print Z:%az"
#define UI_TEXT_MOVE_X           "Move X:%aX"
#define UI_TEXT_MOVE_Y           "Move Y:%aY"
#define UI_TEXT_MOVE_Z           "Move Z:%aZ"
#define UI_TEXT_JERK             "Jerk:%aj"
#define UI_TEXT_ZJERK            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION     "Acceleration"
#define UI_TEXT_STORE_TO_EEPROM  "Store to EEPROM"
#define UI_TEXT_LOAD_EEPROM      "Load f. EEPROM"
#define UI_TEXT_DBG_ECHO         "Echo:%do"
#define UI_TEXT_DBG_INFO         "Info:%di"
#define UI_TEXT_DBG_ERROR        "Errors:%de"
#define UI_TEXT_DBG_DRYRUN       "Dry run:%dd"
#define UI_TEXT_OPS_OFF          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC      "%O1 OPS Classic"
#define UI_TEXT_OPS_FAST         "%O2 OPS Fast"
#define UI_TEXT_OPS_RETRACT      "Retract :%Or"
#define UI_TEXT_OPS_BACKSLASH    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST      "Min.dist:%Od"
#define UI_TEXT_OPS_MOVE_AFTER   "Move after:%Oa"
#define UI_TEXT_ANTI_OOZE        "Anti Ooze"
#define UI_TEXT_PRINT_FILE       "Print file"
#define UI_TEXT_PAUSE_PRINT      "Pause Print"
#define UI_TEXT_CONTINUE_PRINT   "Continue Print"
#define UI_TEXT_UNMOUNT_CARD     "Unmount Card"
#define UI_TEXT_MOUNT_CARD       "Mount Card"
#define UI_TEXT_DELETE_FILE      "Delete file"
#define UI_TEXT_FEEDRATE         "Feedrate"
#define UI_TEXT_FEED_MAX_X       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z       "Max Z:%fz"
#define UI_TEXT_FEED_HOME_X      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z      "Home Z:%fZ"
#define UI_TEXT_ACTION_XPOSITION4 "X:%x0 mm","Min endstop:%sx","Max endstop:%sX",""
#define UI_TEXT_ACTION_YPOSITION4 "Y:%x1 mm","Min endstop:%sy","Max endstop:%sY",""
#define UI_TEXT_ACTION_ZPOSITION4 "Z:%x2 mm","Min endstop:%sz","Max endstop:%sZ",""
#define UI_TEXT_ACTION_XPOSITION_FAST4 "X:%x0 mm","Min endstop:%sx","Max endstop:%sX",""
#define UI_TEXT_ACTION_YPOSITION_FAST4 "Y:%x1 mm","Min endstop:%sy","Max endstop:%sY",""
#define UI_TEXT_ACTION_ZPOSITION_FAST4 "Z:%x2 mm","Min endstop:%sz","Max endstop:%sZ",""
#define UI_TEXT_ACTION_EPOSITION_FAST2 "E:%x3 mm","1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2 "X:%x0 mm","Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2 "Y:%x1 mm","Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2 "Z:%x2 mm","Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2 "X:%x0 mm","Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2 "Y:%x1 mm","Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2 "Z:%x2 mm","Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED          "Fan speed"
#define UI_TEXT_FAN_OFF           "Turn Fan Off"
#define UI_TEXT_FAN_25            "Set Fan 25%%%"
#define UI_TEXT_FAN_50            "Set Fan 50%%%"
#define UI_TEXT_FAN_75            "Set Fan 75%%%"
#define UI_TEXT_FAN_FULL          "Set Fan Full"
#define UI_TEXT_STEPPER_INACTIVE  "Stepper Inactive"
#define UI_TEXT_STEPPER_INACTIVE2 "Dis. After:%is","[s] 0=Off"
#define UI_TEXT_POWER_INACTIVE    "Max. Inactive"
#define UI_TEXT_POWER_INACTIVE2   "Dis. After:%ip","[s] 0=Off"
#define UI_TEXT_GENERAL           "General"
#define UI_TEXT_BAUDRATE          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS        "Steps/MM:%Se"
#define UI_TEXT_EXTR_START_FEED   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH        "Stab.Time:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L    "Advance lin:Xl%"
#define UI_TEXT_EXTR_ADVANCE_K    "Advance quad:Xa%"
#define UI_TEXT_EXTR_MANAGER      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN        "PID P:%Xp"
#define UI_TEXT_EXTR_IGAIN        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG "BangBang"
#define UI_TEXT_STRING_HM_PID     "PID"
#define UI_TEXT_STRING_ACTION     "Action:%la"
#define UI_TEXT_HEATING_EXTRUDER  "Heating Extruder"
#define UI_TEXT_HEATING_BED       "Heating Bed"
#define UI_TEXT_KILLED            "Killed"
#define UI_TEXT_STEPPER_DISABLED  "Stepper Disabled"
#define UI_TEXT_EEPROM_STORED     "Configuration","stored in EEPROM"
#define UI_TEXT_EEPROM_LOADED     "Configuration","loaded f. EEPROM"
#define UI_TEXT_UPLOADING         "Uploading..."
#define UI_TEXT_PAGE_BUFFER       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER     "E:%ec/%Ec\002C\176%oC"
#define UI_TEXT_PAGE_BED          "B:%eb/%Eb\002C\176%ob"
#define UI_TEXT_SPEED_MULTIPLY    "Speed Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY     "Flow Mul.:%of%%%"

// *************** german translation ****************

#if UI_LANGUAGE==1

#define UI_TEXT_ON               "An"
#define UI_TEXT_OFF              "Aus"
#define UI_TEXT_NA               "nv"
#define UI_TEXT_YES              "Ja"
#define UI_TEXT_NO               "Nein"
#define UI_TEXT_PRINT_POS        "Drucke..."
#define UI_TEXT_PRINTING         "Drucken"
#define UI_TEXT_IDLE             "Leerlauf"
#define UI_TEXT_NOSDCARD         "Keine SD Karte"
#define UI_TEXT_ERROR            "**** FEHLER ****"
#define UI_TEXT_BACK             "Zur\365ck \001"
#define UI_TEXT_QUICK_SETTINGS   "Schnelleinst."
#define UI_TEXT_CONFIGURATION    "Konfiguration"
#define UI_TEXT_POSITION         "Position"
#define UI_TEXT_EXTRUDER         "Extruder"
#define UI_TEXT_SD_CARD          "SD Karte"
#define UI_TEXT_DEBUGGING        "Debugging"
#define UI_TEXT_HOME_ALL         "Home Alle"
#define UI_TEXT_HOME_X           "Home X"
#define UI_TEXT_HOME_Y           "Home Y"
#define UI_TEXT_HOME_Z           "Home Z"
#define UI_TEXT_PREHEAT_PLA      "Vorheizen PLA"
#define UI_TEXT_PREHEAT_ABS      "Vorheizen ABS"
#define UI_TEXT_COOLDOWN         "Abk\xf5hlen"
#define UI_TEXT_SET_TO_ORIGIN    "Setze Nullpunkt"
#define UI_TEXT_DISABLE_STEPPER  "Motoren Aussch."
#define UI_TEXT_X_POSITION       "X Position"
#define UI_TEXT_X_POS_FAST       "X Pos. Schnell"
#define UI_TEXT_Y_POSITION       "Y Position"
#define UI_TEXT_Y_POS_FAST       "Y Pos. Schnell"
#define UI_TEXT_Z_POSITION       "Z Position"
#define UI_TEXT_Z_POS_FAST       "Z Pos. Schnell"
#define UI_TEXT_E_POSITION       "Extr. Position"
#define UI_TEXT_BED_TEMP         "Bed Temp.:%Eb\002C"
#define UI_TEXT_EXTR0_TEMP       "Temp. 0  :%E0\002C"
#define UI_TEXT_EXTR1_TEMP       "Temp. 1  :%E0\002C"
#define UI_TEXT_EXTR0_OFF        "Extruder 0 Aus"
#define UI_TEXT_EXTR1_OFF        "Extruder 1 Aus"
#define UI_TEXT_EXTR0_SELECT     "W\xe1hle Extr. 0"
#define UI_TEXT_EXTR1_SELECT     "W\xe1hle Extr. 1"
#define UI_TEXT_EXTR_ORIGIN      "Setze Nullpunkt"
#define UI_TEXT_PRINT_X          "Drucken X:%ax"
#define UI_TEXT_PRINT_Y          "Drucken Y:%ay"
#define UI_TEXT_PRINT_Z          "Drucken Z:%az"
#define UI_TEXT_MOVE_X           "Bewegen X:%aX"
#define UI_TEXT_MOVE_Y           "Bewegen Y:%aY"
#define UI_TEXT_MOVE_Z           "Bewegen Z:%aZ"
#define UI_TEXT_JERK             "Ruck:%aj"
#define UI_TEXT_ZJERK            "Z-Ruck:%aJ"
#define UI_TEXT_ACCELERATION     "Beschleunigung"
#define UI_TEXT_STORE_TO_EEPROM  "Sichere EEPROM"
#define UI_TEXT_LOAD_EEPROM      "Lade vom EEPROM"
#define UI_TEXT_DBG_ECHO         "Echo:%do"
#define UI_TEXT_DBG_INFO         "Info:%di"
#define UI_TEXT_DBG_ERROR        "Fehler:%de"
#define UI_TEXT_DBG_DRYRUN       "Trockenlauf:%dd"
#define UI_TEXT_OPS_OFF          "%O0 OPS Aus"
#define UI_TEXT_OPS_CLASSIC      "%O1 OPS Klassisch"
#define UI_TEXT_OPS_FAST         "%O2 OPS Schnell"
#define UI_TEXT_OPS_RETRACT      "Einfahren:%Or"
#define UI_TEXT_OPS_BACKSLASH    "Backsl.  :%Ob"
#define UI_TEXT_OPS_MINDIST      "Min.Abst.:%Od"
#define UI_TEXT_OPS_MOVE_AFTER   "Start nach:%Oa"
#define UI_TEXT_ANTI_OOZE        "Anti Ooze"
#define UI_TEXT_PRINT_FILE       "Drucke Datei"
#define UI_TEXT_PAUSE_PRINT      "Druck Pausieren"
#define UI_TEXT_CONTINUE_PRINT   "Druck Forts."
#define UI_TEXT_UNMOUNT_CARD     "Unmount Karte"
#define UI_TEXT_MOUNT_CARD       "Mount Karte"
#define UI_TEXT_DELETE_FILE      "Datei l\xefschen"
#define UI_TEXT_FEED_MAX_X       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z       "Max Z:%fz"
#define UI_TEXT_FEED_HOME_X      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z      "Home Z:%fZ"
#define UI_TEXT_ACTION_XPOSITION4 "X:%x0 mm","Min Endstopp:%sx","Max Endstopp:%sX",""
#define UI_TEXT_ACTION_YPOSITION4 "Y:%x1 mm","Min Endstopp:%sy","Max Endstopp:%sY",""
#define UI_TEXT_ACTION_ZPOSITION4 "Z:%x2 mm","Min Endstopp:%sz","Max Endstopp:%sZ",""
#define UI_TEXT_ACTION_XPOSITION_FAST4 "X:%x0 mm","Min Endstopp:%sx","Max Endstopp:%sX",""
#define UI_TEXT_ACTION_YPOSITION_FAST4 "Y:%x1 mm","Min Endstopp:%sy","Max Endstopp:%sY",""
#define UI_TEXT_ACTION_ZPOSITION_FAST4 "Z:%x2 mm","Min Endstopp:%sz","Max Endstopp:%sZ",""
#define UI_TEXT_ACTION_EPOSITION_FAST2 "E:%x3 mm","1 klick = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2 "X:%x0 mm","Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2 "Y:%x1 mm","Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2 "Z:%x2 mm","Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2 "X:%x0 mm","Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2 "Y:%x1 mm","Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2 "Z:%x2 mm","Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED          "L\365fter"
#define UI_TEXT_FAN_OFF           "L\365fter Aus"
#define UI_TEXT_FAN_25            "L\365fter auf 25%%%"
#define UI_TEXT_FAN_50            "L\365fter auf 50%%%"
#define UI_TEXT_FAN_75            "L\365fter auf 75%%%"
#define UI_TEXT_FAN_FULL          "L\365fter Voll"
#define UI_TEXT_STEPPER_INACTIVE  "Motor Inaktiv"
#define UI_TEXT_STEPPER_INACTIVE2 "Aus nach:%is","[s] 0=Aus"
#define UI_TEXT_POWER_INACTIVE    "Max. Inaktiv"
#define UI_TEXT_POWER_INACTIVE2   "Aus nach:%ip","[s] 0=Aus"
#define UI_TEXT_GENERAL           "Allgemein"
#define UI_TEXT_BAUDRATE          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS        "Schr/MM:%Se"
#define UI_TEXT_EXTR_START_FEED   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL        "Beschl.:%XA"
#define UI_TEXT_EXTR_WATCH        "Stab.Zeit:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L    "Advance lin:Xl%"
#define UI_TEXT_EXTR_ADVANCE_K    "Advance quad:Xa%"
#define UI_TEXT_EXTR_MANAGER      "Regler:%Xh"
#define UI_TEXT_EXTR_PGAIN        "PID P:%Xp"
#define UI_TEXT_EXTR_IGAIN        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG "BangBang"
#define UI_TEXT_STRING_HM_PID     "PID"
#define UI_TEXT_STRING_ACTION     "Aktion:%la"
#define UI_TEXT_HEATING_EXTRUDER  "Heize Extruder"
#define UI_TEXT_HEATING_BED       "Heize Druckbett"
#define UI_TEXT_KILLED            "Angehalten"
#define UI_TEXT_STEPPER_DISABLED  "Motoren Aus"
#define UI_TEXT_EEPROM_STORED     "Konfiguration","gespeichert."
#define UI_TEXT_EEPROM_LOADED     "Konfiguration","geladen."
#define UI_TEXT_UPLOADING         "Hochladen..."
#define UI_TEXT_PAGE_BUFFER       "Puffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER     "E:%ec/%Ec\002C\176%oC"
#define UI_TEXT_PAGE_BED          "B:%eb/%Eb\002C\176%ob"
#define UI_TEXT_SPEED_MULTIPLY    "Geschw.Mul:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY     "Flow Mul.:%of%%%"
#define UI_TEXT_ADVANCE_L         "Advance lin:Xl%"
#define UI_TEXT_ADVANCE_K         "Advance quad:Xa%"

#endif

// Dutch translation
#if UI_LANGUAGE==2

#define UI_TEXT_ON               "Aan"
#define UI_TEXT_OFF              "Uit"
#define UI_TEXT_NA               "N/A" // Output for not available
#define UI_TEXT_YES              "Ja"
#define UI_TEXT_NO               "Nee"
#define UI_TEXT_SEL              "\003"
#define UI_TEXT_NOSEL            "\004"
#define UI_TEXT_PRINT_POS        "Printen..."
#define UI_TEXT_PRINTING         "Printen"
#define UI_TEXT_IDLE             "Rust"
#define UI_TEXT_NOSDCARD         "Geen SD Kaart"
#define UI_TEXT_ERROR            "**** FOUT ****"
#define UI_TEXT_BACK             "Terug \001"
#define UI_TEXT_QUICK_SETTINGS   "Snel Instelling"
#define UI_TEXT_CONFIGURATION    "Configuratie"
#define UI_TEXT_POSITION         "Positie"
#define UI_TEXT_EXTRUDER         "Extruder"
#define UI_TEXT_SD_CARD          "SD Kaart"
#define UI_TEXT_DEBUGGING        "Debugging"
#define UI_TEXT_HOME_ALL         "Home Alles"
#define UI_TEXT_HOME_X           "Home X"
#define UI_TEXT_HOME_Y           "Home Y"
#define UI_TEXT_HOME_Z           "Home Z"
#define UI_TEXT_PREHEAT          "Voorverwarmen"
#define UI_TEXT_COOLDOWN         "Koelen"
#define UI_TEXT_SET_TO_ORIGIN    "Zet oorsprong"
#define UI_TEXT_DISABLE_STEPPER  "Zet motor uit"
#define UI_TEXT_X_POSITION       "X Positie"
#define UI_TEXT_X_POS_FAST       "X Pos. Snel"
#define UI_TEXT_Y_POSITION       "Y Positie"
#define UI_TEXT_Y_POS_FAST       "Y Pos. Snel"
#define UI_TEXT_Z_POSITION       "Z Positie"
#define UI_TEXT_Z_POS_FAST       "Z Pos. Snel"
#define UI_TEXT_E_POSITION       "Extr. positie"
#define UI_TEXT_BED_TEMP         "Bed Temp.:%Eb\002C"
#define UI_TEXT_EXTR0_TEMP       "Temp. 0  :%E0\002C"
#define UI_TEXT_EXTR1_TEMP       "Temp. 1  :%E0\002C"
#define UI_TEXT_EXTR0_OFF        "Extruder 0 Uit"
#define UI_TEXT_EXTR1_OFF        "Extruder 1 Uit"
#define UI_TEXT_EXTR0_SELECT     "%X0 Select Extr.0"
#define UI_TEXT_EXTR1_SELECT     "%X1 Select Extr.1"
#define UI_TEXT_EXTR_ORIGIN      "Zet oorsprong"
#define UI_TEXT_PRINT_X          "Print X:%ax"
#define UI_TEXT_PRINT_Y          "Print Y:%ay"
#define UI_TEXT_PRINT_Z          "Print Z:%az"
#define UI_TEXT_MOVE_X           "Beweeg X:%aX"
#define UI_TEXT_MOVE_Y           "Beweeg Y:%aY"
#define UI_TEXT_MOVE_Z           "Beweeg Z:%aZ"
#define UI_TEXT_JERK             "Ruk:%aj"
#define UI_TEXT_ZJERK            "Z-Ruk:%aJ"
#define UI_TEXT_ACCELERATION     "Acceleratie"
#define UI_TEXT_STORE_TO_EEPROM  "Opslaan n. EEPROM"
#define UI_TEXT_LOAD_EEPROM      "Ladd f. EEPROM"
#define UI_TEXT_DBG_ECHO         "Echo:%do"
#define UI_TEXT_DBG_INFO         "Info:%di"
#define UI_TEXT_DBG_ERROR        "Fouten:%de"
#define UI_TEXT_DBG_DRYRUN       "Droogloop:%dd"
#define UI_TEXT_OPS_OFF          "%O0 OPS Uit"
#define UI_TEXT_OPS_CLASSIC      "%O1 OPS Klassiek"
#define UI_TEXT_OPS_FAST         "%O2 OPS Snel"
#define UI_TEXT_OPS_RETRACT      "Terugtrekken:%Or"
#define UI_TEXT_OPS_BACKSLASH    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST      "Min. afstand:%Od"
#define UI_TEXT_OPS_MOVE_AFTER   "Beweeg na:%Oa"
#define UI_TEXT_ANTI_OOZE        "Anti lekken"
#define UI_TEXT_PRINT_FILE       "Print bestand"
#define UI_TEXT_PAUSE_PRINT      "Pauzeer Print"
#define UI_TEXT_CONTINUE_PRINT   "Zet print voort"
#define UI_TEXT_UNMOUNT_CARD     "Ontkoppel Kaart"
#define UI_TEXT_MOUNT_CARD       "Koppel Kaart"
#define UI_TEXT_DELETE_FILE      "Verw. bestand"
#define UI_TEXT_FEEDRATE         "Beweeg snelheid"
#define UI_TEXT_FEED_MAX_X       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z       "Max Z:%fz"
#define UI_TEXT_FEED_HOME_X      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z      "Home Z:%fZ"
#define UI_TEXT_ACTION_XPOSITION4 "X:%x0 mm","Min eindst.:%sx","Max eindst.:%sX",""
#define UI_TEXT_ACTION_YPOSITION4 "Y:%x1 mm","Min eindst.:%sy","Max eindst.:%sY",""
#define UI_TEXT_ACTION_ZPOSITION4 "Z:%x2 mm","Min eindst.:%sz","Max eindst.:%sZ",""
#define UI_TEXT_ACTION_XPOSITION_FAST4 "X:%x0 mm","Min eindst.:%sx","Max eindst.:%sX",""
#define UI_TEXT_ACTION_YPOSITION_FAST4 "Y:%x1 mm","Min eindst.:%sy","Max eindst.:%sY",""
#define UI_TEXT_ACTION_ZPOSITION_FAST4 "Z:%x2 mm","Min eindst.:%sz","Max eindst.:%sZ",""
#define UI_TEXT_ACTION_EPOSITION_FAST2 "E:%x3 mm","1 klik = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2 "X:%x0 mm","Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2 "Y:%x1 mm","Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2 "Z:%x2 mm","Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2 "X:%x0 mm","Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2 "Y:%x1 mm","Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2 "Z:%x2 mm","Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED          "Fan snelheid"
#define UI_TEXT_FAN_OFF           "Zet Fan uit"
#define UI_TEXT_FAN_25            "Zet Fan 25%%%"
#define UI_TEXT_FAN_50            "Zet Fan 50%%%"
#define UI_TEXT_FAN_75            "Zet Fan 75%%%"
#define UI_TEXT_FAN_FULL          "Zet Fan Vol aan"
#define UI_TEXT_STEPPER_INACTIVE  "Motor Inactief"
#define UI_TEXT_STEPPER_INACTIVE2 "Uit na:%is","[s] 0=Off"
#define UI_TEXT_POWER_INACTIVE    "Max. Inactief"
#define UI_TEXT_POWER_INACTIVE2   "Zet uit na:%ip","[s] 0=Off"
#define UI_TEXT_GENERAL           "Algemeen"
#define UI_TEXT_BAUDRATE          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS        "Stappen/MM:%Se"
#define UI_TEXT_EXTR_START_FEED   "Start FR.:%Xf"
#define UI_TEXT_EXTR_MAX_FEED     "Max FR.:%XF"
#define UI_TEXT_EXTR_ACCEL        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH        "Stab.Tijd:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L    "Advance lin:Xl%"
#define UI_TEXT_EXTR_ADVANCE_K    "Advance quad:Xa%"
#define UI_TEXT_EXTR_MANAGER      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN        "PID P:%Xp"
#define UI_TEXT_EXTR_IGAIN        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG "BangBang"
#define UI_TEXT_STRING_HM_PID     "PID"
#define UI_TEXT_STRING_ACTION     "Action:%la"
#define UI_TEXT_HEATING_EXTRUDER  "Opwarmen Extru."
#define UI_TEXT_HEATING_BED       "Opwarmen Bed"
#define UI_TEXT_KILLED            "Uitgeschakeld"
#define UI_TEXT_STEPPER_DISABLED  "Motor uitgezet"
#define UI_TEXT_EEPROM_STORED     "Configuratie","saved. in EEPROM"
#define UI_TEXT_EEPROM_LOADED     "Configuratie","loaded f. EEPROM"
#define UI_TEXT_UPLOADING         "Uploaden..."
#define UI_TEXT_PAGE_BUFFER       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER     "E:%ec/%Ec\002C\176%oC"
#define UI_TEXT_PAGE_BED          "B:%eb/%Eb\002C\176%ob"
#define UI_TEXT_SPEED_MULTIPLY    "Snelh. Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY     "Flow Mul.:%of%%%"

#endif

// *************************************************************************************
//                             User defined language
//
// If you need a language not mentioned above, you can translate this dummy entry.
// If you want it added permanently to the distribution, spend it to the community under
// GPL V3. Only new and complete translations are put into the official distribution!
// *************************************************************************************

#if UI_LANGUAGE==1000

#define UI_TEXT_ON               "On"
#define UI_TEXT_OFF              "Off"
#define UI_TEXT_NA               "N/A" // Output for not available
#define UI_TEXT_YES              "Yes"
#define UI_TEXT_NO               "No"
#define UI_TEXT_SEL              "\003"
#define UI_TEXT_NOSEL            "\004"
#define UI_TEXT_PRINT_POS        "Printing..."
#define UI_TEXT_PRINTING         "Printing"
#define UI_TEXT_IDLE             "Idle"
#define UI_TEXT_NOSDCARD         "No SD Card"
#define UI_TEXT_ERROR            "**** ERROR ****"
#define UI_TEXT_BACK             "Back \001"
#define UI_TEXT_QUICK_SETTINGS   "Quick Settings"
#define UI_TEXT_CONFIGURATION    "Configuration"
#define UI_TEXT_POSITION         "Position"
#define UI_TEXT_EXTRUDER         "Extruder"
#define UI_TEXT_SD_CARD          "SD Card"
#define UI_TEXT_DEBUGGING        "Debugging"
#define UI_TEXT_HOME_ALL         "Home All"
#define UI_TEXT_HOME_X           "Home X"
#define UI_TEXT_HOME_Y           "Home Y"
#define UI_TEXT_HOME_Z           "Home Z"
#define UI_TEXT_PREHEAT_PLA      "Preheat PLA"
#define UI_TEXT_PREHEAT_ABS      "Preheat ABS"
#define UI_TEXT_COOLDOWN         "Cooldown"
#define UI_TEXT_SET_TO_ORIGIN    "Set to Origin"
#define UI_TEXT_DISABLE_STEPPER  "Disable stepper"
#define UI_TEXT_X_POSITION       "X Position"
#define UI_TEXT_X_POS_FAST       "X Pos. Fast"
#define UI_TEXT_Y_POSITION       "Y Position"
#define UI_TEXT_Y_POS_FAST       "Y Pos. Fast"
#define UI_TEXT_Z_POSITION       "Z Position"
#define UI_TEXT_Z_POS_FAST       "Z Pos. Fast"
#define UI_TEXT_E_POSITION       "Extr. position"
#define UI_TEXT_BED_TEMP         "Bed Temp.:%Eb\002C"
#define UI_TEXT_EXTR0_TEMP       "Temp. 0  :%E0\002C"
#define UI_TEXT_EXTR1_TEMP       "Temp. 1  :%E0\002C"
#define UI_TEXT_EXTR0_OFF        "Extruder 0 Off"
#define UI_TEXT_EXTR1_OFF        "Extruder 1 Off"
#define UI_TEXT_EXTR0_SELECT     "%X0 Select Extr.0"
#define UI_TEXT_EXTR1_SELECT     "%X1 Select Extr.1"
#define UI_TEXT_EXTR_ORIGIN      "Set Origin"
#define UI_TEXT_PRINT_X          "Print X:%ax"
#define UI_TEXT_PRINT_Y          "Print Y:%ay"
#define UI_TEXT_PRINT_Z          "Print Z:%az"
#define UI_TEXT_MOVE_X           "Move X:%aX"
#define UI_TEXT_MOVE_Y           "Move Y:%aY"
#define UI_TEXT_MOVE_Z           "Move Z:%aZ"
#define UI_TEXT_JERK             "Jerk:%aj"
#define UI_TEXT_ZJERK            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION     "Acceleration"
#define UI_TEXT_STORE_TO_EEPROM  "Store to EEPROM"
#define UI_TEXT_LOAD_EEPROM      "Load f. EEPROM"
#define UI_TEXT_DBG_ECHO         "Echo:%do"
#define UI_TEXT_DBG_INFO         "Info:%di"
#define UI_TEXT_DBG_ERROR        "Errors:%de"
#define UI_TEXT_DBG_DRYRUN       "Dry run:%dd"
#define UI_TEXT_OPS_OFF          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC      "%O1 OPS Classic"
#define UI_TEXT_OPS_FAST         "%O2 OPS Fast"
#define UI_TEXT_OPS_RETRACT      "Retract :%Or"
#define UI_TEXT_OPS_BACKSLASH    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST      "Min.dist:%Od"
#define UI_TEXT_OPS_MOVE_AFTER   "Move after:%Oa"
#define UI_TEXT_ANTI_OOZE        "Anti Ooze"
#define UI_TEXT_PRINT_FILE       "Print file"
#define UI_TEXT_PAUSE_PRINT      "Pause Print"
#define UI_TEXT_CONTINUE_PRINT   "Continue Print"
#define UI_TEXT_UNMOUNT_CARD     "Unmount Card"
#define UI_TEXT_MOUNT_CARD       "Mount Card"
#define UI_TEXT_DELETE_FILE      "Delete file"
#define UI_TEXT_FEEDRATE         "Feedrate"
#define UI_TEXT_FEED_MAX_X       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z       "Max Z:%fz"
#define UI_TEXT_FEED_HOME_X      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z      "Home Z:%fZ"
#define UI_TEXT_ACTION_XPOSITION4 "X:%x0 mm","Min endstop:%sx","Max endstop:%sX",""
#define UI_TEXT_ACTION_YPOSITION4 "Y:%x1 mm","Min endstop:%sy","Max endstop:%sY",""
#define UI_TEXT_ACTION_ZPOSITION4 "Z:%x2 mm","Min endstop:%sz","Max endstop:%sZ",""
#define UI_TEXT_ACTION_XPOSITION_FAST4 "X:%x0 mm","Min endstop:%sx","Max endstop:%sX",""
#define UI_TEXT_ACTION_YPOSITION_FAST4 "Y:%x1 mm","Min endstop:%sy","Max endstop:%sY",""
#define UI_TEXT_ACTION_ZPOSITION_FAST4 "Z:%x2 mm","Min endstop:%sz","Max endstop:%sZ",""
#define UI_TEXT_ACTION_EPOSITION_FAST2 "E:%x3 mm","1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2 "X:%x0 mm","Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2 "Y:%x1 mm","Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2 "Z:%x2 mm","Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2 "X:%x0 mm","Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2 "Y:%x1 mm","Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2 "Z:%x2 mm","Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED          "Fan speed"
#define UI_TEXT_FAN_OFF           "Turn Fan Off"
#define UI_TEXT_FAN_25            "Set Fan 25%%%"
#define UI_TEXT_FAN_50            "Set Fan 50%%%"
#define UI_TEXT_FAN_75            "Set Fan 75%%%"
#define UI_TEXT_FAN_FULL          "Set Fan Full"
#define UI_TEXT_STEPPER_INACTIVE  "Stepper Inactive"
#define UI_TEXT_STEPPER_INACTIVE2 "Dis. After:%is","[s] 0=Off"
#define UI_TEXT_POWER_INACTIVE    "Max. Inactive"
#define UI_TEXT_POWER_INACTIVE2   "Dis. After:%ip","[s] 0=Off"
#define UI_TEXT_GENERAL           "General"
#define UI_TEXT_BAUDRATE          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS        "Steps/MM:%Se"
#define UI_TEXT_EXTR_START_FEED   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH        "Stab.Time:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L    "Advance lin:Xl%"
#define UI_TEXT_EXTR_ADVANCE_K    "Advance quad:Xa%"
#define UI_TEXT_EXTR_MANAGER      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN        "PID P:%Xp"
#define UI_TEXT_EXTR_IGAIN        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG "BangBang"
#define UI_TEXT_STRING_HM_PID     "PID"
#define UI_TEXT_STRING_ACTION     "Action:%la"
#define UI_TEXT_HEATING_EXTRUDER  "Heating Extruder"
#define UI_TEXT_HEATING_BED       "Heating Bed"
#define UI_TEXT_KILLED            "Killed"
#define UI_TEXT_STEPPER_DISABLED  "Stepper Disabled"
#define UI_TEXT_EEPROM_STORED     "Configuration","stored in EEPROM"
#define UI_TEXT_EEPROM_LOADED     "Configuration","loaded f. EEPROM"
#define UI_TEXT_UPLOADING         "Uploading..."
#define UI_TEXT_PAGE_BUFFER       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER     "E:%ec/%Ec\002C\176%oC"
#define UI_TEXT_PAGE_BED          "B:%eb/%Eb\002C\176%ob"
#define UI_TEXT_SPEED_MULTIPLY    "Speed Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY     "Flow Mul.:%of%%%"

#endif
