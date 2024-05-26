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
		supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",1,1,500};
		supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",1,1,500};
		class SuperSonicCrack
		{
			superSonicCrack[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",1,1,500};
			class A
			{
				range[] = {0,10};
				sound[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",1,1,500};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
			};
			class B
			{
				range[] = {10,30};
				sound[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",1,1,500};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
			};
			class C
			{
				range[] = {30,500};
				sound[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_far",1,1,500};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
			};
		};
	};
		
};