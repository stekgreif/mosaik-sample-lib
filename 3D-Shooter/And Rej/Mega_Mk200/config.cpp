class CfgPatches
{
	class Mega_Mk200
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

class CfgSoundShaders
{
	class mk200_Closure
	{
		samples[] = {{"MegasSound\Addons\Mega_Mk200\closure1",1}};
		range = 25;
		volume = 1;
	};
	class Mk200_shotClose
	{
		samples[] = {{"MegasSound\Addons\Mega_mk200\mk200_1",1}};
		volume = 1;
		range = 200;
		volumeCurve[] = {{0,1},{100,0.5},{200,1}};
	};
	class Mk200_shotDistant
	{
		samples[] = {{"MegasSound\Addons\Mega_Mk200\mk200_distant",1}};
		volume = 1;
		range = 3500;
		volumeCurve[] = {{0,1},{100,0.75},{200,1}};
	};
};
class CfgSoundSets
{
	class Mk_200_Mega
	{
		soundShaders[] = {"Mk200_closure","mk200_shotClose","mk200_shotDistant"};
		volumeFactor = 1.6;//1.6
		volumeCurve = "AttenuationCurveWeapons2";
		stereoStartDistance = 3;
		stereoRadius = 5;
		spatial = 1;
		doppler = 1;
		loop = 0;
	};
};
	
	
class Mode_FullAuto;
class CfgWeapons
{	
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				soundSetShot[] = {"Mk200_mega"};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk200_mega"};
			};
		};
	};
};