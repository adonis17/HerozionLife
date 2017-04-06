/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ DYNAMIC MARKET BASIC CONFIGURATION ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 04;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = false; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 50;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = false; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 30;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text = 
[
	"les prix sont mis a jour ! ",
	"Les nouveaux prix sont calculés par l'île ..."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["Legal",
		[	
			['ruby_refined',-1,1500,4000],
			['apple',-1,10,150],
			['peach',-1,30,100],
			['oil_processed',-1,1200,2100],
			['copper_refined',-1,1050,2000],
			['iron_refined',-1,1350,2250],
			['salt_refined',-1,1460,3000],
			['glass',-1,1450,2000],
			['diamond_cut',-1,1530,3500],
			['diamond_uncut',-1,600,1600],
			['cement',-1,990,2350],
			['goat_raw',-1,200,615],
			['sheep_raw',-1,200,795],
			['rooster_raw',-1,200,665],
			['hen_raw',-1,200,565],
			['catshark_raw',-1,200,600],
			['mullet_raw',-1,200,550],
			['tuna_raw',-1,200,1400],
			['mackerel_raw',-1,200,475],
			['ornate_raw',-1,200,400],
			['salema_raw',-1,200,450],
			['rabbit_raw',-1,200,395]
		],
		0.4
	],
	
	["Illegal", 
		[	
			['Dent',-1,250,900],
			['Bague',-1,350,1250],
			['Os',-1,125,500],
			['uranium_refined',-1,2750,6500],
			['ecstasy',-1,2150,3875],
			['tobacco_processed',-1,950,2500],
			['mushroom',-1,350,1500],
			['heroin_processed',-1,2500,4900],
			['marijuana',-1,2200,4200],
			['turtle_raw',-1,2500,5000],
			['cocaine_processed',-1,3150,5300],
			['goldbar',-1,85000,115000]
		],
		0.6
	]
];

//ALL SELLABLE ITEMS

DYNMARKET_Items_ToTrack = 
[
	['pickaxe',350],
	['defibrillator',450],
	['toolkit',100],
	['fuelEmpty',10],
	['fuelFull',500],
	['spikeStrip',1200],
	['lockpick',75],
	['blastingcharge',10000],
	['boltcutter',1000],
	['defusekit',2000],
	['storagesmall',50000],
	['storagebig',125000],
	['tel',350],
	['redgull',200],
	['coffee',5],
	['waterBottle',5],
	['tbacon',25],
	['donuts',60],
	
	
	['rabbit',115],	
	['salema',55],
	['ornate',150],
	['mackerel',200],
	['tuna',1000],
	['mullet',400],
	['catshark',500],
	['turtle_raw',3000],
	['turtle_soup',750],
	['hen',85],
	['rooster',85],
	['goat',135],
	['sheep',115],
	
	['goat_raw',515],
	['sheep_raw',395],
	['rooster_raw',265],
	['hen_raw',265],
	['catshark_raw',300],
	['mullet_raw',250],
	['tuna_raw',700],
	['mackerel_raw',275],
	['ornate_raw',300],
	['salema_raw',350],
	['rabbit_raw',295],
	
	['ruby_refined',4000],
	['diamond_uncut',1600],
	['apple',150],
	['peach',100],
	['oil_processed',2100],
	['copper_refined',2000],
	['iron_refined',2200],
	['salt_refined',3000],
	['glass',2000],
	['diamond_cut',3500],
	['cement',2000],
	['goldbar',95000],
	['heroin_processed',4900],
	['marijuana',4200],
	['cocaine_processed',5300],
	['Dent',900],
	['Bague',1250],
	['Os',500],
	['uranium_refined',6500],
	['ecstasy',3875],
	['tobacco_processed',2500],
	['mushroom',1500]
];

//███████████████████████████████████████████████████████████████████████
//██████████████████ DO NOT MODIFY THE FOLLOWING CODE! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
	_currentArray = _x;
	DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;
if (DYNMARKET_UseExternalDatabase) then {
	[] spawn {
		sleep DYNMARKET_Serveruptime;
		diag_log "### DYNMARKET >> CURRENT PRICES ARE BEING WRITTEN TO THE DATABASE    ###";
		diag_log "### DYNMARKET >> AS PLANNED, AWAITING RESULT...                      ###";
		[0] call TON_fnc_HandleDB;
	};
};
sleep 5;
[] call TON_fnc_sleeper;
