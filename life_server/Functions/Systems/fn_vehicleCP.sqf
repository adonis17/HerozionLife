/*
	File: fn_vehicleDead.sqf
	
	Description:
	Tells the database that this vehicle has died and can't be recovered.
*/
private["_vehicle","_plate","_uid","_query","_sql","_dbInfo","_thread"];
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {hint"error 1"}; //NULL

_dbInfo = _vehicle getVariable ["dbInfo",[]];
if (count _dbInfo > 0) then {
    _uid = (_dbInfo select 0);
    _plate = (_dbInfo select 1);

    _query = format ["UPDATE vehicles SET alive='0' WHERE pid='%1' AND plate='%2'",_uid,_plate];

    _thread = [_query,1] call DB_fnc_asyncCall;
};
