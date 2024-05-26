class CfgPatches
{
	class Mega_Silencers
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
	class mk20_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Silencers\sl_rifle1",0.7943282,1,200};
				begin2[] = {"MegasSound\addons\Mega_Silencers\sl_rifle2",0.7943282,1,200};
				begin3[] = {"MegasSound\addons\Mega_Silencers\sl_rifle3",0.7943282,1,200};
				begin4[] = {"MegasSound\addons\Mega_Silencers\sl_rifle4",0.7943282,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Silencers\sl_rifle1",0.7943282,1,200};
				begin2[] = {"MegasSound\addons\Mega_Silencers\sl_rifle2",0.7943282,1,200};
				begin3[] = {"MegasSound\addons\Mega_Silencers\sl_rifle3",0.7943282,1,200};
				begin4[] = {"MegasSound\addons\Mega_Silencers\sl_rifle4",0.7943282,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Silencers\sl_rifle1",0.7943282,1,200};
				begin2[] = {"MegasSound\addons\Mega_Silencers\sl_rifle2",0.7943282,1,200};
				begin3[] = {"MegasSound\addons\Mega_Silencers\sl_rifle3",0.7943282,1,200};
				begin4[] = {"MegasSound\addons\Mega_Silencers\sl_rifle4",0.7943282,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Silencers\sl_rifle1",0.7943282,1,200};
				begin2[] = {"MegasSound\addons\Mega_Silencers\sl_rifle2",0.7943282,1,200};
				begin3[] = {"MegasSound\addons\Mega_Silencers\sl_rifle3",0.7943282,1,200};
				begin4[] = {"MegasSound\addons\Mega_Silencers\sl_rifle4",0.7943282,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Silencers\sl_rifle1",0.7943282,1,200};
				begin2[] = {"MegasSound\addons\Mega_Silencers\sl_rifle2",0.7943282,1,200};
				begin3[] = {"MegasSound\addons\Mega_Silencers\sl_rifle3",0.7943282,1,200};
				begin4[] = {"MegasSound\addons\Mega_Silencers\sl_rifle4",0.7943282,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Silencers\sl_rifle1",0.7943282,1,200};
				begin2[] = {"MegasSound\addons\Mega_Silencers\sl_rifle2",0.7943282,1,200};
				begin3[] = {"MegasSound\addons\Mega_Silencers\sl_rifle3",0.7943282,1,200};
				begin4[] = {"MegasSound\addons\Mega_Silencers\sl_rifle4",0.7943282,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Silencers\sl_rifle1",0.7943282,1,200};
				begin2[] = {"MegasSound\addons\Mega_Silencers\sl_rifle2",0.7943282,1,200};
				begin3[] = {"MegasSound\addons\Mega_Silencers\sl_rifle3",0.7943282,1,200};
				begin4[] = {"MegasSound\addons\Mega_Silencers\sl_rifle4",0.7943282,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Silencers\sl_rifle1",0.7943282,1,200};
				begin2[] = {"MegasSound\addons\Mega_Silencers\sl_rifle2",0.7943282,1,200};
				begin3[] = {"MegasSound\addons\Mega_Silencers\sl_rifle3",0.7943282,1,200};
				begin4[] = {"MegasSound\addons\Mega_Silencers\sl_rifle4",0.7943282,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Silencers\sl_rifle1",0.7943282,1,200};
				begin2[] = {"MegasSound\addons\Mega_Silencers\sl_rifle2",0.7943282,1,200};
				begin3[] = {"MegasSound\addons\Mega_Silencers\sl_rifle3",0.7943282,1,200};
				begin4[] = {"MegasSound\addons\Mega_Silencers\sl_rifle4",0.7943282,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
		class manual: Mode_FullAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Silencers\sl_rifle1",0.7943282,1,200};
				begin2[] = {"MegasSound\addons\Mega_Silencers\sl_rifle2",0.7943282,1,200};
				begin3[] = {"MegasSound\addons\Mega_Silencers\sl_rifle3",0.7943282,1,200};
				begin4[] = {"MegasSound\addons\Mega_Silencers\sl_rifle4",0.7943282,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
	};
};