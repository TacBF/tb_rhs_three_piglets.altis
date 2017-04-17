// RES - Taliban
// Author: Cole

class TB_A3RESBasicAmmunitionBox
{
	transportClear = 1;
	proxyObject = "TB_A3RESBasicAmmunitionBox";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_30Rnd_762x39mm", 20},
			{"rhs_10Rnd_762x54mmR_7N1", 10},
			{"rhs_mag_9x18_12_57N181S", 10},
			{"SmokeShell", 10},
		};
		transportWeapons[] = {{"rhs_30Rnd_762x39mm", 10}, {"rhs_mag_9x18_12_57N181S",5}, {"rhs_10Rnd_762x54mmR_7N1",5}};
		//transportBackpacks[] = {};
		//transportItems[] = {};
	};
};
class TB_Box_East_Mines_F
{
	transportClear = 1;
	proxyObject = "TB_Box_East_Mines_F";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_30Rnd_762x39mm", 20},
			{"rhs_10Rnd_762x54mmR_7N1", 10},
			{"rhs_mag_9x18_12_57N181S", 10},
			{"SmokeShell", 10},
		};
		//transportWeapons[] = {};
		transportBackpacks[] = {{"B_FieldPack_cbr", 2}};
		transportItems[] = {{"MineDetector", 2}, {"ToolKit", 1}};
	};
};