class CfgPatches
{
	class Mega_MX
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
	class arifle_MX_Base_F: Rifle_Base_F
	{
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Reload_MX",db-12,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\firemode_Mx",db-27,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_MX\closure1",0.75,1,20};
				closure2[] = {"MegasSound\addons\Mega_MX\closure2",0.75,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MX\full1",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_MX\full2",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_MX\full3",1.0,1,1800};
				begin4[] = {"MegasSound\addons\Mega_MX\full4",1.0,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_MX\closure1",0.75,1,20};
				closure2[] = {"MegasSound\addons\Mega_MX\closure2",0.75,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MX\full1",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_MX\full2",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_MX\full3",1.0,1,1800};
				begin4[] = {"MegasSound\addons\Mega_MX\full4",1.0,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
	};
	
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_MX\closure1",0.75,1,20};
				closure2[] = {"MegasSound\addons\Mega_MX\closure2",0.75,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MX\full1",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_MX\full2",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_MX\full3",1.0,1,1800};
				begin4[] = {"MegasSound\addons\Mega_MX\full4",1.0,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_MX\closure1",0.75,1,20};
				closure2[] = {"MegasSound\addons\Mega_MX\closure2",0.75,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MX\full1",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_MX\full2",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_MX\full3",1.0,1,1800};
				begin4[] = {"MegasSound\addons\Mega_MX\full4",1.0,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
		
	};
};