class TB_OPFBasicAmmunitionBox
{
	transportClear = 1;
	proxyObject = "TB_OPFBasicAmmunitionBox";
	class transportCargo
	{
		transportMagazines[] = {

			{"rhs_30Rnd_545x39_AK", 20},
			{"rhs_30Rnd_762x39mm_89", 10},
			{"rhs_100Rnd_762x54mmR_green", 6},
			{"rhs_10Rnd_762x54mmR_7N1", 10},
			{"rhs_mag_rdg2_white", 10},
			{"rhs_mag_rgd5", 6},
			{"1Rnd_Smoke_Grenade_shell", 10},
			{"rhs_VOG25", 6},
			{"rhs_rpg26_mag", 3},
			{"rhs_rshg2_mag", 3},
			{"rhs_rpg7_PG7VL_mag", 3},
			{"RPG32_F", 2},
			{"DemoCharge_Remote_Mag", 5},
			{"rhs_weap_rsp30_red", 12},
			{"LaserBatteries", 2}
		};
		transportWeapons[] = {{"rhs_weap_rpg26",2}, {"rhs_weap_rshg2",2}};
		//transportBackpacks[] = {};
		//transportItems[] = {};
	};
};

class TB_BLUBasicAmmunitionBox
{
	transportClear = 1;
	proxyObject = "TB_BLUBasicAmmunitionBox";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_mag_30Rnd_556x45_M855A1_Stanag", 20},
			{"rhsusf_100Rnd_556x45_soft_pouch", 2},
			{"rhsusf_200Rnd_556x45_soft_pouch", 2},
			{"rhsusf_100Rnd_762x51", 3},
			{"rhsusf_20Rnd_762x51_m118_special_Mag", 5},
			{"rhsusf_5Rnd_00Buck", 5},
			{"7Rnd_408_Mag", 5},
			{"rhs_mag_an_m8hc", 10},
			{"rhs_mag_m67", 6},
			{"1Rnd_HE_Grenade_shell", 6},
			{"1Rnd_Smoke_Grenade_shell", 10},
			{"rhs_m136_mag", 2},
			//{"rhs_m136_hedp_mag", 2},
			//{"NLAW_F", 1},
			//{"rhs_fgm148_magazine_AT", 1},
			{"DemoCharge_Remote_Mag", 5},
			{"rhs_weap_rsp30_red", 12},
			{"LaserBatteries", 2}
		};
		transportWeapons[] = {{"rhs_weap_M136",2}, {"rhs_weap_M136_hedp",2}};
		//transportBackpacks[] = {};
		//transportItems[] = {};
	};
};
