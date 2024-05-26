class CfgPatches
{
	class Mega_mk18_dmr
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
	class EBR_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_mk18_dmr\closure1",0.70,1,20};
				closure2[] = {"MegasSound\addons\Mega_mk18_dmr\closure2",0.70,1,20};
				closure3[] = {"MegasSound\addons\Mega_mk18_dmr\closure3",0.70,1,20};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_mk18_dmr\full1",1.0,1,2300};
				begin2[] = {"MegasSound\addons\Mega_mk18_dmr\full2",1.0,1,2300};
				begin3[] = {"MegasSound\addons\Mega_mk18_dmr\full3",1.0,1,2300};
				begin4[] = {"MegasSound\addons\Mega_mk18_dmr\full4",1.0,1,2300};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_mk18_dmr\closure1",0.70,1,20};
				closure2[] = {"MegasSound\addons\Mega_mk18_dmr\closure2",0.70,1,20};
				closure3[] = {"MegasSound\addons\Mega_mk18_dmr\closure3",0.70,1,20};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_mk18_dmr\full1",1.0,1,2300};
				begin2[] = {"MegasSound\addons\Mega_mk18_dmr\full2",1.0,1,2300};
				begin3[] = {"MegasSound\addons\Mega_mk18_dmr\full3",1.0,1,2300};
				begin4[] = {"MegasSound\addons\Mega_mk18_dmr\full4",1.0,1,2300};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
		};
	};
};