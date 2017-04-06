//By KO2P
#define ST_RIGHT 0x01

class osefStatusBar {
	idd = -1;
	onLoad = "uiNamespace setVariable ['osefStatusBar', _this select 0]";
	onUnload = "uiNamespace setVariable ['osefStatusBar', objNull]";
	onDestroy = "uiNamespace setVariable ['osefStatusBar', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 1000;
			x = safezoneX + safezoneW - 1.7;  
			y = safezoneY + safezoneH - 0.04;  
			w = 1;  
			h = 0.04; 
			shadow = 1;
			colorBackground[] = { 1, 0.3, 0, 0.0 };
			font = "PuristaSemibold";
			size = 0.038;
			type = 13;
			style = 1;
			text="La barre d'information se charge ... Merci de patientez.";
			class Attributes {
				align="center";  
				color = "#FFFFFF";
			};
		};
	};
};