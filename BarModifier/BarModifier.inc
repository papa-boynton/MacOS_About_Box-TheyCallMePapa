
[Variables]
MacOS_About_Box-TheyCallMePapa.LeftMouseDownAction=[]
MacOS_About_Box-TheyCallMePapa.MouseOverAction=[]
MacOS_About_Box-TheyCallMePapa.MouseLeaveAction=[]
MacOS_About_Box-TheyCallMePapa.ButtonAction=[]

[MacOS_About_Box-TheyCallMePapa.Style]
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)))
ImageAlpha=0

[MacOS_About_Box-TheyCallMePapa]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
SolidColor=0,0,0,0
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\ButtonColorS.png
MouseOverAction=[!Delay 10][!CommandMeasure MeasureActionTimer "Stop 3"]
MouseLeaveAction=[]
H=(#TopHeight#+#TopBarIconHOffset#)
Padding=#SysIconPadding#
Group=CustomApp[##CURRENTSECTION#]Sys | SysTray | Buttons00 | AppButton[##CURRENTSECTION#] | CustomAppButton | CustomAppColor[##CURRENTSECTION#]
LeftMouseDownAction=[]

;[Home]
;LeftMouseDoubleClickAction=[!HideGroup Tray][!HideGroup ContextBox][!HideGroup Folders][!DeactivateConfigGroup ContextBox][!DeactivateConfigGroup Tray][!DeactivateConfigGroup Folder13][!ActivateConfig "Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa" "AboutThisPC.ini"][!Show "Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa"]
;LeftMouseDoubleClickAction=[!HideGroup Tray][!HideGroup ContextBox][!HideGroup Folders][!DeactivateConfigGroup ContextBox][!DeactivateConfigGroup Tray][!DeactivateConfigGroup Folder13][!ActivateConfig "Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa" "CustomApp.ini"][!Show "Droptop Community Apps\Apps\MacOS_About_Box-TheyCallMePapa"]
;@IncludeAbout=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\About.inc