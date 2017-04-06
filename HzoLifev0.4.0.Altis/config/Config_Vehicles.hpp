class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "RDS_Gaz24_Civ_01", { "", "", -1 } },
            { "RDS_Golf4_Civ_01", { "", "", -1 } },
            { "Jonzie_Mini_Cooper", { "", "", -1 } },
            { "Jonzie_Mini_Cooper_R_spec", { "", "", -1 } },
            { "Jonzie_Galant", { "", "", -1 } },
			{ "Mrshounka_r5_bleufonce", { "", "", -1 } },
			{ "shounka_a3_ds4_noir", { "", "", -1 } },
			{ "Mrshounka_a3_ds3_civ", { "", "", -1 } },
			{ "Mrshounka_rs4_civ_noir", { "", "", -1 } },
			{ "C_SUV_01_F", { "", "", -1 } },
			{ "Mrshounka_a3_smart_civ_noir", { "", "", -1 } },
			{ "Mrshounka_twingo_p_v", { "", "", -1 } },
			{ "Mrshounka_207_noir", { "", "", -1 } },
			{ "Mrshounka_c4_p_noir", { "", "", -1 } },
			{ "shounka_a3_cliors_civ_noir", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ", { "", "", -1 } },
			{ "shounka_nemo_noir", { "", "", -1 } },
			{ "shounka_a3_spr_civ_noir", { "", "", -1 } },
			{ "C_Van_01_transport_F", { "", "", -1 } },
			{ "C_Hatchback_01_sport_F", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_civ", { "", "", -1 } },
			{ "Mrshounka_subaru08_civ", { "", "", -1 } },
			{ "Jonzie_STI", { "", "", -1 } },
			{ "Mrshounka_megane_rs_2015_civ", { "", "", -1 } },
			{ "shounka_h2_noir", { "", "", -1 } },
			{ "Mrshounka_evox_civ", { "", "", -1 } },
			{ "Jonzie_Quattroporte", { "", "", -1 } },
			{ "Mrshounka_cayenne_p_noir", { "", "", -1 } },
			{ "Mrshounka_cherokee_noir_mat", { "", "", -1 } },
			{ "Mrshounka_c63_2015_civ", { "", "", -1 } },
			{ "RDS_Zetor6945_Base", { "", "", -1 } },
			{ "Mrshounka_a3_gtr_civ_noir", { "", "", -1 } },
            { "shounka_porsche911", { "", "", -1 } },
            { "Mrshounka_veneno_c_noir", { "", "", -1 } },
            { "ivory_c", { "", "", -1 } },
			{ "shounka_f430_spider_noir", { "", "", -1 } },
			{ "Mrshounka_agera_p", { "", "", -1 } },
			{ "ivory_mp4", { "", "", -1 } },
			{ "ivory_lfa", { "", "", -1 } },
			{ "ivory_elise", { "", "", -1 } },
			{ "Mrshounka_pagani_c_noir", { "", "", -1 } },
			{ "ivory_f1", { "", "", -1 } },
			{ "ivory_veyron", { "", "", -1 } },
			{ "Mrshounka_yamaha_p", { "", "", -1 } },
            { "Mrshounka_ducati_p_noir", { "", "", -1 } },
            { "shounka_harley_a3", { "", "", -1 } }
        };
    };
	
	class depanneur {
        side = "civ";
        vehicles[] = {
            { "Jonzie_Forklift", { "", "", -1 } },
			{ "C_Offroad_01_repair_F", { "", "", -1 } },
			{ "Jonzie_Tow_Truck", { "", "", -1 } },
			{ "EC635_ADAC", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Rouge_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } }
        };
    };
	
	class civ_struck {
        side = "civ";
        vehicles[] = {
			{ "Jonzie_Western", { "", "", -1 } },
			{ "Jonzie_Superliner", { "", "", -1 } },
			{ "Jonzie_Curtain_Roadtrain", { "", "", -1 } },
			{ "Jonzie_Curtain", { "", "", -1 } },
        };
    };
	class civ_moto {
        side = "civ";
        vehicles[] = {
            { "shounka_harley_a3", { "", "", -1 } },
            { "Mrshounka_ducati_p_noir", { "", "", -1 } },
            { "Mrshounka_yamaha_p", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    // GANGSTER / BANDIT / SUD / EST / OUEST
    class reb_car {
        side = "civ";
        vehicles[] = {
            { "C_SUV_01_F", { "", "", -1 } },
            { "RDS_tt650_Civ_01", { "", "", -1 } },
            { "Jonzie_Escalade", { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_rouge", { "", "", -1 } },
			{ "B_Heli_Transport_01_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
			{ "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "I_Heli_Transport_02_F", { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "shounka_a3_pompier_sprinter", { "", "", -1 } },
			{ "shounka_nemo_pompier", { "", "", -1 } },
			{ "Megane_Estate_vli", { "", "", -1 } },
			{ "Renault_Espace_samu", { "", "", -1 } },
			{ "mrshounka_vsav_smur", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "EC635_DAES_Lifeliner", { "", "", -1 } }
        };
    };
    
    class cop_car {
        side = "cop";
        vehicles[] = {
			{ "shounka_a3_gendsprinter", { "", "", -1 } },
			//
			{ "shounka_a3_audiq7_v2_gendarmerie", { "", "", -1 } },
			//
			{ "shounka_a3_audiq7_v2_gendarmerie", { "life_coplevel", "SCALAR", 1 } },
			//
            { "shounka_a3_508gend", { "life_coplevel", "SCALAR", 2 } },
			//
            { "Mrshounka_a3_308_gend", { "life_coplevel", "SCALAR", 3 } },
			//
			{ "Mrshounka_a3_rs_gend", { "life_coplevel", "SCALAR", 4 } },
			//
			{ "Mrshounka_evox_gend", { "life_coplevel", "SCALAR", 5 } },
			//
			{ "Mrshounka_ducati_police_p", { "life_coplevel", "SCALAR", 6 } },
			//
			{ "Mrshounka_bmw_gend", { "life_coplevel", "SCALAR", 7 } },
			//
			{ "Mrshounka_agera_gend_p", { "life_coplevel", "SCALAR", 8 } },
			//
			{ "kangooI2_gn", { "life_coplevel", "SCALAR", 3 } },
			//
			{ "Clio_GN", { "life_coplevel", "SCALAR", 3 } },
			//
			{ "Trafic_gn", { "life_coplevel", "SCALAR", 3 } },
			//
			{ "Dacia_Duster_gn", { "life_coplevel", "SCALAR", 3 } },
			//
			{ "chmgrs", { "life_coplevel", "SCALAR", 3 } },
			//
			{ "Focus03_GN", { "life_coplevel", "SCALAR", 3 } },
			//
			{ "B_GEN_Offroad_01_gen_F", { "life_coplevel", "SCALAR", 3 } }
        };
    };
	
	class gign {
        side = "cop";
        vehicles[] = {
			{ "shounka_a3_suburbangign", { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
			{ "EC635_unarmed", { "", "", -1 } },
            { "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license requiRouge)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
	
	class sab_s6b {
        vItemSpace = 50;
        licenses[] = { {"ppl"}, {""}, {""}, {""} };
        price = 575000;
        textures[] = {};
    };
	
	class kangooI2_gn {
        vItemSpace = 30;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };
	
	class Clio_GN {
        vItemSpace = 30;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };
	
	class Trafic_gn {
        vItemSpace = 30;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };
	
	class Dacia_Duster_gn {
        vItemSpace = 30;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };
	
	class chmgrs {
        vItemSpace = 30;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };
	
	class Focus03_GN {
        vItemSpace = 30;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };
	
	class B_GEN_Offroad_01_gen_F {
        vItemSpace = 30;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };
	
	class shounka_a3_suburbangign {
        vItemSpace = 50;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };
		
	class Jonzie_Forklift {
        vItemSpace = 0;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {};
    };
	
	class C_Offroad_01_repair_F {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
	
	class Jonzie_Tow_Truck {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

	class shounka_a3_gendsprinter {
        vItemSpace = 50;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 85000;
        textures[] = {};
    };
	
	class Megane_Estate_gn {
        vItemSpace = 50;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = {};
    };
	
	class shounka_a3_508gend {
        vItemSpace = 50;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };
	
	class Mrshounka_a3_308_gend {
        vItemSpace = 50;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };
	
	class Mrshounka_a3_rs_gend {
        vItemSpace = 50;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 115000;
        textures[] = {};
    };
	
	class shounka_a3_audiq7_v2_gendarmerie {
        vItemSpace = 50;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };
	
	class Mrshounka_evox_gend {
        vItemSpace = 50;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_police_p {
        vItemSpace = 0;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {};
    };
	
	class Mrshounka_bmw_gend {
        vItemSpace = 50;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = {};
    };
	
	class Mrshounka_agera_gend_p {
        vItemSpace = 50;
        licenses[] = { {"cop"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
	
	class shounka_harley_a3 {
        vItemSpace = 0;
        licenses[] = { {"moto"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class shounka_limo_civ {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 175000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Jonzie_Raptor {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 85000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_ducati_p_noir {
        vItemSpace = 0;
        licenses[] = { {"moto"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_yamaha_p {
        vItemSpace = 0;
        licenses[] = { {"moto"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 35;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };
	
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 150;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {};
    };
	
	class MELB_H6M {
        vItemSpace = 35;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 290000;
        textures[] = {};
    };
	
	class B_Heli_Transport_01_F {
        vItemSpace = 35;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 5000000;
        textures[] = {};
    };
		
	class Mrshounka_hummer_civ {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 420000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_cherokee_noir_rouge_mat {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class RDS_Golf4_Civ_01 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9600;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class RDS_Gaz24_Civ_01 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9700;
        textures[] = {};
    };
	
	class Mrshounka_Alfa_Romeo_rouge {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Jonzie_Escalade {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 95000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class RDS_tt650_Civ_01 {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
		};
    };
	
	class BAF_Offroad_D {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };
	
	class B_Truck_01_fuel_F {
        vItemSpace = 400;
        vFuelSpace = 420000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {
            { "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } }
		};
    };
	
	class EC635_unarmed {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
		};
    };
	
	class shounka_a3_renaultmagnum_f {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 550000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
		};
    };
	
	class ivory_190e_taxi {
        vItemSpace = 50;
        licenses[] = { {"bus"}, {""}, {""}, {""} };
        price = 26000;
        textures[] = {};
    };
	
	class ivory_rs4_taxi {
        vItemSpace = 50;
        licenses[] = { {"bus"}, {""}, {""}, {""} };
        price = 27000;
        textures[] = {};
    };			
	
	class ivory_veyron {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class ivory_f1 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_pagani_c_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class ivory_elise {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8000000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_lykan_c_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 7302500;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class ivory_lfa {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 7000000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class ivory_mp4 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_agera_p {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5500000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class shounka_f430_spider_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4300000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class ivory_c {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_veneno_c_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3200000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class shounka_porsche911 {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_a3_gtr_civ_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class RDS_Zetor6945_Base {
        vItemSpace = 650;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_c63_2015_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 295000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_cherokee_noir_mat {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 190000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_cayenne_p_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 85000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_Alfa_Romeo_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class C_Van_01_transport_F {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Rouge", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };
	
	class Jonzie_Mini_Cooper {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9800;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Jonzie_Mini_Cooper_R_spec {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9850;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Jonzie_Galant {
        vItemSpace = 47;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_r5_bleufonce {
        vItemSpace = 55;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 21000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class shounka_a3_ds4_noir {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 22500;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_a3_ds3_civ {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 21000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_rs4_civ_noir {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 26000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class C_SUV_01_F {
        vItemSpace = 52;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = {
            { "Rouge fonce", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } }, 
            { "Argent", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } }, 
			{ "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } }, 
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } }, 
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } }
        };
    };
	
	class Mrshounka_a3_smart_civ_noir {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_twingo_p_v {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 36000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_207_noir {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 37000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_c4_p_noir {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 38000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class shounka_a3_cliors_civ_noir {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 39000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_Vandura_civ {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 39000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class shounka_nemo_noir {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 42000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class shounka_a3_spr_civ_noir {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class C_Hatchback_01_sport_F {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 65000;
        textures[] = {
            { "Rouge", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Bleu fonce", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Noir / Blanc", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };
	
	class Mrshounka_mercedes_190_p_civ {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 145000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_subaru08_civ {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 155000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };

	class Jonzie_STI {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 145000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class O_Truck_03_covered_F {
        vItemSpace = 650;
        licenses[] = { {"Trucking"}, {""}, {""}, {""} };
        price = 2350000;
        textures[] = {};
    };
	
	class Mrshounka_jeep_blinde_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 950000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	
	class Mrshounka_cherokee_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 185000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class shounka_transam {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 115000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_raptor2_noir {
        vItemSpace = 62;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 95000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_megane_rs_2015_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 160000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class shounka_h2_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_evox_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 185000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Jonzie_Quattroporte {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 225000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	
	class Mrshounka_mustang_mat {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 225000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	class Jonzie_Curtain {
        vItemSpace = 1000;
        licenses[] = { {"struck"}, {""}, {""}, {""} };
        price = 655000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	class Jonzie_Curtain_Roadtrain {
        vItemSpace = 500;
        licenses[] = { {"struck"}, {""}, {""}, {""} };
        price = 375000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	class Jonzie_Superliner {
        vItemSpace = 50;
        licenses[] = { {"struck"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };
	class Jonzie_Western {
        vItemSpace = 50;
        licenses[] = { {"struck"}, {""}, {""}, {""} };
        price = 620000;
        textures[] = {
            { "Blanc", "civ", {
                "textures\couleurs\blanc.paa"
            } },
			{ "MultiColor", "civ", {
                "textures\couleurs\Multi.paa"
            } },
			{ "Bleu", "civ", {
                "textures\couleurs\bleu.paa"
            } },
			{ "Bleu Fonce", "civ", {
                "textures\couleurs\bleufonce.paa"
            } },
			{ "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
			{ "Gris", "civ", {
                "textures\couleurs\gris.paa"
            } },
			{ "Jaune", "civ", {
                "textures\couleurs\jaune.paa"
            } },
			{ "Noir", "civ", {
                "textures\couleurs\noir.paa"
            } },
			{ "Orange", "civ", {
                "textures\couleurs\orange.paa"
            } },
			{ "Rose", "civ", {
                "textures\couleurs\rose.paa"
            } },
			{ "Rouge", "civ", {
                "textures\couleurs\rouge.paa"
            } },
			{ "Rouge Fonce", "civ", {
                "textures\couleurs\rougefonce.paa"
            } },
			{ "Vert", "civ", {
                "textures\couleurs\vert.paa"
            } },
			{ "Vert Fonce", "civ", {
                "textures\couleurs\vertfonce.paa"
            } },
			{ "Violet", "civ", {
                "textures\couleurs\violet.paa"
            } }
        };
    };

	//Anciens véhicules - Véhicules de Base
    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {
            { "Noir", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2250000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2500000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {
            { "Rouge", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Jaune", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "Blanc", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Rouge", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / Blanc", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Rouge_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};
	
    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Noir", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_Noir_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Rouge", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_Rouge_co.paa"
            } },
            { "Blanc", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_Blanc_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };
	
    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Noir", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_coveRouge_F {
        vItemSpace = 600;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Vert", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Bleu", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Bleu fonce", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Jaune", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Carbon", "civ", {
                "textures\couleurs\carbon.paa"
            } },
            { "Noir", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Noir", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 275000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Rouge", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Rougeline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS Blanc", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 150;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 550000;
        textures[] = {
            { "Noir", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "Blanc / Bleu", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Vert Camoufler", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS Blanc", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class C_Van_01_fuel_F {
        vItemSpace = 170;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 450;
        vFuelSpace = 360000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Noir", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };
	
	class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
};