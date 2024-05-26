class CfgPatches
{
	class Mega_waveTestLab
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
				closure1[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,1,20};
				closure2[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,1.01,20};
				closure3[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,0.99,20};
				soundClosure[] = {/*"closure1",0.33,"closure2",0.33,"closure3",0.33*/};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_waveTestLab\low",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_waveTestLab\med",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_waveTestLab\high",1.0,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,1,20};
				closure2[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,1.01,20};
				closure3[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,0.99,20};
				soundClosure[] = {/*"closure1",0.33,"closure2",0.33,"closure3",0.33*/};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_waveTestLab\low",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_waveTestLab\med",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_waveTestLab\high",1.0,1,1800};
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
				closure1[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,1,20};
				closure2[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,1.01,20};
				closure3[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,0.99,20};
				soundClosure[] = {/*"closure1",0.33,"closure2",0.33,"closure3",0.33*/};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_waveTestLab\low",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_waveTestLab\med",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_waveTestLab\high",1.0,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,1,20};
				closure2[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,1.01,20};
				closure3[] = {"MegasSound\addons\Mega_waveTestLab\closure1",0.57,0.99,20};
				soundClosure[] = {/*"closure1",0.33,"closure2",0.33,"closure3",0.33*/};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\Mega_waveTestLab\low",1.0,1,1800};
				begin2[] = {"MegasSound\addons\Mega_waveTestLab\med",1.0,1,1800};
				begin3[] = {"MegasSound\addons\Mega_waveTestLab\high",1.0,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		
	};
};