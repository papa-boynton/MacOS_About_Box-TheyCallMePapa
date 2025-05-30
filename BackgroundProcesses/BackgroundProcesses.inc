[Rainmeter]

[Variables]
@IncludeFolderSettings=#SKINSPATH#Droptop\@Resources\GlobalVar\FolderSettings.inc
;link="#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppActiveID[#MyID[#HideAppCustomApp[#MyID]]]]\MacOS_About_Box-TheyCallMePapa\About.inc"

;link0="#SKINSPATH#Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa\About.inc"
;link1=""
link="#SKINSPATH#Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa\About.inc"
file="#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu1\SettingsMenu1.ini"
;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------
; Usage tips:
; Measures in this file will be part of Droptop's BackgroundProcesses.ini file.
; As a result, #MyVariablesLoc# will not work here. Instead, use the actual file location.
; eg. "#SKINSPATH#Droptop Community Apps\Apps\APP_NAME-APP_AUTHOR\Variables\Variables.inc"
;----------------------------------------------------------------------

[MacOS_About_Box_MeasureDisabled]
Measure=Calc
Formula=[#HideAppCustomApp[#MyAppSlot]]
IfCondition=MacOS_About_Box_MeasureDisabled=0
IfTrueAction=[!EnableMeasure "MacOS_About_Box_MeasureFile"][!EnableMeasure "MacOS_About_Box_MeasureFindString"][!EnableMeasure "MacOS_About_Box_MeasureGetCPUName"][!WriteKeyValue Variables @IncludeAbout "#link#" "#file#"]
IfFalseAction=[!DisableMeasure "MacOS_About_Box_MeasureFile"][!DisableMeasure "MacOS_About_Box_MeasureFindString"][!DisableMeasure "MacOS_About_Box_MeasureGetCPUName"][!WriteKeyValue Variables @IncludeAbout "" "#file#"]
IfConditionMode=1

[MacOS_About_Box_MeasureFile]
Measure=WebParser
URL=file://#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu1\SettingsMenu1.ini
CodePage=1200
RegExp=(?siU)^(.*)$
StringIndex=1
UpdateRate=5

[MacOS_About_Box_MeasureFindString]
Measure=WebParser
URL=[MacOS_About_Box_MeasureFile]
RegExp=(?siU)@IncludeAbout
StringIndex=1
DynamicVariables=1
IfMatch=IncludeAbout
IfMatchAction=[!Log "MacOs About Box has been installed" Notice ]
IfNotMatchAction=[!WriteKeyValue Variables @IncludeAbout "#link#" "#file#"][;!SetVariable SlotSelectedIndex [##CURRENTSECTION#]][;!WriteKeyValue Variables IsOverflowCustomApp[#SlotSelectedIndex] 1 "#SKINSPATH#Droptop\@Resources\GlobalVar\FolderSettings.inc"][!Refresh "Droptop\Dropdownbar"]
;IfNotMatchAction=[!WriteKeyValue Variables @IncludeAbout [#link[#HideAppCustomApp[#MyID]]] "#file#"][;!SetVariable SlotSelectedIndex [##CURRENTSECTION#]][;!WriteKeyValue Variables IsOverflowCustomApp[#SlotSelectedIndex] 1 "#SKINSPATH#Droptop\@Resources\GlobalVar\FolderSettings.inc"][!Refresh "Droptop\Dropdownbar"]

[MacOS_About_Box_MeasureGetCPUName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString
OnUpdateAction=[!SetVariable Processor [MacOS_About_Box_MeasureGetCPUName]][!WriteKeyValue Variables Processor [MacOS_About_Box_MeasureGetCPUName] "#SKINSPATH#Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa\Variables\Variables.inc"]
DynamicVariables=1
