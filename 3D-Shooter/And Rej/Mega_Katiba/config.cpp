class CfgPatches
{
	class Mega_Katiba
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
	class Rifle_Base_F;
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_Katiba\closure1",0.79,1,20};
				closure2[] = {"MegasSound\addons\Mega_Katiba\closure2",0.79,1,20};
				closure3[] = {"MegasSound\addons\Mega_Katiba\closure3",0.79,1,20};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Katiba\full1",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_Katiba\full2",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_Katiba\full3",1.0,1,1800};
				begin4[] = {"MegasSound\addons\Mega_Katiba\full4",1.0,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_Katiba\closure1",0.79,1,20};
				closure2[] = {"MegasSound\addons\Mega_Katiba\closure2",0.79,1,20};
				closure3[] = {"MegasSound\addons\Mega_Katiba\closure3",0.79,1,20};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Katiba\full1",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_Katiba\full2",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_Katiba\full3",1.0,1,1800};
				begin4[] = {"MegasSound\addons\Mega_Katiba\full4",1.0,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
	};
};