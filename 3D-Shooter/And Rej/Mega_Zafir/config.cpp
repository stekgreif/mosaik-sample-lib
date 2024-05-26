class CfgPatches
{
	class Mega_Zafir
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
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{	
	class Rifle_Long_Base_F;
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_3",0.79,1,20};
				closure2[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_4",0.79,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Zafir\full1",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_Zafir\full2",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_Zafir\full3",1.0,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_3",0.79,1,20};
				closure2[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_4",0.79,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Zafir\full1",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_Zafir\full2",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_Zafir\full3",1.0,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
	};
};