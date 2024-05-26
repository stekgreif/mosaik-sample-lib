class CfgPatches
{
	class Mega_SonicCracks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_CargoPoses_F"};
		version = "0.01";
		author[] = {"Megagoth1702"};
		authorUrl = "URL";
	};
};

class cfgAmmo
{
	class BulletCore;
	class BulletBase: BulletCore
	{
		supersonicCrackNear[] = {"MegasSound\Addons\Mega_SonicCracks\crack_middle",1,1,40};
		supersonicCrackFar[] = {"MegasSound\Addons\Mega_SonicCracks\crack_middle",1,1,150};
		class SuperSonicCrack
		{
			superSonicCrack[] = {"MegasSound\Addons\Mega_SonicCracks\crack_middle",1,1,500};
			class A
			{
				range[] = {0,10};
				sound[] = {"MegasSound\Addons\Mega_SonicCracks\crack_close",1,1,500};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
			};
			class B
			{
				range[] = {10,30};
				sound[] = {"MegasSound\Addons\Mega_SonicCracks\crack_middle",1,1,500};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
			};
			class C
			{
				range[] = {30,500};
				sound[] = {"MegasSound\Addons\Mega_SonicCracks\crack_far",1,1,500};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
			};
		};
	};
		
};