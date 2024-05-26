class CfgPatches
{
	class Mega_UGL
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

class CfgWeapons
{
	class GrenadeLauncher;
	
			class UGL_F: GrenadeLauncher
			{
				changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",db-22,1,5};
				reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL",db-17,1,10};
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					begin1[] = {"MegasSound\addons\Mega_UGL\ugl",1.12202,1,400};
					soundBegin[] = {"begin1",1};
				};
			};
};