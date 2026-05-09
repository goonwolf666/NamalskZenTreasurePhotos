class CfgPatches
{
	class NamalskZenTreasure
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Scripts",
			"ZenModCore",
			"ZenTreasureBase"
		};
	};
};

// Define photographs & textures
class CfgVehicles
{
	//! DEFINE PHOTO DESCRIPTIONS & LOCATIONS (textures are automatically applied in ZenTreasure_PhotoBase.c based on photo #)
	//! Always modify and re-pack this mod if you want to add new photos, and either edit my existing Livonia photo config 
	//! to suit your map, or add new photos after my custom photo config.
	class ZenTreasure_PhotoBase;
	
	//! namalsk photo config:
	class ZenTreasure_Photo01 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "KP  -  I left you some TREASURETYPE stuff under the camonets north of Nemsk, by the double stands where Hany always leaves that fucking jeep!";
		treasure_stash_x = 8885.73;
		treasure_stash_z = 10752.62;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo02 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "Hey man I left this where I knew you would find it..  I buried all the TREASURETYPE shit that we found by the well in Nemsk, just like old times right!  I am gonna take my chances on the ice..";
		treasure_stash_x = 9016.51;
		treasure_stash_z = 10105.69;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo03 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "July 2015  -  Camping at the beach near the marsh, where we stashed that TREASURETYPE gear near the rocks.  Sad that we might never get back, but its been fucking bullet central there for months..";
		treasure_stash_x = 7011.33;
		treasure_stash_z = 9846.79;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo04 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "Ivan and I busted our fucking ASSES working at the building site in Sebjan, but dont worry..  we kept a few TREASURETYPE supplies for ourselves!  Look near the ladder at the brick workshop..";
		treasure_stash_x = 5639.82;
		treasure_stash_z = 10035.7;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo05 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "Remember where you bagged that fox from the hunting stand on the coast, near the wrecked BMP?  I stashed some of my TREASURETYPE gear right near there.. its all yours IF you can get there boy!";
		treasure_stash_x = 6222.58;
		treasure_stash_z = 11819.89;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo06 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "DAN  -  I saw something weird on the CCTV feed from the Vorkuta firestation, a guy doing something suspicious next to the dumpster outside.. taking a shit maybe?  Send H down to work it out (and clean it up!)";
		treasure_stash_x = 6967.46;
		treasure_stash_z = 11464.25;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo07 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "I saw them again behind the garages next to Vorkuta hospital! I snuck a picture from the balcony this time.. WTF are these guys up to, maybe hiding something? Check when you get back here..";
		treasure_stash_x = 6697.87;
		treasure_stash_z = 10977.20;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo08 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "Remember that time we camped between the silos in Jalovisko?..  I left you some TREASURETYPE stuff there for later =) peace";
		treasure_stash_x = 8202.75;
		treasure_stash_z = 10810.49;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo09 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "May 2026 - Loading containers in fucking Jalovisko again..  I stashed a little TREASURETYPE stuff for us on the NE side, by the rubble..";
		treasure_stash_x = 8290.51;
		treasure_stash_z = 10699.47;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo10 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "SECURITY REPORT:  Suspicious activity detected at the airfield guardhouse, CCTV capture of incident is attached.  STAV - why was the site unattended?!";
		treasure_stash_x = 6342.62;
		treasure_stash_z = 9334.48;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo11 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "21/11/2016  -  Memories of freezing our asses off at REFCAMP south!  The nets down the back were the only warm spot - with the right amount of tuzemak anyway";
		treasure_stash_x = 5124.83;
		treasure_stash_z = 8951.87;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo12 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "We had to get the hell out of there, but we buried the TREASURETYPE supplies before we evacuated the mine site.. look down behind the last rail workshop";
		treasure_stash_x = 4694.07;
		treasure_stash_z = 7983.83;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo13 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "SECURITY REPORT:  2 intruders were detected at the west bunker wall of Athena Research Institute (CCTV image attached). Send a team to investigate, noting possible link to the TREASURETYPE stores theft?";
		treasure_stash_x = 4216.11;
		treasure_stash_z = 8131.15;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo14 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "I wandered up on these guys burying something near the east gate of the Norinsk factories..  AND THEN THE ASSHOLES CALLED SECURITY?!  I took a picture of them - do you know these fuckin guys?";
		treasure_stash_x = 3965.69;
		treasure_stash_z = 7512.81;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo15 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "R  -  I left the TREASURETYPE stuff under the south guard tower at A2, watch for fucking BEARS though dude!  Goodluck, Ben";
		treasure_stash_x = 4990.71;
		treasure_stash_z = 6531.07;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo16 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "We stashed that TREASURETYPE gear at the Brensk factories, at the south guardhouse right near the bridge.  Better bring a shovel pal LOL";
		treasure_stash_x = 4853.82;
		treasure_stash_z = 6071.65;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo17 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "Quick selfie of us idiots before entering the south tunnel!  We stashed all the TREASURETYPE gear that we couldnt carry with us, but will see you on the other side right..";
		treasure_stash_x = 3750.66;
		treasure_stash_z = 6183.82;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo18 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "Dan, I caught something else strange on the CCTV at Tara factory..  it looked like more bandits, fucking around with something next to the crane this time?  Can you get down there and take a look, I printed out a still";
		treasure_stash_x = 7630.16;
		treasure_stash_z = 8760.98;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo19 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "Leo  -  they came back to Tara Medical, but this time I snapped a pic through the window.  They were hiding something between the two main hospital buildings?  I gotta GTFO but you check when you can";
		treasure_stash_x = 7259.95;
		treasure_stash_z = 7973.82;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo20 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "Note to self:  I saw Sumrak stashing his TREASURETYPE shit at the Tara railyards, right outside the lathe factory.  Reminder to come back and collect it when this shit blows over..";
		treasure_stash_x = 7649.57;
		treasure_stash_z = 7392.83;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo21 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "ELI  -  I STASHED IT BEHIND THE GUARDHOUSE AT TARA DOCKS  -  GOOD LUCK MATE  -  R";
		treasure_stash_x = 7784.23;
		treasure_stash_z = 7634.2;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo22 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "I couldnt believe it, they were digging for 20 minutes and didnt notice me on the sawmill tower!  I snapped this photo as evidence..  shit is getting crazy brother";
		treasure_stash_x = 7070.34;
		treasure_stash_z = 5805.86;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo23 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "spot the idiot hiding his TREASURETYPE shit in the helipad shed at tara peak!!  peak DUMBASS more like LOL..  super secure, NOT";
		treasure_stash_x = 7242.4;
		treasure_stash_z = 7047.9;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo24 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "15.12.31  -  Enemy sighted at Seraja peak; we interrupted them planting something near the helipad at BK-L01.  I have marked the site - send a patrol ASAP.";
		treasure_stash_x = 4138.88;
		treasure_stash_z = 6572.07;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo25 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "[BK-L02]-- MARK: TREASURETYPE stores | GRID: x3362/z6716 --[BK-L02]";
		treasure_stash_x = 3361.27;
		treasure_stash_z = 6715.53;
		mapName = "namalsk";
	};
	class ZenTreasure_Photo26 : ZenTreasure_PhotoBase
	{
		scope = 2;
		descriptionShort = "I snapped this pic from guardtower at the Warehouses..  there was a whole crew of them burying something.  FUCKING WEIRD man, what the hell is going on right now?!";
		treasure_stash_x = 4719.47;
		treasure_stash_z = 8916.65;
		mapName = "namalsk";
	};
};