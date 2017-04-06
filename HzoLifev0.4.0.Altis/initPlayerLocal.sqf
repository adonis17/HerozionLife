#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
}; //This is a headless client.

#define CONST(var1,var2) var1 = compileFinal (if (var2 isEqualType "") then {var2} else {str(var2)})
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)

CONST(BIS_fnc_endMission,BIS_fnc_endMission);
//if (LIFE_SETTINGS(getNumber,"spyGlass_toggle") isEqualTo 1) then {[] execVM "SpyGlass\fn_initSpy.sqf";};

[] execVM "core\init.sqf";

for "_i" from 0 to 1 step 0 do {
	{
		if(agent _x isKindOf "Snake_random_F" || agent _x isKindOf "Bird") then {deleteVehicle agent _x};
	} forEach agents;
	if("ItemRadio" in assignedItems player) then {
		3 enableChannel true;
	}else{
		3 enableChannel false;   
	};
	sleep 1;
};