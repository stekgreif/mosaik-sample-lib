class CfgPatches
{
	class Mega_Miniguns
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
class Mode_FullAuto;

class CfgWeapons
{	
	class CannonCore;
	class MGunCore;
	class MGun;
	class LMG_RCWS;
	class LMG_Minigun: LMG_RCWS
	{
		class manual: MGun
		{	
			class StandardSound
			{
				begin1[] = {"MegasSound\addons\Mega_Miniguns\65mm",1.0,1,2000,{8815,32828}};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",0.31622776,1,20};
				closure2[] = {"",0.31622776,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			soundContinuous = 1;
		};
	};	
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		class LowROF: Mode_FullAuto
		{	
			class StandardSound
			{
				begin1[] = {"MegasSound\addons\Mega_Miniguns\65mm",1.0,1,2000,{8815,32828}};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
	};
	
	class M134_minigun: MGunCore
	{
		class LowROF: Mode_FullAuto
		{
			class StandardSound
			{
				begin1[] = {"MegasSound\addons\Mega_Miniguns\65mm",1.0,1,2000,{8815,32828}};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundContinuous = 1;
		};
		class HighROF: LowROF
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"MegasSound\addons\Mega_Miniguns\65mm",1.0,1,2000,{8815,32828}};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundContinuous = 1;
		};
	};
	
};