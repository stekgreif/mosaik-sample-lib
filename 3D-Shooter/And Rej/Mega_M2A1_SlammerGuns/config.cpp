class CfgPatches
{
	class Mega_M2A1_SlammerGuns
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
	class MGun;
	class CannonCore;
	class cannon_120mm: CannonCore
	{
	class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"MegasSound\addons\Mega_M2A1_SlammerGuns\120mm",db3,1,3500};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};	
	};
	class LMG_RCWS: MGun
	{
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"MegasSound\addons\Mega_M2A1_SlammerGuns\closure",db-8,1,40};
				soundClosure[] = {"closure1",1};
				begin1[] = {"MegasSound\addons\Mega_M2A1_SlammerGuns\LMG_1",db-5,1,2100};
				begin2[] = {"MegasSound\addons\Mega_M2A1_SlammerGuns\LMG_2",db-5,1,2100};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
};