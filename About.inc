[Variables]
;Main.inc
SettingsMenu1.1ItemCount=14
SettingsMenu1.1.14=About This PC
SettingsMenu1.1.14.Action=[!HideGroup Tray][!HideGroup ContextBox][!HideGroup Folders][!DeactivateConfigGroup ContextBox][!DeactivateConfigGroup Tray][!DeactivateConfigGroup Folder13][!ActivateConfig "Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa" "CustomApp.ini"][!Show "Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa"]
SettingsMenu1.1.14.Icon=#SKINSPATH#Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa\Images\apple.png
SettingsMenu1.1.14.IconAlpha=([#*DropdownItemOpacity*]/2)
SettingsMenu1.1.14.IconFlip=None
SettingsMenu1.1.14.IconIsToggle=0
SettingsMenu1.1.14.ToggleDirection=A
SettingsMenu1.1.14.ToggleKey=None

;MainAlt.inc
SettingsMenu1.2ItemCount=8
SettingsMenu1.2.8=About This PC
SettingsMenu1.2.8.Action=[!HideGroup Tray][!HideGroup ContextBox][!HideGroup Folders][!DeactivateConfigGroup ContextBox][!DeactivateConfigGroup Tray][!DeactivateConfigGroup Folder13][!ActivateConfig "Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa" "CustomApp.ini"][!Show "Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa"]
SettingsMenu1.2.8.Icon=#SKINSPATH#Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa\Images\apple.png
SettingsMenu1.2.8.IconAlpha=([#*DropdownItemOpacity*]/2)
SettingsMenu1.2.8.IconFlip=None
SettingsMenu1.2.8.IconIsToggle=0
SettingsMenu1.2.8.ToggleDirection=A
SettingsMenu1.2.8.ToggleKey=None
MyAppSlot=4

;Main.inc	
[14]
Meter=String
MeterStyle=InfoStyle
Hidden=0
Group=None
DynamicVariables=1
;Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*10)+(#DividerSpace#*17))
Y=([12:Y]+(#DropdownItemHeight#/2))R
MouseOverAction=[!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 400|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetVariable FolderMode 0][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlockB][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]

[14Icon]
MeterStyle=IconStyle
Hidden=0
Group=None
Y=[14:Y]
