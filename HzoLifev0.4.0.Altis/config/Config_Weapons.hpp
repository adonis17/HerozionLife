/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 75000, 12500, "" },
			{ "hgun_PDW2000_F", "", 20000, 10000, "" },
            { "arifle_Katiba_F", "", 140000, 15000, "" },
            { "srifle_DMR_01_F", "", 280000, 25000, "" },
			{ "SMG_02_F", "", 60000, 25000, "" },
			{ "arifle_Mk20_plain_F", "", 85000, 25000, "" },
			{ "arifle_AKS_F", "", 122000, 11000, "" },
			{ "R3F_SIG551", "", 95000, 25000, "" },
			{ "RH_fnp45", "", 20000, 11000, "" },
			{ "RH_mak", "", 25000, 11000, "" },
			{ "hgun_ACPC2_F", "", 22000, 11000, "" },
			{ "RH_mk2", "", 22000, 11000, "" },
			{ "hgun_Pistol_01_F", "", 20000, 11000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "call life_reblevel >= 1" },
			{ "RH_Deagleg", "", 20000, 15000, "call life_reblevel >= 1" },
			{ "hlc_rifle_falosw", "", 120000, 15000, "call life_reblevel >= 1" },
			{ "hlc_rifle_SLR", "", 120000, 15000, "call life_reblevel >= 1" },
			{ "hlc_rifle_M1903A1_unertl", "", 120000, 15000, "call life_reblevel >= 1" },
			{ "srifle_DMR_06_olive_F", "", 120000, 15000, "call life_reblevel >= 1" },
			{ "hlc_rifle_aek971_mtk", "", 120000, 15000, "call life_reblevel >= 1" },
			{ "hlc_rifle_ak74_MTK", "", 120000, 15000, "call life_reblevel >= 1" },
			{ "RH_bullb", "", 120000, 15000, "call life_reblevel >= 1" },
			{ "RH_vz61", "", 120000, 15000, "call life_reblevel >= 1" },
            { "arifle_AK12_F", "", 82000, 11000, "call life_reblevel >= 1" }, //Apex DLC
            { "arifle_AKM_F", "", 132000, 11000, "call life_reblevel >= 2" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 132000, 11000, "call life_reblevel >= 2" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 243000, 16500, "call life_reblevel >= 2" }, //Apex DLC
            { "LMG_Zafir_F", "", 210000, 15000, "call life_reblevel >= 2" }, //Apex DLC
			{ "LMG_Mk200_F", "", 180000, 15000, "call life_reblevel >= 2" },
			{ "R3F_FRF2_DES", "", 520000, 15000, "call life_reblevel >= 2" },
			{ "R3F_HK416M_HG_DES", "", 200000, 15000, "call life_reblevel >= 2" },
			{ "RH_muzi", "", 230000, 15000, "call life_reblevel >= 2" },
			{ "hlc_rifle_g3a3ris", "", 230000, 15000, "call life_reblevel >= 2" },
			{ "hlc_rifle_g3ka4", "", 230000, 15000, "call life_reblevel >= 2" },
			{ "hlc_rifle_ak47", "", 230000, 15000, "call life_reblevel >= 2" },
			{ "hlc_rifle_ak74m_MTK", "", 230000, 15000, "call life_reblevel >= 2" },
			{ "hlc_rifle_akm_MTK", "", 230000, 15000, "call life_reblevel >= 2" },
			{ "hlc_rifle_RPK12", "", 230000, 15000, "call life_reblevel >= 2" },
			{ "srifle_LRR_tna_F", "", 230000, 15000, "call life_reblevel >= 2" },
			{ "R3F_FRF2", "", 230000, 15000, "call life_reblevel >= 2" },
			{ "srifle_DMR_05_blk_F", "", 180000, 15000, "call life_reblevel >= 2" },
			{ "RH_tec9", "", 35000, 15000, "call life_reblevel >= 2" }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
			{ "R3F_30Rnd_556x45_SIG551", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "150Rnd_762x54_Box", "", 2125, 60, "" }, //Apex DLC
			{ "200Rnd_65x39_cased_Box", "", 1125, 60, "" },
			{ "hlc_30Rnd_545x39_B_AK", "", 525, 60, "" },
			{ "R3F_10Rnd_762x51_FRF2", "", 1125, 60, "" },
			{ "R3F_30Rnd_556x45_HK416", "", 525, 60, "" },
			{ "30Rnd_9x21_Mag_SMG_02", "", 525, 60, "" },
			{ "RH_30Rnd_9x19_UZI", "", 125, 60, "" },
			{ "RH_32Rnd_9x19_tec", "", 125, 60, "" },
			{ "RH_15Rnd_45cal_fnp", "", 125, 60, "" },
			{ "RH_8Rnd_9x18_Mak", "", 125, 60, "" },
			{ "10Rnd_9x21_Mag", "", 125, 60, "" },
			{ "RH_10Rnd_22LR_mk2", "", 125, 60, "" },
			{ "hlc_20Rnd_762x51_B_fal", "", 125, 60, "" },
			{ "hlc_5rnd_3006_1903", "", 125, 60, "" },
			{ "20Rnd_762x51_Mag", "", 125, 60, "" },
			{ "hlc_30Rnd_545x39_B_AK", "", 125, 60, "" },
			{ "RH_6Rnd_454_Mag", "", 125, 60, "" },
			{ "RH_20Rnd_32cal_vz61", "", 125, 60, "" },
			{ "9Rnd_45ACP_Mag", "", 125, 60, "" },
			{ "hlc_20rnd_762x51_b_G3", "", 125, 60, "" },
			{ "hlc_30Rnd_762x39_b_ak", "", 125, 60, "" },
			{ "hlc_30Rnd_545x39_B_AK", "", 125, 60, "" },
			{ "hlc_60Rnd_545x39_t_rpk", "", 125, 60, "" },
			{ "7Rnd_408_Mag", "", 1025, 60, "" },
			{ "R3F_10Rnd_762x51_FRF2", "", 125, 60, "" },
			{ "150Rnd_762x54_Box", "", 525, 60, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 525, 60, "" },
			{ "RH_7Rnd_50_AE", "", 125, 60, "" }
        };
        accs[] = {
			{ "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 15000, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 25000, 1250, "" },
            { "hgun_ACPC2_F", "", 24000, 2250, "" },
            { "hgun_PDW2000_F", "", 29500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 10000, "" },
            { "hgun_P07_F", "", 7500, 3750, "" },
            { "hgun_P07_khk_F", "", 7500, 3750, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 9500, 4750, "call life_coplevel >= 1" },
            { "SMG_02_ACO_F", "", 30000, 15000, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 17500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, 8750, "call life_coplevel >= 2" },
            { "arifle_MXC_F", "", 30000, 15000, "call life_coplevel >= 2" },
            { "srifle_DMR_07_blk_F", "", 32000, 16000, "call life_coplevel >= 2" },
			//MODGIGN -----
			{ "hlc_rifle_honeybadger", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "hlc_rifle_RU5562", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "hlc_rifle_bcmjack", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "R3F_M4S90", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "hlc_rifle_M4", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "hlc_rifle_CQBR", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "R3F_HK416M_HG", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "R3F_HK417L", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "hlc_smg_mp5sd5", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "SMG_01_F", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "R3F_M107", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "srifle_DMR_05_blk_F", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "LMG_03_F", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "R3F_Minimi_762", "", 30000, 15000, "call life_coplevel >= 2" },
			{ "arifle_SPAR_01_GL_blk_F", "", 30000, 15000, "call life_coplevel >= 2" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 125, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 2" },
            { "29rnd_300BLK_STANAG", "", 200, 100, "call life_coplevel >= 2" },
			{ "hlc_30rnd_556x45_EPR", "", 200, 100, "call life_coplevel >= 2" },
			{ "hlc_30rnd_556x45_EPR", "", 200, 100, "call life_coplevel >= 2" },
			{ "R3F_7Rnd_M4S90", "", 200, 100, "call life_coplevel >= 2" },
			{ "hlc_30rnd_556x45_EPR", "", 200, 100, "call life_coplevel >= 2" },
			{ "hlc_30rnd_556x45_EPR", "", 200, 100, "call life_coplevel >= 2" },
			{ "R3F_30Rnd_556x45_HK416", "", 200, 100, "call life_coplevel >= 2" },
			{ "R3F_20Rnd_762x51_HK417", "", 200, 100, "call life_coplevel >= 2" },
			{ "20Rnd_762x51_Mag", "", 200, 100, "call life_coplevel >= 2" },
			{ "hlc_30Rnd_9x19_B_MP5", "", 200, 100, "call life_coplevel >= 2" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 200, 100, "call life_coplevel >= 2" },
			{ "R3F_10Rnd_127x99_M107", "", 200, 100, "call life_coplevel >= 2" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 200, 100, "call life_coplevel >= 2" },
			{ "hlc_20rnd_762x51_b_G3", "", 200, 100, "call life_coplevel >= 2" },
			{ "200Rnd_556x45_Box_F ", "", 200, 100, "call life_coplevel >= 2" },
			{ "R3F_100Rnd_762x51_MINIMI", "", 200, 100, "call life_coplevel >= 2" },
			{ "30Rnd_556x45_Stanag", "", 200, 100, "call life_coplevel >= 2" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_Aco", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_ACO_grn", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_ACO_grn_smg", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_Aco_smg", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_Arco_blk_F", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_Hamr", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_ERCO_blk_F", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_Hamr", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_DMS", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_Holosight_blk_F", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_Holosight_smg_blk_F", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "optic_AMS", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "muzzle_snds_M", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "muzzle_snds_B", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "muzzle_snds_93mmg", "", 2750, 1375, "call life_coplevel >= 2" },
			{ "bipod_01_F_blk", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
