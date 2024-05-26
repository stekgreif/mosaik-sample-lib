class CfgPatches
{
	class Mega_RPG32
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
	class Launcher_Base_F;
	class launch_RPG32_F: Launcher_Base_F
	{
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"MegasSound\addons\Mega_RPG\full1",1.9952624,1,2500};
			soundBegin[] = {"begin1",1};
		};
	};
};
