class CfgPatches
{
	class Mega_PantherSounds
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_armor_f_beta"};
	};
};
class CfgVehicles
{
	class Tank_F;
	class APC_Tracked_01_base_F: Tank_F
	{
		class Sounds
		{
			
			class MegasSound
			{
				sound[] = {"MegasSound\Addons\Mega_TankEngineTest\rpm_1.wav",0.5,1,1200};
				frequency = "1";
				volume = "engineOn*camPos*(((rpm factor [0,2640])*0.5)+0.5)";
			};
			/*
			class Idle_ext
			{
				sound[] = {"",0.39810717,1,200};
				frequency = "0.95	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class Engine
			{
				sound[] = {"",0.5011872,1,200};
				frequency = "0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_ext
			{
				sound[] = {"",0.56234133,1,200};
				frequency = "0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_ext
			{
				sound[] = {"",0.63095737,1,250};
				frequency = "0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_ext
			{
				sound[] = {"",0.63095737,1,300};
				frequency = "0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_ext
			{
				sound[] = {"",0.70794576,1,300};
				frequency = "0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_ext
			{
				sound[] = {"",1.0,1,300};
				frequency = "0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*camPos*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class IdleThrust
			{
				sound[] = {"",0.63095737,1,200};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class EngineThrust
			{
				sound[] = {"",0.63095737,1,200};
				frequency = "0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"",0.70794576,1,200};
				frequency = "0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"",0.70794576,1,250};
				frequency = "0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"",1.0,1,350};
				frequency = "0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"",1.1220185,1,350};
				frequency = "0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"",1.2589254,1,400};
				frequency = "0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class Idle_int
			{
				sound[] = {"",0.31622776,1};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class Engine_int
			{
				sound[] = {"",0.35481337,1};
				frequency = "0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_int
			{
				sound[] = {"",0.39810717,1};
				frequency = "0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_int
			{
				sound[] = {"",0.4466836,1};
				frequency = "0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_int
			{
				sound[] = {"",0.5011872,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_int
			{
				sound[] = {"",0.56234133,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_int
			{
				sound[] = {"",0.63095737,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class IdleThrust_int
			{
				sound[] = {"",0.35481337,1};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"",0.39810717,1};
				frequency = "0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"",0.4466836,1};
				frequency = "0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"",0.4466836,1};
				frequency = "0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"",0.5011872,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"",0.56234133,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"",0.63095737,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class NoiseInt
			{
				sound[] = {"",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"",0.63095737,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"",0.39810717,1.0,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"",0.4466836,1.0,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"",0.5011872,1.0,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"",0.56234133,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"",0.56234133,1.0,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"",0.31622776,1.0,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"",0.35481337,1.0,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"",0.39810717,1.0,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"",0.4466836,1.0,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"",0.5011872,1.0,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0
			{
				sound[] = {"",0.25118864,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"",0.2818383,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"",0.35481337,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0
			{
				sound[] = {"",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"",0.35481337,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"",0.35481337,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			*/
		};
	};
};