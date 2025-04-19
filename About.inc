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
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*10)+(#DividerSpace#*17))
;Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+#DropdownItemHeight#+#DividerSpace#*(#DroptopSize#))
;Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+#DropdownItemHeight#+#DividerSpace#+#DropdownItemPadding1#+#DropdownItemPadding2#+#DropdownItemPaddingY#)
;Y=r

[14Icon]
MeterStyle=IconStyle
Hidden=0
Group=None
Y=[14:Y]
