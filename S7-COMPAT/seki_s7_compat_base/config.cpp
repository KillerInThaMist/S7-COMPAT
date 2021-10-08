class CfgPatches
{
	class S7_COMPAT
	{
		name="S7 COMPAT";
		requiredVersion=1.98;
		requiredAddons[]=
		{
			"FIR_AirWeaponSystem_US",
			"FIR_PilotCrewPack_US",
			"rhsusf_melb",
			"uk3cb_baf_weapons_Ammo",
			"uk3cb_baf_weapons_SmallArms",
			"uk3cb_baf_weapons_Accessories",
			"uk3cb_baf_weapons_Launchers",
			"rhsusf_weapons",
			"rhsusf_weapons2",
			"rhsusf_weapons3",
			"ace_missileguidance",
			"ace_hellfire"
		};
		author="SekiGamer";
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"