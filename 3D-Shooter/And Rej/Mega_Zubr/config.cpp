class CfgPatches
{
	class Mega_Zubr
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
class CfgWeapons
{
	class Pistol_Base_F;
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"MegasSound\addons\Mega_Zubr\Closure_Zubr_01",db-6,1,20};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_Zubr\Zubr_short_01",db-6,1,1800};
				begin2[] = {"MegasSound\addons\Mega_Zubr\Zubr_short_02",db-6,1,1800};
				begin3[] = {"MegasSound\addons\Mega_Zubr\Zubr_short_03",db-6,1,1800};
				soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"MegasSound\addons\Mega_Zubr\Zubr_tail_interior",1,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"MegasSound\addons\Mega_Zubr\Zubr_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.111)*trees";
					};
					class TailForest
					{
						sound[] = {"MegasSound\addons\Mega_Zubr\Zubr_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.111)*forest";
					};
					class TailMeadows
					{
						sound[] = {"MegasSound\addons\Mega_Zubr\Zubr_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.111)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"MegasSound\addons\Mega_Zubr\Zubr_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.111)*houses";
					};
				};
			};
		};
	};
};