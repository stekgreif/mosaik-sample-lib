class CfgPatches
{
 class Mega_VolumeLevels
 {
    units[] = {};
	weapons[] = {};
	requiredVersion = 0.1;
    requiredAddons[] = {"A3_Sounds_F","A3_CargoPoses_F"};
 };
};
/*class CfgSounds
{
 class scuba_breath
 {
  sound[] = {"\A3\sounds_f\missions\scuba_breath",1.0,1.0};
  titles[] = {};
 };
 class RadioAmbient2
 {
  sound[] = {"a3\sounds_f\sfx\radio\ambient_radio2",0.39810717,1};
  titles[] = {};
  duration = 9;
  scope = 1;
 };
 class RadioAmbient6
 {
  sound[] = {"a3\sounds_f\sfx\radio\ambient_radio6",0.39810717,1};
  titles[] = {};
  duration = 6;
  scope = 1;
 };
 class RadioAmbient8
 {
  sound[] = {"a3\sounds_f\sfx\radio\ambient_radio8",0.39810717,1};
  titles[] = {};
  duration = 11;
  scope = 1;
 };
 class ClickSoft
 {
  sound[] = {"A3\missions_f\data\sounds\click.wss",0.15,1};
  titles[] = {};
 };
 class Alarm
 {
  name = "$STR_DN_ALARM";
  sound[] = {"A3\Sounds_F\sfx\alarm",1.1220185,1,300,1,0.0,0.0,0.0};
  titles[] = {};
 };
 class AlarmCar
 {
  name = "$STR_A3_CfgSounds_AlarmCar0";
  sound[] = {"A3\Sounds_F\sfx\alarmCar",1.1220185,1,300,1,0.0,0.0,0.0};
  titles[] = {};
 };
 class Alarm_BLUFOR
 {
  name = "$STR_A3_CfgSounds_Alarm_BLUFOR0";
  sound[] = {"A3\Sounds_F\sfx\alarm_blufor",1.0,1.0};
  titles[] = {};
 };
 class Alarm_OPFOR
 {
  name = "$STR_A3_CfgSounds_Alarm_OPFOR0";
  sound[] = {"A3\Sounds_F\sfx\alarm_opfor",1.0,1.0};
  titles[] = {};
 };
 class Alarm_Independent
 {
  name = "$STR_A3_CfgSounds_Alarm_Independent0";
  sound[] = {"A3\Sounds_F\sfx\alarm_independent",1.0,1.0};
  titles[] = {};
 };
 class UAV_01
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_01",0.31622776,1.0};
  titles[] = {};
  duration = 4;
 };
 class UAV_02
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_02",0.31622776,1.0};
  titles[] = {};
  duration = 10;
 };
 class UAV_03
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_03",0.31622776,1.0};
  titles[] = {};
  duration = 5;
 };
 class UAV_04
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_04",0.31622776,1.0};
  titles[] = {};
  duration = 7;
 };
 class UAV_05
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_05",0.31622776,1.0};
  titles[] = {};
  duration = 7;
 };
 class UAV_06
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_06",0.31622776,1.0};
  titles[] = {};
  duration = 17;
 };
 class UAV_07
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_07",0.31622776,1.0};
  titles[] = {};
  duration = 10;
 };
 class UAV_08
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_08",0.31622776,1.0};
  titles[] = {};
  duration = 1;
 };
 class UAV_09
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_09",0.31622776,1.0};
  titles[] = {};
  duration = 1;
 };
 class UAV_loop
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_loop",0.31622776,1.0};
  titles[] = {};
  duration = 5;
 };
 class bobcat_engine_loop
 {
  sound[] = {"A3\Sounds_F\sfx\bobcat_engine_loop",1.1220185,1.0};
  titles[] = {};
 };
 class bobcat_engine_start
 {
  sound[] = {"A3\Sounds_F\sfx\bobcat_engine_start",1.2589254,1.0};
  titles[] = {};
 };
 class vehicle_collision
 {
  sound[] = {"A3\Sounds_F\sfx\vehicle_collision",1.1220185,1.0};
  titles[] = {};
 };
 class vehicle_drag_end
 {
  sound[] = {"A3\Sounds_F\sfx\vehicle_drag_end",1.2589254,1.0};
  titles[] = {};
 };
 class vehicle_dragging
 {
  sound[] = {"A3\Sounds_F\sfx\vehicle_dragging",1.2589254,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions1_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions1_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions2_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions2_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions3_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions3_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions4_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions4_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions5_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions5_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight1_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight1_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight2_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight2_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight3_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight3_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight4_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight4_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldHeli1_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli1_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldHeli2_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli2_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldHeli3_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli3_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldJet1_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet1_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldJet2_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet2_mono",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldJet3_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet3_mono",0.31622776,1.0};
  titles[] = {};
 };
 class Scared_Animal1
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal1",0.31622776,1.0};
  titles[] = {};
 };
 class Scared_Animal2
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal2",0.31622776,1.0};
  titles[] = {};
 };
 class Scared_Animal3
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal3",0.31622776,1.0};
  titles[] = {};
 };
 class Scared_Animal4
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal4",0.31622776,1.0};
  titles[] = {};
 };
 class Scared_Animal5
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal5",0.31622776,1.0};
  titles[] = {};
 };
 class Scared_Animal6
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal6",0.31622776,1.0};
  titles[] = {};
 };
 class Scared_Animal7
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal7",0.31622776,1.0};
  titles[] = {};
 };
 class Hint3
 {
  sound[] = {"\a3\Sounds_F\sfx\hint-3",0.8912509,1.0};
  titles[] = {};
 };
 class Earthquake_01
 {
  sound[] = {"\a3\Sounds_F\sfx\earthquake1",3.1622777,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE1";
  titles[] = {};
 };
 class Earthquake_02
 {
  sound[] = {"\a3\Sounds_F\sfx\earthquake2",3.1622777,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE2";
  titles[] = {};
 };
 class Earthquake_03
 {
  sound[] = {"\a3\Sounds_F\sfx\earthquake3",3.1622777,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE3";
  titles[] = {};
 };
 class Earthquake_04
 {
  sound[] = {"\a3\Sounds_F\sfx\earthquake4",3.1622777,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE4";
  titles[] = {};
 };
 class Worship
 {
  sound[] = {"\a3\Sounds_F\ambient\worship",3.1622777,1.0};
  name = "$STR_A3_SOUNDS_WORSHIP";
  titles[] = {};
 };
};
*/
/*class CfgMusic
{
 class RadioAmbient1
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio1",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient2
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio2",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient3
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio3",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient4
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio4",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient5
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio5",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient6
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio6",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient7
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio7",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient8
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio8",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient9
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio9",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient10
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio10",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient11
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio11",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient12
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio12",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient13
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio13",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient14
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio14",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient15
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio15",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient16
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio16",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient17
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio17",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient18
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio18",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient19
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio19",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient20
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio20",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient21
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio21",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient22
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio22",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient23
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio23",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient24
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio24",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient25
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio25",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient26
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio26",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient27
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio27",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient28
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio28",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient29
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio29",1.0,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient30
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio30",1.0,1};
  titles[] = {};
  scope = 1;
 };
};
*/
/*class CfgSFX
{
 access = 1;
 seagull[] = {"A3\sounds_f\dummysound",-20,1,100,1,0.2,1,5};
 class Preview
 {
  effect[] = {"A3\Sounds_f\sfx\volume_preview\sfx.wss",1.0,1};
  speech[] = {"A3\sounds_f\sfx\volume_preview\radio.wss",1.0,1};
  music[] = {"A3\sounds_f\sfx\volume_preview\music.wss",1.0,1};
 };
 class Church
 {
  largeBell[] = {"A3\Sounds_F\ambient\objects\bell_big",0.8912509,1,250};
  smallBell[] = {"A3\Sounds_F\ambient\objects\bell_small",0.8912509,1,250};
 };
 class DestrHouse
 {
  sounds[] = {"DestrHouse1","DestrHouse2","DestrHouse3"};
  DestrHouse1[] = {"A3\Sounds_F\sfx\special_sfx\house_destroy_1",0.8912509,1,500,0.33,0,2,5};
  DestrHouse2[] = {"A3\Sounds_F\sfx\special_sfx\house_destroy_2",0.8912509,1,500,0.33,0,2,5};
  DestrHouse3[] = {"A3\Sounds_F\sfx\special_sfx\house_destroy_3",0.8912509,1,500,0.34,0,2,5};
  empty[] = {"",0.8912509,1,500,1,0,2,5};
 };
 class DestrHousePart
 {
  sounds[] = {"DestrHousePart1"};
  DestrHousePart1[] = {"A3\Sounds_F\sfx\special_sfx\house_destroy_3",0.31622776,1,500,1,0,2,5};
  empty[] = {"",0,0,0,0,1,5,20};
 };
 class Fire
 {
  name = "$STR_A3_CfgSounds_Fire0";
  sound0[] = {"A3\Sounds_F\sfx\fire1_loop",1.0,1.0,50,1,0,0,0};
  sounds[] = {"sound0"};
  titles[] = {};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class Fire_camp
 {
  sound0[] = {"A3\Sounds_F\sfx\fire2_loop",1.0,1.0,40,1,0,0,0};
  sounds[] = {"sound0"};
  titles[] = {};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class Fire_camp_small
 {
  sound0[] = {"A3\Sounds_F\sfx\fire3_loop",1.0,1.0,30,1,0,0,0};
  sounds[] = {"sound0"};
  titles[] = {};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class CA_Expl1
 {
  sounds[] = {"sound1"};
  sound1[] = {"A3\sounds_f\dummysound",10.0,1,700,0.5,0,2,5};
  empty[] = {"",0,0,0,0,1,5,20};
 };
 class SmokeWreck1
 {
  sounds[] = {"Smoke01"};
  name = "$STR_A3_CfgSFX_SmokeWreck10";
  Smoke01[] = {"A3\Sounds_F\sfx\special_sfx\small_fire_smoke_wreck_Heli_Attack_01_1",0.1,1,60,1,0,0,0};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class SparklesWreck1
 {
  sounds[] = {"Sparkles01"};
  name = "$STR_A3_CfgSFX_SparklesWreck10";
  Sparkles01[] = {"A3\Sounds_F\sfx\special_sfx\sparkles_wreck_1",0.17782794,1,60,1,5,5,5};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class SparklesWreck2
 {
  sounds[] = {"Sparkles02"};
  name = "$STR_A3_CfgSFX_SparklesWreck20";
  Sparkles02[] = {"A3\Sounds_F\sfx\special_sfx\sparkles_wreck_2",0.17782794,1,60,1,5,5,5};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class StreamSfx
 {
  sounds[] = {"Stream01"};
  Stream01[] = {"A3\sounds_f\dummysound",0.31622776,1,60,1,1,1,1};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class AlarmSfx
 {
  sounds[] = {"Alarm"};
  name = "$STR_DN_ALARM";
  Alarm[] = {"A3\Sounds_F\sfx\alarm",1.0,1,400,1,0.0,0.0,0.0};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class AirAlarmSfx
 {
  sounds[] = {"Alarm"};
  Alarm[] = {"A3\Sounds_F\sfx\alarm",1.0,1,400,1,0.0,0.0,0.0};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class BattlefieldExplosions
 {
  empty[] = {"",0,0,0,0,0,0,0};
  name = "$STR_A3_CfgSounds_BattlefieldExplosions0";
  sound0[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions1",1.0,1.0,5000,1,0,5,10};
  sound1[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions2",1.0,1.0,5000,1,0,5,10};
  sound2[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions3",1.0,1.0,5000,1,0,5,10};
  sound3[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions4",1.0,1.0,5000,1,0,5,10};
  sound4[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions5",1.0,1.0,5000,1,0,5,10};
  sounds[] = {"sound0","sound1","sound2","sound3","sound4"};
 };
 class BattlefieldFirefight: BattlefieldExplosions
 {
  empty[] = {"",0,0,0,0,0,0,0};
  name = "$STR_A3_CfgSounds_BattlefieldFirefight0";
  sound0[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight1",1.0,1.0,5000,1,0,5,10};
  sound1[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight2",1.0,1.0,5000,1,0,5,10};
  sound2[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight3",1.0,1.0,5000,1,0,5,10};
  sound3[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight4",1.0,1.0,5000,1,0,5,10};
  random[] = {"sound0","sound1","sound2","sound3"};
 };
 class BattlefieldHeli: BattlefieldExplosions
 {
  name = "$STR_A3_CfgSounds_BattlefieldHeli0";
  sound0[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli1",0.31622776,1.0,1000,0.2,10,25,30};
  sound1[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli2",0.31622776,1.0,1000,0.2,10,25,30};
  sound2[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli3",0.31622776,1.0,1000,0.2,10,25,30};
  random[] = {"sound0","sound1","sound2"};
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight1",0.31622776,1.0};
 };
 class BattlefieldJet: BattlefieldExplosions
 {
  name = "$STR_A3_CfgSounds_BattlefieldJet0";
  sound0[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet1",0.31622776,1.0,1000,0.2,10,25,30};
  sound1[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet2",0.31622776,1.0,1000,0.2,10,25,30};
  sound2[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet3",0.31622776,1.0,1000,0.2,10,25,30};
  random[] = {"sound0","sound1","sound2"};
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet1",0.31622776,1.0};
 };
};
*/
class CfgEnvSounds
{
 class Default
 {
  name = "$STR_CFG_ENVSOUNDS_DEFAULT";
  sound[] = {"$DEFAULT$",0,1};
  soundNight[] = {"$DEFAULT$",0,1};
 };
 class Rain
 {
  name = "$STR_DN_RAIN";
  sound[] = {"A3\sounds_f\ambient\rain\rain_new_1",0.35481337,1,200};
  soundNight[] = {"A3\sounds_f\ambient\rain\rain_new_2",0.31622776,1,200};
 };
 class Sea
 {
  name = "$STR_DN_SEA";
  sound[] = {"A3\sounds_f\ambient\waves\sea-1-sand-beach-stereo",0.12589253,1,200};
  soundNight[] = {"A3\sounds_f\ambient\waves\sea-1-sand-beach-stereo",0.1,1,200};
  volume = "sea*(1-coast)";
 };
 class Coast
 {
  name = "$STR_A3_CfgEnvSounds_Coast0";
  sound[] = {"A3\sounds_f\ambient\waves\beach_sand_small_waves1",0.12589253,1,200};
  soundNight[] = {"A3\sounds_f\ambient\waves\beach_sand_small_waves1",0.07943282,1,200};
  volume = "coast";
 };
 class WindSlow
 {
  name = "$STR_A3_CfgEnvSounds_WindSlow0";
  sound[] = {"A3\sounds_f\ambient\winds\wind-synth-slow",0.028183825,1};
  volume = "((windy factor[0,0.25])*(windy factor[0.5, 0.25]))-(night*0.25)";
 };
 class WindMedium
 {
  name = "$STR_A3_CfgEnvSounds_WindMedium0";
  sound[] = {"A3\sounds_f\ambient\winds\wind-synth-middle",0.035481334,1};
  volume = "((windy factor[0.33,0.5])*(windy factor[0.8, 0.5]))-(night*0.25)";
 };
 class WindFast
 {
  name = "$STR_A3_CfgEnvSounds_WindFast0";
  sound[] = {"A3\sounds_f\ambient\winds\wind-synth-fast",0.044668358,1};
  volume = "(windy factor[0.66,1])-(night*0.25)";
 };
 class Forest
 {
  name = "$STR_A3_CfgEnvSounds_Forest0";
  sound[] = {"A3\sounds_f\ambient\basics\day_insects_winds5",0.025118863,1};//-32
  volume = "forest*trees*(1-night)";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",0.1,12,100,0.1,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",0.1,12,100,0.1,10,35,60};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",0.1,12,100,0.1,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",0.1,12,100,0.1,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_5",0.056234132,1,100,0.12,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_9",0.056234132,1,80,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\fly_3",0.031622775,1,20,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",0.056234132,1,40,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",0.056234132,1,50,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 class ForestNight
 {
  name = "$STR_A3_CfgEnvSounds_ForestNight0";
  sound[] = {"A3\sounds_f\ambient\basics\night_insects_birds_winds4",0.015848929,1};//-36
  volume = "forest*trees*night";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",0.1,1,100,0.12,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",0.1,1,100,0.12,10,35,60};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",0.1,1,100,0.12,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",0.1,1,100,0.12,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_night_6",0.056234132,1,100,0.12,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_night_2",0.031622775,1,70,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\fly_3",0.056234132,1,10,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",0.056234132,1,40,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",0.056234132,1,30,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 class Houses
 {
  name = "$STR_A3_CfgEnvSounds_Houses0";
  sound[] = {"A3\sounds_f\ambient\basics\day_insects_winds4",0.022387212,1};//-33
  volume = "(houses-0.75)*4";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",0.1,1,100,0.12,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",0.1,1,100,0.12,10,35,60};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",0.1,1,100,0.12,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",0.1,1,100,0.12,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_7",0.056234132,1,100,0.12,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_8",0.031622775,1,100,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\fly_4",0.056234132,1,15,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",0.056234132,1,20,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",0.056234132,1,25,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 class HousesNight
 {
  name = "$STR_A3_CfgEnvSounds_HousesNight0";
  sound[] = {"A3\sounds_f\ambient\basics\night_insects_birds_nowinds2",0.019952621,1};//-34
  volume = "(houses-0.75)*4*night";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",0.1,1,100,0.12,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",0.1,1,100,0.12,10,35,60};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",0.1,1,100,0.12,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",0.1,1,100,0.12,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_night_2",0.056234132,1,80,0.12,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_night_5",0.031622775,1,80,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\insect_2",0.056234132,1,15,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",0.056234132,1,15,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",0.056234132,1,30,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 class Meadows
 {
  name = "$STR_A3_CfgEnvSounds_Meadows0";
  sound[] = {"A3\sounds_f\ambient\basics\day_insects_winds5",0.022387212,1};//-33
  volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",0.063095726,1,70,0.12,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",0.063095726,1,100,0.12,15,25,30};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",0.063095726,1,100,0.12,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",0.063095726,1,100,0.12,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_7",0.056234132,1,70,0.12,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_8",0.031622775,1,70,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\fly_4",0.056234132,1,20,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",0.056234132,1,20,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",0.056234132,1,20,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 class MeadowsNight
 {
  name = "$STR_A3_CfgEnvSounds_MeadowsNight0";
  sound[] = {"A3\sounds_f\ambient\basics\night_insects_birds_winds1",0.015848929,1};//-36
  volume = "(1-forest)*(1-houses)*night*(1-sea)";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",0.1,1,100,0.12,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",0.1,1,100,0.12,10,35,60};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",0.1,1,100,0.12,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",0.1,1,100,0.12,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_night_2",0.056234132,12,100,0.1,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_night_5",0.031622775,1,60,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\insect_2",0.056234132,1,20,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",0.056234132,1,20,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",0.056234132,1,20,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 /*
 class BattlefieldExplosions
 {
  sound0[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions1",0.31622776,1.0,1000,0.2,5,10,15};
  sound1[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions2",0.31622776,1.0,1000,0.2,5,10,15};
  sound2[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions3",0.31622776,1.0,1000,0.2,5,10,15};
  sound3[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions4",0.31622776,1.0,1000,0.2,5,10,15};
  sound4[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions5",0.31622776,1.0,1000,0.2,5,10,15};
  random[] = {"sound0","sound1","sound2","sound3","sound4"};
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions5",0.31622776,1.0};
 };
 class BattlefieldExplosions1
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions1",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions2
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions2",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions3
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions3",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions4
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions4",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions5
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions5",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight1
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight1",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight2
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight2",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight3
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight3",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight4
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight4",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldHeli1
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli1",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldHeli2
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli2",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldHeli3
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli3",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldJet1
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet1",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldJet2
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet2",0.31622776,1.0};
  titles[] = {};
 };
 class BattlefieldJet3
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet3",0.31622776,1.0};
  titles[] = {};
 };
 class Earthquake_01
 {
  sound[] = {"\a3\Sounds_F\ambient\quakes\earthquake1",3.1622777,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE1";
  titles[] = {};
 };
 class Earthquake_02
 {
  sound[] = {"\a3\Sounds_F\ambient\quakes\earthquake2",3.1622777,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE2";
  titles[] = {};
 };
 class Earthquake_03
 {
  sound[] = {"\a3\Sounds_F\ambient\quakes\earthquake3",3.1622777,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE3";
  titles[] = {};
 };
 class Earthquake_04
 {
  sound[] = {"\a3\Sounds_F\ambient\quakes\earthquake4",3.1622777,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE4";
  titles[] = {};
 };
*/
 };
 
class cfgVehicles
{
	class SoundEnvironExt
	{
		generic[] = 
		{
			{ "healself",{ "\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWrflDnon_medic",0.8912509,1,20 } },
			{ "healselfprone",{ "\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWrflDnon_medic",0.8912509,1,20 } },
			{ "healselfpistolkneelin",{ "\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicIn",0.8912509,1,20 } },
			{ "healselfpistolkneel",{ "\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medic",0.8912509,1,20 } },
			{ "healselfpistolkneelout",{ "\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicOut",0.8912509,1,20 } },
			{ "healselfpistolpromein",{ "\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicin",0.8912509,1,20 } },
			{ "healselfpistolprone",{ "\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medic",0.8912509,1,20 } },
			{ "healselfpistolpromeout",{ "\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicOut",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "adjust_short",{ "\A3\sounds_f\characters\stances\adjust_short1",0.15848932,1,20 } },
			{ "adjust_short",{ "\A3\sounds_f\characters\stances\adjust_short2",0.15848932,1,20 } },
			{ "adjust_short",{ "\A3\sounds_f\characters\stances\adjust_short3",0.15848932,1,20 } },
			{ "adjust_short",{ "\A3\sounds_f\characters\stances\adjust_short4",0.15848932,1,20 } },
			{ "adjust_short",{ "\A3\sounds_f\characters\stances\adjust_short5",0.15848932,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\adjust_short1",0.15848932,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\adjust_short1",0.15848932,1,20 } },
			{ "adjust_kneelhigh_to_standlow",{ "\A3\sounds_f\characters\stances\adjust_short3",0.15848932,1,20 } },
			{ "adjust_standlow_to_kneelhigh",{ "\A3\sounds_f\characters\stances\adjust_short1",0.15848932,1,20 } },
			{ "over_the_obstacle_slow",{ "\A3\sounds_f\characters\movements\over_the_obstacle_slow",0.31622776,1,20 } },
			{ "over_the_obstacle_fast",{ "\A3\sounds_f\characters\movements\over_the_obstacle_fast",0.31622776,1,20 } },
			{ "grenade_throw",{ "\A3\sounds_f\characters\stances\adjust_short1",0.35481337,1,20 } },
			{ "grenade_throw",{ "\A3\sounds_f\characters\stances\adjust_short2",0.35481337,1,20 } },
			{ "grenade_throw",{ "\A3\sounds_f\characters\stances\adjust_short3",0.35481337,1,20 } },
			{ "grenade_throw",{ "\A3\sounds_f\characters\stances\adjust_short4",0.35481337,1,20 } },
			{ "grenade_throw",{ "\A3\sounds_f\characters\stances\adjust_short5",0.35481337,1,20 } },
			{ "inventory_in",{ "\A3\sounds_f\characters\stances\adjust_short1",0.25118864,1,20 } },
			{ "inventory_out",{ "\A3\sounds_f\characters\stances\adjust_short2",0.25118864,1,20 } },
			{ "handgun_to_rifle",{ "\A3\Sounds_F\characters\stances\handgun_to_rifle",0.5011872,1,20 } },
			{ "handgun_to_launcher",{ "\A3\sounds_f\characters\stances\handgun_to_launcher",0.5011872,1,20 } },
			{ "launcher_to_rifle",{ "\A3\sounds_f\characters\stances\launcher_to_rifle",0.5011872,1,20 } },
			{ "launcher_to_handgun",{ "\A3\sounds_f\characters\stances\launcher_to_handgun",0.5011872,1,20 } },
			{ "rifle_to_handgun",{ "\A3\Sounds_F\characters\stances\rifle_to_handgun",0.5011872,1,20 } },
			{ "rifle_to_handgun_prn",{ "\A3\Sounds_F\characters\stances\rifle_to_handgun_prn",0.5011872,1,20 } },
			{ "rifle_to_launcher",{ "\A3\sounds_f\characters\stances\rifle_to_launcher",0.5011872,1,20 } },
			{ "rifle_to_binoc",{ "\A3\sounds_f\characters\stances\rifle_to_binoculars",0.5011872,1,20 } },
			{ "handgun_to_binoc",{ "\A3\sounds_f\characters\stances\handgun_to_binoculars",0.5011872,1,20 } },
			{ "launcher_to_binoc",{ "\A3\sounds_f\characters\stances\launcher_to_binoculars",0.5011872,1,20 } },
			{ "launcher_to_binoc_knl",{ "\A3\sounds_f\characters\stances\launcher_to_binoculars_knl",0.5011872,1,20 } },
			{ "unarmed_to_binoc",{ "\A3\sounds_f\characters\stances\unarmed_to_binoculars",0.5011872,1,20 } },
			{ "binoc_to_rifle",{ "\A3\sounds_f\characters\stances\binoculars_to_rifle",0.5011872,1,20 } },
			{ "binoc_to_rifle_2",{ "\A3\sounds_f\characters\stances\binoculars_to_rifle_2",0.5011872,1,20 } },
			{ "binoc_to_handgun",{ "\A3\sounds_f\characters\stances\binoculars_to_handgun",0.5011872,1,20 } },
			{ "binoc_to_launcher",{ "\A3\sounds_f\characters\stances\binoculars_to_launcher",0.5011872,1,20 } },
			{ "binoc_to_unarmed",{ "\A3\sounds_f\characters\stances\binoculars_to_unarmed",0.5011872,1,20 } },
			{ "low_rifle",{ "A3\sounds_f\characters\stances\low_rifle",0.5011872,1,20 } },
			{ "lift_rifle",{ "A3\sounds_f\characters\stances\lift_rifle",0.5011872,1,20 } },
			{ "low_handgun",{ "A3\sounds_f\characters\stances\low_handgun",0.5011872,1,20 } },
			{ "lift_handgun",{ "A3\sounds_f\characters\stances\lift_handgun",0.5011872,1,20 } },
			{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_01",0.5011872,1,20 } },
			{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_02",0.5011872,1,20 } },
			{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_03",0.5011872,1,20 } },
			{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_04",0.5011872,1,20 } },
			{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_05",0.5011872,1,20 } },
			{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_06",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\swim\swim_default1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\swim\swim_default2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\swim\swim_default3",0.5011872,1,20 } },
			{ "Acts_CrouchGetLowGesture",{ "\A3\Sounds_F\characters\cutscenes\Acts_CrouchGetLowGesture",0.8912509,1,20 } },
			{ "Acts_listeningToRadio_in",{ "A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_in",0.8912509,1,20 } },
			{ "Acts_listeningToRadio_Loop",{ "\A3\Sounds_F\dummysound",0.8912509,1,20 } },
			{ "Acts_listeningToRadio_Out",{ "\A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_Out",0.8912509,1,20 } },
			{ "Acts_LyingWounded_loop1",{ "\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop1",0.8912509,1,20 } },
			{ "Acts_LyingWounded_loop2",{ "\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop2",0.8912509,1,20 } },
			{ "Acts_LyingWounded_loop3",{ "\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop3",0.8912509,1,20 } },
			{ "Acts_NavigatingChopper_In",{ "\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_In",0.56234133,1,20 } },
			{ "Acts_NavigatingChopper_Loop",{ "\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Loop",0.56234133,1,20 } },
			{ "Acts_NavigatingChopper_Out",{ "\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Out",0.56234133,1,20 } },
			{ "Acts_PercMstpSlowWrflDnon_handup1",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1",0.56234133,1,20 } },
			{ "Acts_PercMstpSlowWrflDnon_handup1b",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1b",0.56234133,1,20 } },
			{ "Acts_PercMstpSlowWrflDnon_handup1c",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1c",0.56234133,1,20 } },
			{ "Acts_PercMstpSlowWrflDnon_handup2",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2",0.56234133,1,20 } },
			{ "Acts_PercMstpSlowWrflDnon_handup2b",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2b",0.8912509,1,20 } },
			{ "Acts_PercMstpSlowWrflDnon_handup2c",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2c",0.56234133,1,20 } },
			{ "Acts_SignalToCheck",{ "\A3\Sounds_F\characters\cutscenes\Acts_SignalToCheck",0.56234133,1,20 } },
			{ "Acts_ShowingTheRightWay_in",{ "\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_in",0.56234133,1,20 } },
			{ "Acts_ShowingTheRightWay_loop",{ "\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Loop",0.56234133,1,20 } },
			{ "Acts_ShowingTheRightWay_out",{ "\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Out",0.56234133,1,20 } },
			{ "Acts_ShieldFromSun_loop",{ "\A3\Sounds_F\dummysound",0.56234133,1,20 } },
			{ "Acts_ShieldFromSun_out",{ "\A3\Sounds_F\characters\cutscenes\Acts_ShieldFromSun_Out",0.56234133,1,20 } },
			{ "Acts_TreatingWounded01",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded01",0.56234133,1,20 } },
			{ "Acts_TreatingWounded02",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded02",0.56234133,1,20 } },
			{ "Acts_TreatingWounded03",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded03",0.56234133,1,20 } },
			{ "Acts_TreatingWounded04",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded04",0.56234133,1,20 } },
			{ "Acts_TreatingWounded05",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded05",0.56234133,1,20 } },
			{ "Acts_TreatingWounded06",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded06",0.56234133,1,20 } },
			{ "Acts_AidlPercMstpSlowWrflDnon_pissing",{ "\A3\Sounds_F\characters\cutscenes\Acts_AidlPercMstpSlowWrflDnon_pissing",0.8912509,1,20 } },
			{ "Acts_BoatAttacked01",{ "\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked01",0.8912509,1,20 } },
			{ "Acts_BoatAttacked02",{ "\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked02",0.8912509,1,20 } },
			{ "Acts_BoatAttacked03",{ "\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked03",0.8912509,1,20 } },
			{ "Acts_BoatAttacked04",{ "\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked04",0.8912509,1,20 } },
			{ "Acts_BoatAttacked05",{ "\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked05",0.8912509,1,20 } },
			{ "acts_CrouchingCoveringRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_CrouchingCoveringRifle01",0.56234133,1,20 } },
			{ "acts_CrouchingIdleRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_CrouchingIdleRifle01",0.56234133,1,20 } },
			{ "acts_CrouchingReloadingRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_CrouchingReloadingRifle01",0.56234133,1,20 } },
			{ "acts_CrouchingWatchingRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_CrouchingWatchingRifle01",0.56234133,1,20 } },
			{ "acts_InjuredAngryRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredAngryRifle01",0.56234133,1,20 } },
			{ "acts_InjuredCoughRifle02",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredCoughRifle02",0.56234133,1,20 } },
			{ "acts_InjuredLookingRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle01",0.56234133,1,20 } },
			{ "acts_InjuredLookingRifle02",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle02",0.56234133,1,20 } },
			{ "acts_InjuredLookingRifle03",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle03",0.56234133,1,20 } },
			{ "acts_InjuredLookingRifle04",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle04",0.56234133,1,20 } },
			{ "acts_InjuredLookingRifle05",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle05",0.56234133,1,20 } },
			{ "acts_InjuredLyingRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLyingRifle01",0.56234133,1,20 } },
			{ "acts_InjuredSpeakingRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredSpeakingRIfle01",0.56234133,1,20 } },
			{ "Acts_PknlMstpSlowWrflDnon",{ "\A3\Sounds_F\characters\cutscenes\Acts_PknlMstpSlowWrflDnon",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_loop1",{ "\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop1",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_loop2",{ "\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_loop3",{ "\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisekneeBendA",{ "\A3\Sounds_F\characters\cutscenes\AmovPercMstpSnonWnonDnon_exercisekneeBendA",0.56234133,1,20 } }
		};
		
		normal[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		rock[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\rock_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\rock_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\rock_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\rock_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\rock_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\rock_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\rock_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\rock_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		stony[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\stony_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\stony_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\stony_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\stony_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\stony_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\stony_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\stony_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\stony_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		gravel[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\gravel_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\gravel_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\gravel_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\gravel_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\gravel_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\gravel_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\gravel_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\gravel_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\gravel_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\gravel_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\gravel_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\gravel_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\gravel_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\gravel_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\gravel_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		tiling[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		sand[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\sand_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\sand_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\sand_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\sand_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\sand_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\sand_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\sand_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\sand_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\sand_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\sand_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\sand_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\sand_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\sand_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\sand_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\sand_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\sand_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\sand_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\sand_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		drygrass[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\grass_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\grass_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		grass[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\new_grass_walk_1",0.15848932,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_grass_walk_2",0.15848932,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_grass_walk_3",0.15848932,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_grass_walk_4",0.15848932,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_grass_walk_5",0.15848932,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_grass_walk_6",0.15848932,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_grass_walk_7",0.15848932,1,20 },
			{ "\A3\sounds_f\characters\footsteps\new_grass_walk_8",0.15848932,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_1",0.25118864,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_2",0.25118864,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_3",0.25118864,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_4",0.25118864,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_5",0.25118864,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_6",0.25118864,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_7",0.25118864,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_8",0.25118864,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_1",0.15848932,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_2",0.15848932,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_3",0.15848932,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_4",0.15848932,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_5",0.15848932,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_6",0.15848932,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_7",0.15848932,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_8",0.15848932,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_1",0.31622776,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_2",0.31622776,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_3",0.31622776,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_4",0.31622776,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_5",0.31622776,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_6",0.31622776,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_7",0.31622776,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_8",0.31622776,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\grass_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\grass_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		debris[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\debris_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\debris_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\debris_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\debris_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\debris_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\debris_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\debris_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\debris_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_1",0.2238721,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_2",0.2238721,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_3",0.2238721,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_4",0.2238721,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_5",0.2238721,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\gravel_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\gravel_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		wood[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_1",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_2",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_3",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_4",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_5",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_6",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_7",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_8",0.5011872,0.7,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_1",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_2",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_3",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_4",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_5",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_6",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_7",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_8",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_1",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_2",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_3",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_4",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_5",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_6",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_7",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_8",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_1",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_2",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_3",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_4",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_5",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_6",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_7",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_8",0.5011872,0.7,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		concrete[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		metal[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\metal_walk_1",0.5011872,1,120 },
			{ "\A3\sounds_f\characters\footsteps\metal_walk_2",0.5011872,1,120 },
			{ "\A3\sounds_f\characters\footsteps\metal_walk_3",0.5011872,1,120 },
			{ "\A3\sounds_f\characters\footsteps\metal_walk_4",0.5011872,1,120 },
			{ "\A3\sounds_f\characters\footsteps\metal_walk_5",0.5011872,1,120 },
			{ "\A3\sounds_f\characters\footsteps\metal_walk_6",0.5011872,1,120 },
			{ "\A3\sounds_f\characters\footsteps\metal_walk_7",0.5011872,1,120 },
			{ "\A3\sounds_f\characters\footsteps\metal_walk_8",0.5011872,1,120 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		dirt[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\dirt_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\dirt_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\dirt_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_1",0.2238721,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_2",0.2238721,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_3",0.2238721,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_4",0.2238721,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_5",0.2238721,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\dirt_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\dirt_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_dirt_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_dirt_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_dirt_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		wavymetal[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_1",0.0056234132,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_2",0.0056234132,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_3",0.0056234132,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_4",0.0056234132,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_5",0.0056234132,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_6",0.0056234132,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_7",0.0056234132,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_8",0.0056234132,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		water[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\crawl\crawl_water_7",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\crawl\crawl_water_7",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\water_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\water_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\water_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\water_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\water_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\water_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\water_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\water_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_1",0.56234133,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_2",0.56234133,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_3",0.56234133,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_4",0.56234133,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_5",0.56234133,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_6",0.56234133,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_7",0.56234133,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_8",0.56234133,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\water_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\water_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani4",0.5011872,1,20 } },
			{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-1",0.5011872,1.0,20 } },
			{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-2",0.5011872,1.0,20 } },
			{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-3",0.5011872,1.0,20 } },
			{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-4",0.5011872,1.0,20 } },
			{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-5",0.5011872,1.0,20 } },
			{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-6",0.5011872,1.0,20 } },
			{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-1",0.5011872,1.0,20 } },
			{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-2",0.5011872,1.0,20 } },
			{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-3",0.5011872,1.0,20 } },
			{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-4",0.5011872,1.0,20 } },
			{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-5",0.5011872,1.0,20 } },
			{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-6",0.5011872,1.0,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		virtual[] = 
		{
			{ "adjust_short",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",1.0,1,20 } },
			{ "adjust_short",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",1.0,1,20 } },
			{ "adjust_short",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",1.0,1,20 } },
			{ "adjust_short",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",1.0,1,20 } },
			{ "adjust_short",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",1.0,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",1.0,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",1.0,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",1.0,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",1.0,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",1.0,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_kneel_to_stand1",1.0,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_kneel_to_stand2",1.0,1,20 } },
			{ "adjust_kneelhigh_to_standlow",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",1.0,1,20 } },
			{ "adjust_standlow_to_kneelhigh",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",1.0,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_prone",1.0,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_to_stand",1.0,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_up",1.0,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_up_back",1.0,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",1.0,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",1.0,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",1.0,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_left",1.0,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_right",1.0,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\Sounds_F_Bootcamp\Characters\Stances\virtual_adjust_kneel_to_prone",1.0,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_to_kneel",1.0,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_left_prone",1.0,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_right_prone",1.0,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_left_prone_to_stand",1.0,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_right_prone_to_stand",1.0,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_short1",1.0,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_short2",1.0,1,20 } },
			{ "adjust_kneelhigh_to_standlow",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_short3",1.0,1,20 } },
			{ "adjust_standlow_to_kneelhigh",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_short4",1.0,1,20 } },
			{ "over_the_obstacle_fast",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_over_the_obstacle_fast",1.0,1,20 } },
			{ "over_the_obstacle_slow",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_over_the_obstacle_slow",1.0,1,20 } },
			{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_1",0.70794576,1,20 },
			{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_2",0.70794576,1,20 },
			{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_3",0.70794576,1,20 },
			{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_4",0.70794576,1,20 },
			{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_5",0.70794576,1,20 },
			{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_6",0.70794576,1,20 },
			{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_7",0.70794576,1,20 },
			{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_8",0.70794576,1,20 },
			{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_1",0.70794576,1,20 } },
			{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_2",0.70794576,1,20 } },
			{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_3",0.70794576,1,20 } },
			{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_4",0.70794576,1,20 } },
			{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_5",0.70794576,1,20 } },
			{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_6",0.70794576,1,20 } },
			{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_7",0.70794576,1,20 } },
			{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_8",0.70794576,1,20 } },
			{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_1",0.35481337,1,20 } },
			{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_2",0.35481337,1,20 } },
			{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_3",0.35481337,1,20 } },
			{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_4",0.35481337,1,20 } },
			{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_5",0.35481337,1,20 } },
			{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_6",0.35481337,1,20 } },
			{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_7",0.35481337,1,20 } },
			{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_8",0.35481337,1,20 } },
			{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_1",0.56234133,1,20 } },
			{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_2",0.56234133,1,20 } },
			{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_3",0.56234133,1,20 } },
			{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_4",0.56234133,1,20 } },
			{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_5",0.56234133,1,20 } },
			{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_6",0.56234133,1,20 } },
			{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_7",0.56234133,1,20 } },
			{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_8",0.56234133,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_3",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F_Bootcamp\Characters\laydown\virtual_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F_Bootcamp\Characters\laydown\virtual_laydown_2",0.5011872,1,20 } },
			{ "swim",{ "A3\sounds_f_bootcamp\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\sounds_f_bootcamp\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\sounds_f_bootcamp\characters\movements\plavani3",0.5011872,1,20 } },
			{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_1",0.56234133,1,20 } },
			{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_2",0.56234133,1,20 } },
			{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_3",0.56234133,1,20 } },
			{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_4",0.56234133,1,20 } },
			{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_5",0.56234133,1,20 } },
			{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_6",0.56234133,1,20 } },
			{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_7",0.56234133,1,20 } },
			{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_8",0.56234133,1,20 } },
			{ "roll",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_1",0.39810717,1,20 } },
			{ "roll",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_2",0.39810717,1,20 } },
			{ "roll",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_3",0.39810717,1,20 } },
			{ "roll",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_4",0.39810717,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_1",0.39810717,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_2",0.39810717,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_3",0.39810717,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_4",0.39810717,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		int_concrete[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		int_wood[] = 
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_int_1",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_int_2",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_int_3",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_int_4",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_int_5",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_int_6",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_int_7",0.5011872,0.7,20 },
			{ "\A3\sounds_f\characters\footsteps\wood_walk_int_8",0.5011872,0.7,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_1",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_2",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_3",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_4",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_5",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_6",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_7",0.5011872,0.7,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_8",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_1",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_2",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_3",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_4",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_5",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_6",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_7",0.5011872,0.7,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_8",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_1",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_2",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_3",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_4",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_5",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_6",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_7",0.5011872,0.7,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_8",0.5011872,0.7,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		int_metal[] =
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\metal_int_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\metal_int_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\metal_int_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\metal_int_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\metal_int_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\metal_int_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\metal_int_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\metal_int_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		int_tiles[] =
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",0.5011872,1,20 } },
			{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.56234133,1,20 } }
		};
		
		tarmac[] =
		{
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.25118864,1,20 } },
			{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.25118864,1,20 } },
			{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.25118864,1,20 } },
			{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.25118864,1,20 } },
			{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.25118864,1,20 } },
			{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.25118864,1,20 } },
			{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.25118864,1,20 } },
			{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.25118864,1,20 } },
			{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.25118864,1,20 } },
			{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.25118864,1,20 } },
			{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.25118864,1,20 } },
			{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.25118864,1,20 } },
			{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.25118864,1,20 } },
			{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.25118864,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.8912509,1,20 } },
			{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.8912509,1,20 } },
			{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.8912509,1,20 } },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",0.5011872,1,20 },
			{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",0.5011872,1,20 },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_1",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_2",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_3",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_4",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_5",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_6",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_7",0.5011872,1,20 } },
			{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_8",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",0.5011872,1,20 } },
			{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_1",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_2",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_3",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_4",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_5",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_6",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_7",0.5011872,1,20 } },
			{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_8",0.5011872,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",0.39810717,1,20 } },
			{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",0.39810717,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.5011872,1,20 } },
			{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.5011872,1,20 } },
			{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.5011872,1,20 } },
			{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.56234133,1,20 } },
			{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.56234133,1,20 } },
			{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.56234133,1,20 } },
			{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.56234133,1,20 } },
			{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.56234133,1,20 } },
			{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.56234133,1,20 } },
			{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.56234133,1,20 } },
			{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.56234133,1,20 } },
			{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.56234133,1,20 } },
			{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.56234133,1,20 } },
			{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.56234133,1,20 } },
			{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",1.0,1,20 } }
		};
	};
	class SoundGear
	{
		primary[] = 
		{
			{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_01",0.07943282,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_02",0.07943282,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_03",0.07943282,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_04",0.07943282,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_05",0.07943282,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_06",0.07943282,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_07",0.07943282,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_08",0.07943282,1,30 } },
			{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_01",0.11220185,1,35 } },
			{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_02",0.11220185,1,35 } },
			{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_03",0.11220185,1,35 } },
			{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_04",0.11220185,1,35 } },
			{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_05",0.11220185,1,35 } },
			{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_06",0.11220185,1,35 } },
			{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_07",0.11220185,1,35 } },
			{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_08",0.11220185,1,35 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_01",0.14125374,1,45 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_02",0.14125374,1,45 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_03",0.14125374,1,45 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_04",0.14125374,1,45 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_05",0.14125374,1,45 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_06",0.14125374,1,45 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_07",0.14125374,1,45 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_08",0.14125374,1,45 } }
		};
		secondary[] = 
		{
			{ "walk",{ "",1.0,1,10 } },
			{ "run",{ "",1.0,1,10 } },
			{ "sprint",{ "",1.0,1,10 } }
		};
	};
	class SoundEquipment
	{
		soldier[] = 
		{
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_01",0.056234132,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_02",0.056234132,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_03",0.056234132,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_04",0.056234132,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_05",0.056234132,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_06",0.056234132,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_07",0.056234132,1,30 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_08",0.056234132,1,30 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_01",0.063095726,1,32 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_02",0.063095726,1,32 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_03",0.063095726,1,32 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_04",0.063095726,1,32 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_05",0.063095726,1,32 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_06",0.063095726,1,32 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_07",0.063095726,1,32 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_08",0.063095726,1,32 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_01",0.1,1,35 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_02",0.1,1,35 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_03",0.1,1,35 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_04",0.1,1,35 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_05",0.1,1,35 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_06",0.1,1,35 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_07",0.1,1,35 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_08",0.1,1,35 } }
		};
		civilian[] = 
		{
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_01",0.056234132,1,20 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_02",0.056234132,1,20 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_03",0.056234132,1,20 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_04",0.056234132,1,20 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_05",0.056234132,1,20 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_06",0.056234132,1,20 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_07",0.056234132,1,20 } },
			{ "walk",{ "A3\sounds_f\characters\movements\suit_run_08",0.056234132,1,20 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_01",0.07943282,1,30 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_02",0.07943282,1,30 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_03",0.07943282,1,30 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_04",0.07943282,1,30 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_05",0.07943282,1,30 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_06",0.07943282,1,30 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_07",0.07943282,1,30 } },
			{ "run",{ "A3\sounds_f\characters\movements\suit_run_08",0.07943282,1,30 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_01",0.1,1,40 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_02",0.1,1,40 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_03",0.1,1,40 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_04",0.1,1,40 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_05",0.1,1,40 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_06",0.1,1,40 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_07",0.1,1,40 } },
			{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_08",0.1,1,40 } }
		};
	};	 
};

/*class CfgSoundEffects
{
 class AttenuationsEffects
 {
  class CarAttenuation
  {
   class Equalizer0
   {
    center[] = {100,250,1000,5000};
    bandwidth[] = {2,2,2,2};
    gain[] = {0.63095737,0.56234133,0.39810717,0.31622776};
   };
   class Equalizer1
   {
    center[] = {60,500,3000,8000};
    bandwidth[] = {2,2,2,2};
    gain[] = {0.70794576,0.5011872,0.35481337,0.17782794};
   };
   class Echo
   {
    WetDryMix = 0.1;
    Feedback = 0.1;
    Delay = 50;
   };
  };
  class OpenCarAttenuation
  {
   class Equalizer0
   {
    center[] = {100,250,1000,5000};
    bandwidth[] = {2,2,2,2};
    gain[] = {1.0,1.0,1.0,1.0};
   };
   class Equalizer1
   {
    center[] = {60,500,3000,8000};
    bandwidth[] = {2,2,2,2};
    gain[] = {1.0,1.0,1.0,1.0};
   };
   class Echo
   {
    WetDryMix = 0;
    Feedback = 0;
    Delay = 1;
   };
  };
  class TankAttenuation
  {
   class Equalizer0
   {
    center[] = {100,250,1000,5000};
    bandwidth[] = {2,2,2,2};
    gain[] = {1.0,1.0,0.31622776,0.17782794};
   };
   class Equalizer1
   {
    center[] = {50,500,2500,10000};
    bandwidth[] = {2,2,2,2};
    gain[] = {1.0,0.4466836,0.2238721,0.12589253};
   };
   class Echo
   {
    WetDryMix = 0.2;
    Feedback = 0.3;
    Delay = 30;
   };
  };
  class HeliAttenuation
  {
   class Equalizer0
   {
    center[] = {100,250,1000,5000};
    bandwidth[] = {2,2,2,2};
    gain[] = {0.8912509,0.8912509,0.56234133,0.31622776};
   };
   class Equalizer1
   {
    center[] = {50,500,2500,10000};
    bandwidth[] = {2,2,2,2};
    gain[] = {1.0,0.7943282,0.5011872,0.12589253};
   };
   class Echo
   {
    WetDryMix = 0.1;
    Feedback = 0.1;
    Delay = 30;
   };
  };
  class OpenHeliAttenuation
  {
   class Equalizer0
   {
    center[] = {100,250,1000,5000};
    bandwidth[] = {0.5,0.5,0.5,0.5};
    gain[] = {1.0,1.0,0.8912509,0.70794576};
   };
   class Equalizer1
   {
    center[] = {100,500,3000,7000};
    bandwidth[] = {0.5,0.5,0.5,0.5};
    gain[] = {1.0,1.0,0.7943282,0.70794576};
   };
   class Echo
   {
    WetDryMix = 0.01;
    Feedback = 0.01;
    Delay = 1;
   };
  };
  class SemiOpenHeliAttenuation
  {
   class Equalizer0
   {
    center[] = {100,250,1000,5000};
    bandwidth[] = {0.5,0.5,0.5,0.5};
    gain[] = {1.0,1.0,0.63095737,0.56234133};
   };
   class Equalizer1
   {
    center[] = {100,500,3000,7000};
    bandwidth[] = {0.5,0.5,0.5,0.5};
    gain[] = {1.0,1.0,0.7943282,0.70794576};
   };
   class Echo
   {
    WetDryMix = 0.01;
    Feedback = 0.01;
    Delay = 1;
   };
  };
  class HeliAttenuationGunner
  {
   class Equalizer0
   {
    center[] = {100,250,1000,5000};
    bandwidth[] = {0.5,0.5,0.5,0.5};
    gain[] = {1.0,1.0,0.8912509,0.70794576};
   };
   class Equalizer1
   {
    center[] = {100,500,3000,7000};
    bandwidth[] = {0.5,0.5,0.5,0.5};
    gain[] = {1.0,1.0,0.7943282,0.70794576};
   };
   class Echo
   {
    WetDryMix = 0.01;
    Feedback = 0.01;
    Delay = 1;
   };
  };
  class HeliAttenuationRamp
  {
   class Equalizer0
   {
    center[] = {100,250,1000,5000};
    bandwidth[] = {0.5,0.5,0.5,0.5};
    gain[] = {1.0,1.0,0.63095737,0.56234133};
   };
   class Equalizer1
   {
    center[] = {100,500,3000,7000};
    bandwidth[] = {0.5,0.5,0.5,0.5};
    gain[] = {1.0,1.0,0.7943282,0.70794576};
   };
   class Echo
   {
    WetDryMix = 0.01;
    Feedback = 0.01;
    Delay = 1;
   };
  };
 };
 class WeaponsEffects
 {
  class Default;
  class DefaultHandGun
  {
   class Begin: Default{};
   class Middle: Default
   {
    distance = 30;
    frequency = 0.95;
    gain[] = {1.0,0.7943282,0.5011872,0.31622776};
    threshold = 0.31622776;
    attack = 45;
   };
   class End: Default
   {
    distance = 150;
    frequency = 0.9;
    gain[] = {1.0,0.56234133,0.31622776,0.12589253};
    threshold = 0.01;
    attack = 0;
   };
  };
  class DefaultRifle
  {
   class Begin: Default{};
   class Middle: Default
   {
    distance = 100;
    frequency = 0.9;
    gain[] = {1.0,1.0,0.39810717,0.25118864};
    threshold = 0.1;
    ratio = 0.5;
    attack = 40;
   };
   class End: Default
   {
    distance = 200;
    frequency = 0.85;
    gain[] = {1.0,0.56234133,0.12589253,0.12589253};
    threshold = 0.1;
    ratio = 0.1;
    attack = 0;
   };
  };
  class DefaultExplosion
  {
   class Begin: Default{};
   class Middle: Default
   {
    distance = 100;
    frequency = 0.95;
    gain[] = {1.0,1.0,0.56234133,0.35481337};
    threshold = 0.1;
    ratio = 0.5;
    attack = 90;
   };
   class End: Default
   {
    distance = 200;
    frequency = 0.9;
    gain[] = {2.5118864,1.4125376,0.31622776,0.12589253};
    threshold = 0.1;
    ratio = 0.6;
    attack = 10;
   };
  };
 };
 class UnderWaterEffects
 {
  class Mono
  {
   distance = 1;
  };
  class Equalizer
  {
   distance = 3;
   center[] = {100,800,2000,10000};
   bandwidth[] = {2.0,2.0,2.0,2.0};
   gain[] = {1.4125376,1.0,0.17782794,0.12589253};
  };
 };
 class UnconsciousStateEffect
 {
  class Echo0
  {
   WetDryMix = 0.25;
   Feedback = 0.15;
   Delay = 50;
  };
  class Echo1
  {
   WetDryMix = 0.5;
   Feedback = 0.2;
   Delay = 100;
  };
  class Equalizer0
  {
   center[] = {100,800,2000,10000};
   bandwidth[] = {1.0,1.0,1.0,1.0};
   gain[] = {1.0,0.56234133,0.31622776,0.31622776};
  };
  class Equalizer1
  {
   center[] = {100,800,2000,10000};
   bandwidth[] = {2.0,2.0,2.0,2.0};
   gain[] = {1.0,0.31622776,0.12589253,0.12589253};
  };
 };
 class RadioFilterEffects
 {
  class Part0
  {
   center[] = {370,900,6000,10000};
   bandwidth[] = {1,2,1,1.2};
   gain[] = {1.0,1.5848932,1.5848932,1.7782794};
   lim_limit = 1;
   lim_attack = 5;
   lim_release = 50;
   enabled[] = {1,0,1};
  };
  class Part1
  {
   filter_cut_off = 650;
   filter_one_over_Q = 0.5;
   filter_enabled = 1;
  };
  class Part2
  {
   center[] = {100,250,900,5000};
   bandwidth[] = {2,1.9,2,2};
   gain[] = {0.12589253,0.12589253,1.5848932,0.70794576};
   comp_threshold = 1.0;
   comp_ratio = 0.27;
   comp_attack = 1;
   comp_relase = 100;
   lim_limit = 0.12589253;
   lim_attack = 1;
   lim_release = 500;
   enabled[] = {1,0,0};
  };
 };
};
*/
/*class CfgAnimationSourceSounds
{
 class GenericDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericDoors\squeak1",1,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GenericDoors\squeak2",1,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\GenericDoors\squeak3",1,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\GenericDoors\squeak4",1,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericDoors\knob1",1,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericDoors\slam1",1,1,20};
   sound[] = {"sound0",1};
  };
 };
 class GenericBigDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsSqueak_1",1,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsSqueak_2",1,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsSqueak_3",1,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsSqueak_4",1,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsKnob",1,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsSlam",1,1,20};
   sound[] = {"sound0",1};
  };
 };
 class PlasticDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\PlasticDoors\PlasticDoorsSqueake_1",1,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\PlasticDoors\PlasticDoorsSqueake_1",1,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\PlasticDoors\PlasticDoorsKnob",1,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\PlasticDoors\PlasticDoorsSlam",1,1,20};
   sound[] = {"sound0",1};
  };
 };
 class GlassBigDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsSqueak_1",1,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsSqueak_2",1,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsSqueak_3",1,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsSqueak_4",1,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsKnob",1,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsSlam",1,1,20};
   sound[] = {"sound0",1};
  };
 };
 class GlassServoDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSqueak_1",1.0,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSqueak_2",1.0,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSqueak_3",1.0,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSqueak_4",1.0,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSlam_1",1.0,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSlam_2",1.0,1,20};
   sound[] = {"sound0",1,"sound1",0.5};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsKnob_1",1.0,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsKnob_2",1.0,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSlam_1",1.0,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSlam_2",1.0,1,20};
   sound[] = {"sound0",1,"sound1",0.5};
  };
 };
 class GlassMetalDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassMetalDoors\GlassMetalDoorsSqueak_1",1,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassMetalDoors\GlassMetalDoorsSqueak_2",1,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassMetalDoors\GlassMetalDoorsKnob",1,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassMetalDoors\GlassMetalDoorsSlam",1,1,20};
   sound[] = {"sound0",1};
  };
 };
 class OldWoodDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsSqueak_1",0.39810717,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsSqueak_2",0.39810717,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsSqueak_3",0.39810717,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsSqueak_4",0.39810717,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsKnob",1,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsSlam",1,1,20};
   sound[] = {"sound0",1};
  };
 };
 class MetalDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsSqueak_1",0.56234133,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsSqueak_2",0.56234133,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsSqueak_3",0.56234133,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsSqueak_4",0.56234133,1,20};
   sound[] = {"sound0",0.2,"sound1",0.2,"sound2",0.4,"sound3",0.2};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsKnob",0.63095737,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsSlam",1,1,20};
   sound[] = {"sound0",1};
  };
 };
 class MetalBigDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsSqueak_1",1,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsSqueak_2",1,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsSlam",1.0,1,20};
   sound[] = {"sound0",1};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsKnob_1",1,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsKnob_2",1,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsSlam",1,1,20};
   sound[] = {"sound0",1};
  };
 };
 class MetalOldDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldDoors\MetalOldDoorsSqueak_1",1.0,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\MetalOldDoors\MetalOldDoorsSqueak_2",1.0,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\MetalOldDoors\MetalOldDoorsSqueak_3",1.0,1,20};
   sound[] = {"sound0",0.33,"sound1",0.33,"sound2",0.33};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldDoors\MetalOldDoorsKnob",1.0,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldDoors\MetalOldDoorsSlam",1.0,1,20};
   sound[] = {"sound0",1};
  };
 };
 class MetalOldBigDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldBigDoors\MetalOldBigDoorsSqueak_1",1,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\MetalOldBigDoors\MetalOldBigDoorsSqueak_2",1,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldBigDoors\MetalOldBigDoorsSlam",1.0,1,20};
   sound[] = {"sound0",1};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldBigDoors\MetalOldBigDoorsKnob",1,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldBigDoors\MetalOldBigDoorsSlam",1,1,20};
   sound[] = {"sound0",1};
  };
 };
 class RollDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSqueak_1",1.0,1,35};
   sound1[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSqueak_2",1.0,1,35};
   sound2[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSqueak_3",1.0,1,35};
   sound3[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSqueak_4",1.0,1,35};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSlam_1",1.0,1,35};
   sound1[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSlam_2",1.0,1,35};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsKnob_1",1.0,1,35};
   sound1[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsKnob_2",1.0,1,35};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSlam_1",1.0,1,35};
   sound1[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSlam_2",1.0,1,35};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
 };
 class ServoDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_1",0.35481337,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_2",0.35481337,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_3",0.35481337,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_4",0.35481337,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",0.35481337,1,20};
   sound[] = {"sound0",1};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsKnob",0.35481337,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.02,0.01])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",1.0,1,20};
   sound[] = {"sound0",1};
  };
 };
 class ServoRampSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_1",1.0,1,60};
   sound1[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_2",1.0,1,60};
   sound2[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_3",1.0,1,60};
   sound3[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_4",1.0,1,60};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone1
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.9,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",1.0,1,60};
   sound[] = {"sound0",1};
  };
  class DoorMovementDone2
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.05])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",1.0,1,60};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.02,0.01])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",1.0,1,60};
   sound[] = {"sound0",1};
  };
 };
 class ServoRampSound_2
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.01,0.02]) * (phase factor[0.99,0.98])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoRamp\ServoRampSound_1",1.0,1,60};
   sound1[] = {"A3\Sounds_F\sfx\doors\ServoRamp\ServoRampSound_2",1.0,1,60};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class DoorMovementDone1
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoRamp\ServoRampSlam",1.0,1,60};
   sound[] = {"sound0",1};
  };
  class DoorMovementDone2
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.02,0.01])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoRamp\ServoRampSlam",1.0,1,60};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.02,0.01])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoRamp\ServoRampSlam",1.0,1,60};
   sound[] = {"sound0",1};
  };
 };
 class GateDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateSqueak_1",1,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateSqueak_1",1,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateSlam",1.0,1,20};
   sound[] = {"sound0",1};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateKnob",1,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateSlam",1,1,20};
   sound[] = {"sound0",1};
  };
 };
 class FenceGateDoorsSound
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_1",1.0,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_2",1.0,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_3",1.0,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_4",1.0,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSlam_1",1.0,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSlam_2",1.0,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateKnob",0.70794576,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSlam_1",1.0,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSlam_2",1.0,1,20};
   sound[] = {"sound0",1};
  };
 };
 class RoadGateDoors
 {
  class DoorMovement
  {
   loop = 0;
   terminate = 1;
   trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSqueake_1",1.0,1,45};
   sound1[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSqueake_2",1.0,1,45};
   sound2[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSqueake_3",1.0,1,45};
   sound3[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSqueake_4",1.0,1,45};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSlam",1.0,1,45};
   sound[] = {"sound0",1};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\dummysound",1,1,45};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSlam",1.0,1,45};
   sound[] = {"sound0",1};
  };
 };
};
*/