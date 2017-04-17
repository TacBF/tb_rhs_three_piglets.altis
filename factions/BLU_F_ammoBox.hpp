// Greece - Hellenic Police
// Author: Clay

class TB_BLUBasicAmmunitionBox
{
	transportClear = 1;
	proxyObject = "TB_BLUBasicAmmunitionBox";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhsusf_mag_15Rnd_9x19_JHP", 10},
			{"rhsusf_5Rnd_00Buck", 10},
			{"hlc_30Rnd_9x19_B_MP5", 10},
			{"SmokeShell", 10},
			{"rhs_mag_m67", 10},
			{"Tear_mag_Gas", 10},
			{"rhs_mag_an_m8hc", 10},
			{"rhs_mag_mk84", 10}
		};
		transportWeapons[] = {{"rhsusf_mag_15Rnd_9x19_JHP", 10}, {"rhsusf_mag_15Rnd_9x19_JHP",2}};
		//transportBackpacks[] = {};
		//transportItems[] = {};
	};
};
class TB_Box_West_Mines_F
{
	transportClear = 1;
	proxyObject = "TB_Box_West_Mines_F";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhsusf_mag_15Rnd_9x19_JHP", 10},			
			{"rhsusf_5Rnd_00Buck", 10},			
			{"hlc_30Rnd_9x19_B_MP5", 4},
			{"SmokeShell", 10}
		};
		//transportWeapons[] = {};
		transportBackpacks[] = {{"rhsusf_assault_eagleaiii_ucp", 2}};
		transportItems[] = {{"MineDetector", 2}, {"ToolKit", 1}};
	};
};