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
				closure1[] = {"MegasSound\addons\Mega_MX_tailTest\closure1",0.75,1,20};
				closure2[] = {"MegasSound\addons\Mega_MX_tailTest\closure2",0.75,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MX_tailTest\full1_short",db-6,1,1800};
				begin2[] = {"MegasSound\addons\Mega_MX_tailTest\full2_short",db-6,1,1800};
				begin3[] = {"MegasSound\addons\Mega_MX_tailTest\full3_short",db-6,1,1800};
				begin4[] = {"MegasSound\addons\Mega_MX_tailTest\full4_short",db-6,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_trees",db-6,1,1800};
						frequency = 1;
						volume = "(1-interior)*trees";
					};
					class TailForest
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_forest",db-6,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_meadows",db-6,1,1800};
						frequency = 1;
						volume = "(1-interior)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_houses",db-6,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_indoor",db-6,1,1800};
						frequency = 1;
						volume = "interior";
					};
				};				
			};
			
			
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_MX_tailTest\closure1",0.75,1,20};
				closure2[] = {"MegasSound\addons\Mega_MX_tailTest\closure2",0.75,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MX_tailTest\full1_short",db-6,1,1800};
				begin2[] = {"MegasSound\addons\Mega_MX_tailTest\full2_short",db-6,1,1800};
				begin3[] = {"MegasSound\addons\Mega_MX_tailTest\full3_short",db-6,1,1800};
				begin4[] = {"MegasSound\addons\Mega_MX_tailTest\full4_short",db-6,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_trees",db-6,1,1800};
						frequency = 1;
						//volume = "(1-interior/1.4)*trees";
						volume = "(1-interior)*trees";
					};
					class TailForest
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_forest",db-6,1,1800};
						frequency = 1;
						//volume = "(1-interior/1.4)*forest";
						volume = "(1-interior)*forest";
					};
					class TailMeadows
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_meadows",db-6,1,1800};
						frequency = 1;
						//volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
						volume = "(1-interior)*(meadows max sea)";
					};
					class TailHouses
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_houses",db-6,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_indoor",db-6,1,1800};
						frequency = 1;
						volume = "interior";
					};
				};				
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
				closure1[] = {"MegasSound\addons\Mega_MX_tailTest\closure1",0.75,1,20};
				closure2[] = {"MegasSound\addons\Mega_MX_tailTest\closure2",0.75,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MX_tailTest\full1_short",db-6,1,1800};
				begin2[] = {"MegasSound\addons\Mega_MX_tailTest\full2_short",db-6,1,1800};
				begin3[] = {"MegasSound\addons\Mega_MX_tailTest\full3_short",db-6,1,1800};
				begin4[] = {"MegasSound\addons\Mega_MX_tailTest\full4_short",db-6,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_trees",db-6,1,1800};
						frequency = 1;
						//volume = "(1-interior/1.4)*trees";
						volume = "(1-interior)*trees";
					};
					class TailForest
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_forest",db-6,1,1800};
						frequency = 1;
						//volume = "(1-interior/1.4)*forest";
						volume = "(1-interior)*forest";
					};
					class TailMeadows
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_meadows",db-6,1,1800};
						frequency = 1;
						//volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
						volume = "(1-interior)*(meadows max sea)";
					};
					class TailHouses
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_houses",db-6,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_indoor",db-6,1,1800};
						frequency = 1;
						volume = "interior";
					};
				};				
			};
		};
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_MX_tailTest\closure1",0.75,1,20};
				closure2[] = {"MegasSound\addons\Mega_MX_tailTest\closure2",0.75,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_MX_tailTest\full1_short",db-6,1,1800};
				begin2[] = {"MegasSound\addons\Mega_MX_tailTest\full2_short",db-6,1,1800};
				begin3[] = {"MegasSound\addons\Mega_MX_tailTest\full3_short",db-6,1,1800};
				begin4[] = {"MegasSound\addons\Mega_MX_tailTest\full4_short",db-6,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_trees",db-6,1,1800};
						frequency = 1;
						//volume = "(1-interior/1.4)*trees";
						volume = "(1-interior)*trees";
					};
					class TailForest
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_forest",db-6,1,1800};
						frequency = 1;
						//volume = "(1-interior/1.4)*forest";
						volume = "(1-interior)*forest";
					};
					class TailMeadows
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_meadows",db-6,1,1800};
						frequency = 1;
						//volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
						volume = "(1-interior)*(meadows max sea)";
					};
					class TailHouses
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_houses",db-6,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"MegasSound\addons\Mega_MX_tailTest\mx_tail_indoor",db-6,1,1800};
						frequency = 1;
						volume = "interior";
					};
				};				
			};
		};
		
	};
};