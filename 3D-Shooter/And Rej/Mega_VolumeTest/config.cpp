class CfgPatches
{
	class Mega_Volumetest
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
				closure1[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,1,20};
				closure2[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,1.01,20};
				closure3[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,0.99,20};
				soundClosure[] = {""};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\mega_volumetest\stereoWSSuncompressed",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\mega_volumetest\stereoWssCompressed",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,1,20};
				closure2[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,1.01,20};
				closure3[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,0.99,20};
				soundClosure[] = {""};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\mega_volumetest\GM6",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\mega_volumetest\StereoOggQ10.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
	};
	
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,1,20};
				closure2[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,1.01,20};
				closure3[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,0.99,20};
				soundClosure[] = {""};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\mega_volumetest\GM6",0.6,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\mega_volumetest\GM6",0.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,1,20};
				closure2[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,1.01,20};
				closure3[] = {"MegasSound\addons\mega_volumetest\closure1",0.57,0.99,20};
				soundClosure[] = {""};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\mega_volumetest\GM6",0.4,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\mega_volumetest\GM6",0.3,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
	};
	
	class Rifle_Long_Base_F;
	 class GM6_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{	
			class BaseSoundModeType
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx_gm6a",0.16,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx_gm6b",0.16,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\mega_volumetest\GM6",0.2,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx_gm6a",0.16,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx_gm6b",0.16,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MegasSound\addons\mega_volumetest\GM6",0.1,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
	};
};