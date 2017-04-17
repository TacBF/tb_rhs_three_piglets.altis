class ICE
{
    class vehicles
    {
		class armaments
        {
			startFullyRearmed = 1;
        };
    };
	class zones
	{
    #include "zoneList.hpp"
	};
	class mission
	{
		gameMode = "A&D";
		missionScale = "medium";
		recommendedTotalPlayers = 20;
		attackingSide = "west";

		class briefings
		{
			class west
			{
				original = "briefing_blue.hpp";
			};
			class east
			{
				original = "briefing_red.hpp";
			};
        };
		class factions // or sides
		{
			class faction
			{
				bluFor = "BLU_F";
				opFor = "OPF_G_F";
			};
      class teamName
			{
				bluFor = "Hellenic Police";
				opFor = "Local Gangs";
			};
			class teamFlag
			{
				bluFor = "flags\hellenic_police.paa"; // "flags" is a sub-folder in mission folder
				opFor = "flags\local_gangs.paa";
			};
		};
		class scoring
		{
			class tickets
			{
				// In A&S, specify the tickets per hour
				// In A&D, Attacker = starting tickets, Defender = tickets per zone
				// In S&D, Attacker = starting tickets, Defender = # of caches
				bluFor = 40;
				opFor = 15;
			};
		};
	};
	class respawn
	{
        class vehicles
        {
            class respawnDelay
            {
                //'globalOverride' takes precedence over 'multiplier'
                //globalOverride = -1; // Value is in minutes. set to >= 0 to override scaled "vehicle category" values.
                multiplier = 1.0; // set to > 0 to override scaled "vehicle category" values. Eg: 0.5 to halve all values. 1.5 to increase all values.
                //(<= 0 uses default multiplier), (> 0, < 1 scales down), (> 1 scales up), (== 1 uses 1 for all vehicles, regardless of missionScale)
            };
        };
		class FO
		{
			minSpacingDist = 500;
			maxFriendlySiteDist = 750;
			minZoneDist = 0;
		};
		class SRP
		{
			maxFriendlySiteDist = 500;
		};
		class HO
		{
			minSpacingDist = 250;
			maxFriendlySiteDist = 750;
		};
        class infantry
        {
            baseDuration = 60;
            class unevenTeamsPenaltyTime
            {
                ratioDuration = 60; // "pivot value" where low player count differences result in small time penalties,
                // but large differences result in exponential time penalties
                maxDuration = 120;
            };
        };
	};
	class gameModes
	{
	    class objectives
        {
            class zones
            {
                class captureRates
                {
                    heldZoneMultiplier = 1.0; // Decimal value between 0 and N - <1 reduces capture rate, >1 increases capture rate
					neutralZoneMultiplier = 1.5; // This is a cumulative multiplier with 'heldZoneMultiplier'
					negateNeutral = 1; // set to 1 to make both Multipliers totally independent, not a "cumulative multiplier"
                };
            };
		};
        class AAD
        {
			attackerTicketsPerZoneCapture = 20;
			attackerMaxTotalTickets = 50;
        };
	};
    class gear
    {
        #include "tb_kitDefines.sqh"
        #include "tb_magazineExclusions.hpp"
	    class NVGogglesForAll
        {
            west = 0;
            east = 0;
            resistance = 0;
        };
        class roles
        {
			#define __unlimited -99
            kits[] =
            {
                //#include "factions\BLU_F_roleRatio.hpp"
                //#include "factions\OPF_G_F_roleRatio.hpp"
{
	// {id, "caption", teamRatio, minimum, minTeamSize, minSquadSize, squadRatio}
		{__ICE_gear_Rifleman, "Patrolman", __unlimited, 0, 0, 0, 0},
	{__ICE_gear_Grenadier, "Grenadier", 5, 0, 0, 3, 0},
	{__ICE_gear_MG, "E.K.A.M", 4, 0, 0, 3, 0},
	{__ICE_gear_Medic, "Medic", 4, 1, 0, 3, 0},
	{__ICE_gear_CombatEngineer, "Combat Engineer", 6, 1, 0, 3, 0},
	{__ICE_gear_LightAT, "Medium AT", 8, 1, 0, 3, 0},
	{__ICE_gear_HeavyAT, "Heavy AT", 14, 0, 0, 3, 0},
	{__ICE_gear_AA, "Anti-Air", 10, 0, 0, 3, 0},
	{__ICE_gear_Marksman, "Marksman", 0, 0, 0, 3, 0},
	{__ICE_gear_Sniper, "Sniper", 20, 0, 0, 2, 0},
	{__ICE_gear_SL, "Officer (SL)", __unlimited, 0, 0, 1, 0},
	{__ICE_gear_Crewman, "Crewman", 0, 0, 0, 0, 0},
	{__ICE_gear_Pilot, "Pilot", __unlimited, 0, 0, 0, 0},
	{__ICE_gear_Diver, "Diver", __unlimited, 0, 0, 3, 0},
},
{
	{__ICE_gear_Rifleman, "Pusher", __unlimited, 0, 0, 0, 0},
	{__ICE_gear_Grenadier, "Grenadier", 0, 0, 0, 0, 0},
	{__ICE_gear_MG, "Mercenary", 10, 0, 0, 0, 0},
	{__ICE_gear_Medic, "Medic", 4, 1, 0, 3, 0},
	{__ICE_gear_CombatEngineer, "Engineer", 6, 1, 0, 3, 0},
	{__ICE_gear_LightAT, "Light AT", 0, 0, 0, 0, 0},
	{__ICE_gear_HeavyAT, "Medium AT", 0, 0, 0, 0, 0},
	{__ICE_gear_AA, "Anti-Air", 0, 0, 0, 0, 0},
	{__ICE_gear_Marksman, "Marksman", 0, 0, 0, 0, 0},
	{__ICE_gear_Sniper, "Sniper", 12, 0, 0, 3, 0},
	{__ICE_gear_SL, "Cartel", __unlimited, 0, 0, 1, 0},
	{__ICE_gear_Crewman, "Crewman", 0, 0, 0, 0},
	{__ICE_gear_Pilot, "Pilot", __unlimited, 0, 0, 0, 0},
	{__ICE_gear_Diver, "Diver", 0, 0, 0, 0, 0}

}
            };
		};
	    class armaments
		{
			class BLU_F
			{
				defaultGear = "factions\BLU_F.sqh";
				#include "factions\_common_smallItems.sqh"
				#include "factions\BLU_F_gear.sqh"
				#include "factions\BLU_F_uniforms.sqh"
			};
			class OPF_G_F
			{
				defaultGear = "factions\OPF_G_F.sqh";
				#include "factions\_common_smallItems.sqh"
				#include "factions\OPF_G_F_gear.sqh"
				#include "factions\OPF_G_F_uniforms.sqh"
			};
		};
	};
};
