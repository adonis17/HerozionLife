class CfgGather {
    class Resources {
        class apple {
            amount = 5;
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = "";
            zoneSize = 30;
        };

        class peach {
            amount = 5;
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4" };
            item = "";
            zoneSize = 30;
        };

        class heroin_unprocessed {
            amount = 3;
            zones[] = { "heroin_1" };
            item = "";
            zoneSize = 30;
        };

        class cocaine_unprocessed {
            amount = 3;
            zones[] = { "cocaine_1" };
            item = "";
            zoneSize = 30;
        };

        class cannabis {
            amount = 3;
            zones[] = { "weed_1" };
            item = "";
            zoneSize = 30;
        };
		
		class mdma_ecstasy {
            amount = 3; // Amount that will be mined each time.
            zones[] = { "ecstasy_1" }; // Create a mark in editor with this name and place it on the map.
            item = ""; // Item required for mine it.
            zoneSize = 30;
		};
		
		class mushroom {
            amount = 3; //Amount Optional
            zones[] = { "mushroom_1","mushroom_2","mushroom_3" };
            item = "";
            zoneSize = 30;
        };
		
		class tobacco_unprocessed {
            amount = 3; //Optional Amount
            zones[] = { "tobacco_1" };
            item = "";
            zoneSize = 30;
        };

		class ruby_raw {
            amount = 2;
            zones[] = { "ruby_mine" };
            item = "pickaxe";
            mined[] = { "ruby_raw" };
            zoneSize = 30;
        };
			
		class uranium_unrefined {
            amount = 2;
            zones[] = { "uranium_mine" };
            item = "pickaxe";
            mined[] = { "uranium_unrefined" };
            zoneSize = 30;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {

		class Pillage {
            amount = 4; //Amount Optional
            zones[] = { "Pillage_1","Pillage_2","Pillage_3" };
            item = "";
			mined[] = { {"Dent",0,25},{"Os",25,95},{"Bague",95,100} };
            zoneSize = 30;
        };
        class cf_unrefined {
            amount = 4;
            zones[] = { "cf_mine" };
            item = "pickaxe";
            mined[] = { {"copper_unrefined",0,65},{"iron_unrefined",65,100} };
            zoneSize = 30;
        };

        class salt_unrefined {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
            zoneSize = 30;
        };

        class sand {
            amount = 2;
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 30;
        };

        class diamond_uncut {
            amount = 2;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 30;
        };

        class rock {
            amount = 2;
            zones[] = { "rock_quarry" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 30;
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "oil_field_1", "oil_field_2" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed" };
            zoneSize = 30;
        };
		

    };
};