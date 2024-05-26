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
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_MXmikero\full1",1.0,1,150};
				closure2[] = {"MegasSound\addons\Mega_MXmikero\full2",1.0,1,150};
				closure3[] = {"MegasSound\addons\Mega_MXmikero\full3",1.0,1,150};
				closure4[] = {"MegasSound\addons\Mega_MXmikero\full4",1.0,1,150};
				soundClosure[] = {"closure1",0.25,"closure2",0.25,"closure3",0.25,"closure4",0.25};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MXmikero\distant1",0.84,1,3000};
				begin2[] = {"MegasSound\addons\Mega_MXmikero\distant2",0.84,1,3000};
				begin3[] = {"MegasSound\addons\Mega_MXmikero\distant3",0.84,1,3000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_MXmikero\full1",1.0,1,150};
				closure2[] = {"MegasSound\addons\Mega_MXmikero\full2",1.0,1,150};
				closure3[] = {"MegasSound\addons\Mega_MXmikero\full3",1.0,1,150};
				closure4[] = {"MegasSound\addons\Mega_MXmikero\full4",1.0,1,150};
				soundClosure[] = {"closure1",0.25,"closure2",0.25,"closure3",0.25,"closure4",0.25};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MXmikero\distant1",0.84,1,3000};
				begin2[] = {"MegasSound\addons\Mega_MXmikero\distant2",0.84,1,3000};
				begin3[] = {"MegasSound\addons\Mega_MXmikero\distant3",0.84,1,3000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
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
				closure1[] = {"MegasSound\addons\Mega_MXmikero\full1",1.0,1,150};
				closure2[] = {"MegasSound\addons\Mega_MXmikero\full2",1.0,1,150};
				closure3[] = {"MegasSound\addons\Mega_MXmikero\full3",1.0,1,150};
				closure4[] = {"MegasSound\addons\Mega_MXmikero\full4",1.0,1,150};
				soundClosure[] = {"closure1",0.25,"closure2",0.25,"closure3",0.25,"closure4",0.25};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MXmikero\distant1",0.84,1,3000};
				begin2[] = {"MegasSound\addons\Mega_MXmikero\distant2",0.84,1,3000};
				begin3[] = {"MegasSound\addons\Mega_MXmikero\distant3",0.84,1,3000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_MXmikero\full1",1.0,1,150};
				closure2[] = {"MegasSound\addons\Mega_MXmikero\full2",1.0,1,150};
				closure3[] = {"MegasSound\addons\Mega_MXmikero\full3",1.0,1,150};
				closure4[] = {"MegasSound\addons\Mega_MXmikero\full4",1.0,1,150};
				soundClosure[] = {"closure1",0.25,"closure2",0.25,"closure3",0.25,"closure4",0.25};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MXmikero\distant1",0.84,1,3000};
				begin2[] = {"MegasSound\addons\Mega_MXmikero\distant2",0.84,1,3000};
				begin3[] = {"MegasSound\addons\Mega_MXmikero\distant3",0.84,1,3000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
	};
};
//};
