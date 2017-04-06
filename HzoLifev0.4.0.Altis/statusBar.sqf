#include "script_macros.hpp"
waitUntil {!(isNull (findDisplay 46))};
disableSerialization;
/*
By KO2P
*/

4 cutRsc ["osefStatusBar","PLAIN"]; 



[] spawn {
	sleep 3;
	_counter = 180;
	_timeSinceLastUpdate = 0;
	for "_i" from 0 to 1 step 0 do {
		sleep 1;
		_counter = _counter - 1;
		((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetStructuredText parseText
    format["FPS: %1 | <img size='1.2' image='icons\police.paa'/> %2 | <img size='1.2' image='icons\civil.paa'/> %3 | <img size='1' image='icons\medic.paa'/> %4 | <img size='1.2' image='icons\ico_money.paa'/> %5 $", round diag_fps, 
    west countSide playableUnits, civilian countSide playableUnits,independent countSide playableUnits,[life_cash] call life_fnc_numberText, [life_atmbank] call life_fnc_numberText , mapGridPosition player, _counter];
	LIFEctrl(2204) progressSetPosition (1 - (getFatigue player));
	}; 
};

