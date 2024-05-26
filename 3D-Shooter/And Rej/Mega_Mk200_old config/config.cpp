class CfgPatches
{
	class Mega_Mk200
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
class Mode_FullAuto;
class CfgWeapons
{	
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
				{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_Mk200\closure1",0.79,1,20};
				closure2[] = {"MegasSound\addons\Mega_Mk200\closure2",0.79,1,20};
				closure3[] = {"MegasSound\addons\Mega_Mk200\closure3",0.79,1,20};
				soundClosure[] = {"closure1",0.333,"closure2",0.333,"closure3",0.333};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Mk200\full1",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_Mk200\full2",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_Mk200\full3",1.0,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
	};
};