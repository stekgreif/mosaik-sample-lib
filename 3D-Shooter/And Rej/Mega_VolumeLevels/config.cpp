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
  sound[] = {"\A3\sounds_f\missions\scuba_breath",db-3,1.0};
  titles[] = {};
 };
 class RadioAmbient2
 {
  sound[] = {"a3\sounds_f\sfx\radio\ambient_radio2",db-11,1};
  titles[] = {};
  duration = 9;
  scope = 1;
 };
 class RadioAmbient6
 {
  sound[] = {"a3\sounds_f\sfx\radio\ambient_radio6",db-11,1};
  titles[] = {};
  duration = 6;
  scope = 1;
 };
 class RadioAmbient8
 {
  sound[] = {"a3\sounds_f\sfx\radio\ambient_radio8",db-11,1};
  titles[] = {};
  duration = 11;
  scope = 1;
 };
 class ClickSoft
 {
  sound[] = {"A3\missions_f\data\sounds\click.wss",db-16.5,1};
  titles[] = {};
 };
 class Alarm
 {
  name = "$STR_DN_ALARM";
  sound[] = {"A3\Sounds_F\sfx\alarm",db-2,1,300,1,0.0,0.0,0.0};
  titles[] = {};
 };
 class AlarmCar
 {
  name = "$STR_A3_CfgSounds_AlarmCar0";
  sound[] = {"A3\Sounds_F\sfx\alarmCar",db-2,1,300,1,0.0,0.0,0.0};
  titles[] = {};
 };
 class Alarm_BLUFOR
 {
  name = "$STR_A3_CfgSounds_Alarm_BLUFOR0";
  sound[] = {"A3\Sounds_F\sfx\alarm_blufor",db-3,1.0};
  titles[] = {};
 };
 class Alarm_OPFOR
 {
  name = "$STR_A3_CfgSounds_Alarm_OPFOR0";
  sound[] = {"A3\Sounds_F\sfx\alarm_opfor",db-3,1.0};
  titles[] = {};
 };
 class Alarm_Independent
 {
  name = "$STR_A3_CfgSounds_Alarm_Independent0";
  sound[] = {"A3\Sounds_F\sfx\alarm_independent",db-3,1.0};
  titles[] = {};
 };
 class UAV_01
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_01",db-13,1.0};
  titles[] = {};
  duration = 4;
 };
 class UAV_02
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_02",db-13,1.0};
  titles[] = {};
  duration = 10;
 };
 class UAV_03
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_03",db-13,1.0};
  titles[] = {};
  duration = 5;
 };
 class UAV_04
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_04",db-13,1.0};
  titles[] = {};
  duration = 7;
 };
 class UAV_05
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_05",db-13,1.0};
  titles[] = {};
  duration = 7;
 };
 class UAV_06
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_06",db-13,1.0};
  titles[] = {};
  duration = 17;
 };
 class UAV_07
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_07",db-13,1.0};
  titles[] = {};
  duration = 10;
 };
 class UAV_08
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_08",db-13,1.0};
  titles[] = {};
  duration = 1;
 };
 class UAV_09
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_09",db-13,1.0};
  titles[] = {};
  duration = 1;
 };
 class UAV_loop
 {
  sound[] = {"A3\Sounds_F\sfx\uav\UAV_loop",db-13,1.0};
  titles[] = {};
  duration = 5;
 };
 class bobcat_engine_loop
 {
  sound[] = {"A3\Sounds_F\sfx\bobcat_engine_loop",db-2,1.0};
  titles[] = {};
 };
 class bobcat_engine_start
 {
  sound[] = {"A3\Sounds_F\sfx\bobcat_engine_start",db-1,1.0};
  titles[] = {};
 };
 class vehicle_collision
 {
  sound[] = {"A3\Sounds_F\sfx\vehicle_collision",db-2,1.0};
  titles[] = {};
 };
 class vehicle_drag_end
 {
  sound[] = {"A3\Sounds_F\sfx\vehicle_drag_end",db-1,1.0};
  titles[] = {};
 };
 class vehicle_dragging
 {
  sound[] = {"A3\Sounds_F\sfx\vehicle_dragging",db-1,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions1_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions1_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions2_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions2_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions3_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions3_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions4_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions4_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions5_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions5_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight1_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight1_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight2_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight2_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight3_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight3_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight4_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight4_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldHeli1_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli1_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldHeli2_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli2_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldHeli3_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli3_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldJet1_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet1_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldJet2_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet2_mono",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldJet3_3D
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet3_mono",db-13,1.0};
  titles[] = {};
 };
 class Scared_Animal1
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal1",db-13,1.0};
  titles[] = {};
 };
 class Scared_Animal2
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal2",db-13,1.0};
  titles[] = {};
 };
 class Scared_Animal3
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal3",db-13,1.0};
  titles[] = {};
 };
 class Scared_Animal4
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal4",db-13,1.0};
  titles[] = {};
 };
 class Scared_Animal5
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal5",db-13,1.0};
  titles[] = {};
 };
 class Scared_Animal6
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal6",db-13,1.0};
  titles[] = {};
 };
 class Scared_Animal7
 {
  sound[] = {"A3\Sounds_F\ambient\animals\scared_animal7",db-13,1.0};
  titles[] = {};
 };
 class Hint3
 {
  sound[] = {"\a3\Sounds_F\sfx\hint-3",db-1,1.0};
  titles[] = {};
 };
 class Earthquake_01
 {
  sound[] = {"\a3\Sounds_F\sfx\earthquake1",db7,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE1";
  titles[] = {};
 };
 class Earthquake_02
 {
  sound[] = {"\a3\Sounds_F\sfx\earthquake2",db7,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE2";
  titles[] = {};
 };
 class Earthquake_03
 {
  sound[] = {"\a3\Sounds_F\sfx\earthquake3",db7,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE3";
  titles[] = {};
 };
 class Earthquake_04
 {
  sound[] = {"\a3\Sounds_F\sfx\earthquake4",db7,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE4";
  titles[] = {};
 };
 class Worship
 {
  sound[] = {"\a3\Sounds_F\ambient\worship",db7,1.0};
  name = "$STR_A3_SOUNDS_WORSHIP";
  titles[] = {};
 };
};
*/
/*class CfgMusic
{
 class RadioAmbient1
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio1",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient2
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio2",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient3
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio3",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient4
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio4",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient5
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio5",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient6
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio6",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient7
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio7",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient8
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio8",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient9
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio9",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient10
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio10",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient11
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio11",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient12
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio12",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient13
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio13",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient14
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio14",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient15
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio15",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient16
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio16",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient17
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio17",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient18
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio18",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient19
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio19",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient20
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio20",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient21
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio21",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient22
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio22",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient23
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio23",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient24
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio24",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient25
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio25",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient26
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio26",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient27
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio27",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient28
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio28",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient29
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio29",db-3,1};
  titles[] = {};
  scope = 1;
 };
 class RadioAmbient30
 {
  sound[] = {"A3\Sounds_F\sfx\radio\ambient_radio30",db-3,1};
  titles[] = {};
  scope = 1;
 };
};
*/
/*class CfgSFX
{
 access = 1;
 seagull[] = {"A3\sounds_f\dummysound",dbNaN,1,100,1,0.2,1,5};
 class Preview
 {
  effect[] = {"A3\Sounds_f\sfx\volume_preview\sfx.wss",1.0,1};
  speech[] = {"A3\sounds_f\sfx\volume_preview\radio.wss",1.0,1};
  music[] = {"A3\sounds_f\sfx\volume_preview\music.wss",1.0,1};
 };
 class Church
 {
  largeBell[] = {"A3\Sounds_F\ambient\objects\bell_big",db-4,1,250};
  smallBell[] = {"A3\Sounds_F\ambient\objects\bell_small",db-4,1,250};
 };
 class DestrHouse
 {
  sounds[] = {"DestrHouse1","DestrHouse2","DestrHouse3"};
  DestrHouse1[] = {"A3\Sounds_F\sfx\special_sfx\house_destroy_1",db-4,1,500,0.33,0,2,5};
  DestrHouse2[] = {"A3\Sounds_F\sfx\special_sfx\house_destroy_2",db-4,1,500,0.33,0,2,5};
  DestrHouse3[] = {"A3\Sounds_F\sfx\special_sfx\house_destroy_3",db-4,1,500,0.34,0,2,5};
  empty[] = {"",db-1,1,500,1,0,2,5};
 };
 class DestrHousePart
 {
  sounds[] = {"DestrHousePart1"};
  DestrHousePart1[] = {"A3\Sounds_F\sfx\special_sfx\house_destroy_3",db-13,1,500,1,0,2,5};
  empty[] = {"",0,0,0,0,1,5,20};
 };
 class Fire
 {
  name = "$STR_A3_CfgSounds_Fire0";
  sound0[] = {"A3\Sounds_F\sfx\fire1_loop",db-3,1.0,50,1,0,0,0};
  sounds[] = {"sound0"};
  titles[] = {};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class Fire_camp
 {
  sound0[] = {"A3\Sounds_F\sfx\fire2_loop",db-3,1.0,40,1,0,0,0};
  sounds[] = {"sound0"};
  titles[] = {};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class Fire_camp_small
 {
  sound0[] = {"A3\Sounds_F\sfx\fire3_loop",db-3,1.0,30,1,0,0,0};
  sounds[] = {"sound0"};
  titles[] = {};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class CA_Expl1
 {
  sounds[] = {"sound1"};
  sound1[] = {"A3\sounds_f\dummysound",db10,1,700,0.5,0,2,5};
  empty[] = {"",0,0,0,0,1,5,20};
 };
 class SmokeWreck1
 {
  sounds[] = {"Smoke01"};
  name = "$STR_A3_CfgSFX_SmokeWreck10";
  Smoke01[] = {"A3\Sounds_F\sfx\special_sfx\small_fire_smoke_wreck_Heli_Attack_01_1",db-23,1,60,1,0,0,0};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class SparklesWreck1
 {
  sounds[] = {"Sparkles01"};
  name = "$STR_A3_CfgSFX_SparklesWreck10";
  Sparkles01[] = {"A3\Sounds_F\sfx\special_sfx\sparkles_wreck_1"",db-15,1,60,1,5,5,5};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class SparklesWreck2
 {
  sounds[] = {"Sparkles02"};
  name = "$STR_A3_CfgSFX_SparklesWreck20";
  Sparkles02[] = {"A3\Sounds_F\sfx\special_sfx\sparkles_wreck_2"",db-15,1,60,1,5,5,5};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class StreamSfx
 {
  sounds[] = {"Stream01"};
  Stream01[] = {"A3\sounds_f\dummysound",db-13,1,60,1,1,1,1};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class AlarmSfx
 {
  sounds[] = {"Alarm"};
  name = "$STR_DN_ALARM";
  Alarm[] = {"A3\Sounds_F\sfx\alarm",db-3,1,400,1,0.0,0.0,0.0};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class AirAlarmSfx
 {
  sounds[] = {"Alarm"};
  Alarm[] = {"A3\Sounds_F\sfx\alarm",db-3,1,400,1,0.0,0.0,0.0};
  empty[] = {"",0,0,0,0,0,0,0};
 };
 class BattlefieldExplosions
 {
  empty[] = {"",0,0,0,0,0,0,0};
  name = "$STR_A3_CfgSounds_BattlefieldExplosions0";
  sound0[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions1",db-3,1.0,5000,1,0,5,10};
  sound1[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions2",db-3,1.0,5000,1,0,5,10};
  sound2[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions3",db-3,1.0,5000,1,0,5,10};
  sound3[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions4",db-3,1.0,5000,1,0,5,10};
  sound4[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions5",db-3,1.0,5000,1,0,5,10};
  sounds[] = {"sound0","sound1","sound2","sound3","sound4"};
 };
 class BattlefieldFirefight: BattlefieldExplosions
 {
  empty[] = {"",0,0,0,0,0,0,0};
  name = "$STR_A3_CfgSounds_BattlefieldFirefight0";
  sound0[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight1",db-3,1.0,5000,1,0,5,10};
  sound1[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight2",db-3,1.0,5000,1,0,5,10};
  sound2[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight3",db-3,1.0,5000,1,0,5,10};
  sound3[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight4",db-3,1.0,5000,1,0,5,10};
  random[] = {"sound0","sound1","sound2","sound3"};
 };
 class BattlefieldHeli: BattlefieldExplosions
 {
  name = "$STR_A3_CfgSounds_BattlefieldHeli0";
  sound0[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli1",db-13,1.0,1000,0.2,10,25,30};
  sound1[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli2",db-13,1.0,1000,0.2,10,25,30};
  sound2[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli3",db-13,1.0,1000,0.2,10,25,30};
  random[] = {"sound0","sound1","sound2"};
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight1",db-13,1.0};
 };
 class BattlefieldJet: BattlefieldExplosions
 {
  name = "$STR_A3_CfgSounds_BattlefieldJet0";
  sound0[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet1",db-13,1.0,1000,0.2,10,25,30};
  sound1[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet2",db-13,1.0,1000,0.2,10,25,30};
  sound2[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet3",db-13,1.0,1000,0.2,10,25,30};
  random[] = {"sound0","sound1","sound2"};
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet1",db-13,1.0};
 };
};
*/
class CfgEnvSounds
{
 class Rain
 {
  name = "$STR_DN_RAIN";
  sound[] = {"A3\sounds_f\ambient\rain\rain_new_1",db-21,1,200};
  soundNight[] = {"A3\sounds_f\ambient\rain\rain_new_2",db-22,1,200};
 };
 class Sea
 {
  name = "$STR_DN_SEA";
  sound[] = {"A3\sounds_f\ambient\waves\sea-1-sand-beach-stereo",db-27,1,200};
  soundNight[] = {"A3\sounds_f\ambient\waves\sea-1-sand-beach-stereo",db-29,1,200};
  volume = "sea*(1-coast)";
 };
 class Coast
 {
  name = "$STR_A3_CfgEnvSounds_Coast0";
  sound[] = {"A3\sounds_f\ambient\waves\beach_sand_small_waves1",db-30,1,200};
  soundNight[] = {"A3\sounds_f\ambient\waves\beach_sand_small_waves1",db-34,1,200};
  volume = "coast";
 };
 class WindSlow
 {
  name = "$STR_A3_CfgEnvSounds_WindSlow0";
  sound[] = {"A3\sounds_f\ambient\winds\wind-synth-slow",db-40,1};
  volume = "((windy factor[0,0.25])*(windy factor[0.5, 0.25]))-(night*0.25)";
 };
 class WindMedium
 {
  name = "$STR_A3_CfgEnvSounds_WindMedium0";
  sound[] = {"A3\sounds_f\ambient\winds\wind-synth-middle",db-38,1};
  volume = "((windy factor[0.33,0.5])*(windy factor[0.8, 0.5]))-(night*0.25)";
 };
 class WindFast
 {
  name = "$STR_A3_CfgEnvSounds_WindFast0";
  sound[] = {"A3\sounds_f\ambient\winds\wind-synth-fast",db-36,1};
  volume = "(windy factor[0.66,1])-(night*0.25)";
 };
 class Forest
 {
  name = "$STR_A3_CfgEnvSounds_Forest0";
  sound[] = {"A3\sounds_f\ambient\basics\day_insects_winds5",db-44,1};//-32
  volume = "forest*trees*(1-night)";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",db-32,12,100,0.1,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",db-32,12,100,0.1,10,35,60};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",db-32,12,100,0.1,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",db-32,12,100,0.1,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_5",db-37,1,100,0.12,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_9",db-37,1,80,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\fly_3",db-42,1,20,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",db-37,1,40,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",db-37,1,50,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 class ForestNight
 {
  name = "$STR_A3_CfgEnvSounds_ForestNight0";
  sound[] = {"A3\sounds_f\ambient\basics\night_insects_birds_winds4",db-48,1};//-36
  volume = "forest*trees*night";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",db-32,1,100,0.12,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",db-32,1,100,0.12,10,35,60};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",db-32,1,100,0.12,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",db-32,1,100,0.12,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_night_6",db-37,1,100,0.12,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_night_2",db-42,1,70,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\fly_3",db-37,1,10,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",db-37,1,40,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",db-37,1,30,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 class Houses
 {
  name = "$STR_A3_CfgEnvSounds_Houses0";
  sound[] = {"A3\sounds_f\ambient\basics\day_insects_winds4",db-45,1};//-33
  volume = "(houses-0.75)*4";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",db-32,1,100,0.12,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",db-32,1,100,0.12,10,35,60};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",db-32,1,100,0.12,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",db-32,1,100,0.12,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_7",db-37,1,100,0.12,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_8",db-42,1,100,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\fly_4",db-37,1,15,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",db-37,1,20,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",db-37,1,25,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 class HousesNight
 {
  name = "$STR_A3_CfgEnvSounds_HousesNight0";
  sound[] = {"A3\sounds_f\ambient\basics\night_insects_birds_nowinds2",db-46,1};//-34
  volume = "(houses-0.75)*4*night";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",db-32,1,100,0.12,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",db-32,1,100,0.12,10,35,60};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",db-32,1,100,0.12,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",db-32,1,100,0.12,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_night_2",db-37,1,80,0.12,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_night_5",db-42,1,80,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\insect_2",db-37,1,15,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",db-37,1,15,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",db-37,1,30,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 class Meadows
 {
  name = "$STR_A3_CfgEnvSounds_Meadows0";
  sound[] = {"A3\sounds_f\ambient\basics\day_insects_winds5",db-45,1};//-33
  volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",db-36,1,70,0.12,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",db-36,1,100,0.12,15,25,30};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",db-36,1,100,0.12,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",db-36,1,100,0.12,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_7",db-37,1,70,0.12,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_8",db-42,1,70,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\fly_4",db-37,1,20,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",db-37,1,20,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",db-37,1,20,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 class MeadowsNight
 {
  name = "$STR_A3_CfgEnvSounds_MeadowsNight0";
  sound[] = {"A3\sounds_f\ambient\basics\night_insects_birds_winds1",db-48,1};//-36
  volume = "(1-forest)*(1-houses)*night*(1-sea)";
  randSamp0[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_01",db-32,1,100,0.12,10,25,40};
  randSamp1[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_02",db-32,1,100,0.12,10,35,60};
  randSamp2[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_03",db-32,1,100,0.12,10,25,40};
  randSamp3[] = {"A3\sounds_f\ambient\single_sfx\meadow_single_04",db-32,1,100,0.12,10,25,40};
  randSamp4[] = {"A3\sounds_f\ambient\single_sfx\bird_night_2",db-37,12,100,0.1,10,25,40};
  randSamp5[] = {"A3\sounds_f\ambient\single_sfx\bird_night_5",db-42,1,60,0.1,10,25,40};
  randSamp6[] = {"A3\sounds_f\ambient\single_sfx\insect_2",db-37,1,20,0.1,10,25,50};
  randSamp7[] = {"A3\sounds_f\ambient\single_sfx\insect_3",db-37,1,20,0.1,10,25,40};
  randSamp8[] = {"A3\sounds_f\ambient\single_sfx\insect_1",db-37,1,20,0.1,10,25,40};
  random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
 };
 /*
 class BattlefieldExplosions
 {
  sound0[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions1",db-13,1.0,1000,0.2,5,10,15};
  sound1[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions2",db-13,1.0,1000,0.2,5,10,15};
  sound2[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions3",db-13,1.0,1000,0.2,5,10,15};
  sound3[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions4",db-13,1.0,1000,0.2,5,10,15};
  sound4[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions5",db-13,1.0,1000,0.2,5,10,15};
  random[] = {"sound0","sound1","sound2","sound3","sound4"};
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions5",db-13,1.0};
 };
 class BattlefieldExplosions1
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions1",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions2
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions2",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions3
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions3",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions4
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions4",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldExplosions5
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_explosions5",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight1
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight1",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight2
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight2",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight3
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight3",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldFirefight4
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_firefight4",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldHeli1
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli1",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldHeli2
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli2",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldHeli3
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_heli3",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldJet1
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet1",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldJet2
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet2",db-13,1.0};
  titles[] = {};
 };
 class BattlefieldJet3
 {
  sound[] = {"A3\Sounds_F\ambient\battlefield\battlefield_jet3",db-13,1.0};
  titles[] = {};
 };
 class Earthquake_01
 {
  sound[] = {"\a3\Sounds_F\ambient\quakes\earthquake1",db7,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE1";
  titles[] = {};
 };
 class Earthquake_02
 {
  sound[] = {"\a3\Sounds_F\ambient\quakes\earthquake2",db7,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE2";
  titles[] = {};
 };
 class Earthquake_03
 {
  sound[] = {"\a3\Sounds_F\ambient\quakes\earthquake3",db7,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE3";
  titles[] = {};
 };
 class Earthquake_04
 {
  sound[] = {"\a3\Sounds_F\ambient\quakes\earthquake4",db7,1.0};
  name = "$STR_A3_SOUNDS_EARTHQUAKE4";
  titles[] = {};
 };
*/
 };
 
class cfgVehicles
{

	class Man;
	class Tank_F;
	class CAManBase: Man
	{
		vegetation0[] = {"A3\Sounds_F\characters\movements\bush_001",db-24,1,30};
		vegetation1[] = {"A3\Sounds_F\characters\movements\bush_002",db-22,1,30};
		vegetation2[] = {"A3\Sounds_F\characters\movements\bush_003",db-22,1,30};
		vegetation3[] = {"A3\Sounds_F\characters\movements\bush_004",db-23,1,30};
		vegetation4[] = {"A3\Sounds_F\characters\movements\bush_005",db-24,1,30};
		vegetation5[] = {"A3\Sounds_F\characters\movements\bush_006",db-25,1,30};
		vegetation6[] = {"A3\Sounds_F\characters\movements\bush_007",db-17,1,30};
		vegetation7[] = {"A3\Sounds_F\characters\movements\bush_008",db-17,1,30};
		vegetation8[] = {"A3\Sounds_F\characters\movements\bush_009",db-17,1,30};
		vegetation9[] = {"A3\Sounds_F\characters\movements\bush_010",db-17,1,30};
		vegetation10[] = {"A3\Sounds_F\characters\movements\bush_011",db-17,1,30};
		vegetation11[] = {"A3\Sounds_F\characters\movements\bush_012",db-17,1,30};
		vegetationSounds[] = {"vegetation0",0.08,"vegetation1",0.08,"vegetation2",0.08,"vegetation3",0.08,"vegetation4",0.08,"vegetation5",0.08,"vegetation6",0.08,"vegetation7",0.08,"vegetation8",0.09,"vegetation9",0.09,"vegetation10",0.09,"vegetation11",0.09};
		class PulsationSound
		{
		sample0[] = {{ { { "A3\sounds_f\characters\human-sfx\other\heart_3",db-34,1 },1.0 } }};
		sample1[] = {{ { { "A3\sounds_f\characters\human-sfx\other\heart_3",db-34,1 },1.0 } }};
		sample2[] = {{ { { "A3\sounds_f\characters\human-sfx\other\heart_3",db-34,1 },1.0 } }};
		sample3[] = {{ { { "A3\sounds_f\characters\human-sfx\other\heart_3",db-34,1 },1.0 } }};
	};
		class FreefallSound
		{
			sound[] = {"A3\Sounds_F\characters\human-sfx\other\freefall2",1.0,1,40};
		};
		class SoundRecovered
		{
			Person1[] = {{ "Male08ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P01\SoundRecovered_01",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P01\SoundRecovered_02",db-18,1,20 },0.5 } }};
			Person2[] = {{ "Male06ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P02\SoundRecovered_01",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P02\SoundRecovered_02",db-18,1,20 },0.5 } }};
			Person3[] = {{ "Male09ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P03\SoundRecovered_1",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P03\SoundRecovered_2",db-18,1,20 },0.5 } }};
			Person4[] = {{ "Male07ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P04\SoundRecovered_1",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P04\SoundRecovered_2",db-18,1,20 },0.5 } }};
			Person5[] = {{ "Male03GRE" },
				{ { { "A3\sounds_f\characters\human-sfx\P05\SoundRecovered_1",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P05\SoundRecovered_2",db-18,1,20 },0.5 } }};
			Person6[] = {{ "Male02ENGB" },
				{ { { "A3\sounds_f\characters\human-sfx\P06\SoundRecovered_1",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P06\SoundRecovered_2",db-18,1,20 },0.5 } }};
		};
		class SoundChoke
		{
			breath0[] = {{ "Male08ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P01\SoundRecovered_water_01",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P01\SoundRecovered_water_02",db-18,1,20 },0.5 } }};
			breath1[] = {{ "Male06ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P02\SoundRecovered_water_01",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P02\SoundRecovered_water_02",db-18,1,20 },0.5 } }};
			breath2[] = {{ "Male09ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P03\SoundRecovered_water_1",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P03\SoundRecovered_water_2",db-18,1,20 },0.5 } }};
			breath3[] = {{ "Male07ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P04\SoundRecovered_water_1",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P04\SoundRecovered_water_2",db-18,1,20 },0.5 } }};
			breath4[] = {{ "Male03GRE" },
				{ { { "A3\sounds_f\characters\human-sfx\P05\SoundRecovered_water_1",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P05\SoundRecovered_water_2",db-18,1,20 },0.5 } }};
			breath5[] = {{ "Male02ENGB" },
				{ { { "A3\sounds_f\characters\human-sfx\P06\SoundRecovered_water_1",db-18,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P06\SoundRecovered_water_2",db-18,1,20 },0.5 } }};
		};
		class SoundDrown
		{
			breath0[] = {{ { { "A3\sounds_f\characters\human-sfx\08_hum_inside_head1",db-19,1,20 },1.0 } }};
			breath1[] = {{ { { "A3\sounds_f\characters\human-sfx\08_hum_inside_head1",db-19,1,20 },1.0 } }};
			breath2[] = {{ { { "A3\sounds_f\characters\human-sfx\08_hum_inside_head1",db-19,1,20 },1.0 } }};
			breath3[] = {{ { { "A3\sounds_f\characters\human-sfx\08_hum_inside_head1",db-19,1,20 },1.0 } }};
			breath4[] = {{ { { "A3\sounds_f\characters\human-sfx\08_hum_inside_head1",db-19,1,20 },1.0 } }};
			breath5[] = {{ { { "A3\sounds_f\characters\human-sfx\08_hum_inside_head1",db-19,1,20 },1.0 } }};
		};
		class SoundDrowning
		{
			breath0[] = {{ "Male08ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P01\drowning_01",db-20,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P01\drowning_02",db-20,1,20 },0.5 } }};
			breath1[] = {{ "Male06ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P02\drowning_01",db-20,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P02\drowning_02",db-20,1,20 },0.5 } }};
			breath2[] = {{ "Male09ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P03\drowning_1",db-20,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P03\drowning_2",db-20,1,20 },0.5 } }};
			breath3[] = {{ "Male07ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P04\drowning_1",db-20,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P04\drowning_2",db-20,1,20 },0.5 } }};
			breath4[] = {{ "Male03GRE" },
				{ { { "A3\sounds_f\characters\human-sfx\P05\drowning_1",db-20,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P05\drowning_2",db-20,1,20 },0.5 } }};
			breath5[] = {{ "Male02ENGB" },
				{ { { "A3\sounds_f\characters\human-sfx\P06\drowning_1",db-20,1,20 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P06\drowning_2",db-20,1,20 },0.5 } }};
		};
		class SoundBurning
		{
			Person1[] = {{ "Male08ENG" },
				{ { { "A3\Sounds_F\characters\human-sfx\P01\Burning_01",db-14,1,20 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Burning_02",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Burning_03",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Burning_04",db-14,1,25 },0.25 } }};
			Person2[] = {{ "Male06ENG" },
				{ { { "A3\Sounds_F\characters\human-sfx\P02\Burning_01",db-14,1,20 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Burning_02",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Burning_03",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Burning_04",db-14,1,25 },0.25 } }};
			Person3[] = {{ "Male09ENG" },
				{ { { "A3\Sounds_F\characters\human-sfx\P03\Burning_1",db-14,1,20 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Burning_2",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Burning_3",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Burning_4",db-14,1,25 },0.25 } }};
			Person4[] = {{ "Male07ENG" },
				{ { { "A3\Sounds_F\characters\human-sfx\P04\Burning_1",db-14,1,20 },0.35 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Burning_2",db-14,1,25 },0.35 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Burning_3",db-14,1,25 },0.3 } }};
			Person5[] = {{ "Male03GRE" },
				{ { { "A3\Sounds_F\characters\human-sfx\P05\Burning_1",db-14,1,20 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Burning_2",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Burning_3",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Burning_4",db-14,1,25 },0.25 } }};
			Person6[] = {{ "Male02ENGB" },
				{ { { "A3\Sounds_F\characters\human-sfx\P06\Burning_1",db-14,1,20 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Burning_2",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Burning_3",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Burning_4",db-14,1,25 },0.25 } }};
		};
		class SoundBreathSwimming
		{
			breathSwimming0[] = {{ { { "A3\Sounds_F\characters\human-sfx\P01\Water_breath_01",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Water_breath_02",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Water_breath_03",db-14,1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Water_breath_04",db-14,1,25 },0.25 } }};
			breathSwimming1[] = {{ { { "A3\Sounds_F\characters\human-sfx\P02\Water_Breath_01",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Water_Breath_02",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Water_Breath_03",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Water_Breath_04",db-14,1.1,25 },0.25 } }};
			breathSwimming2[] = {{ { { "A3\Sounds_F\characters\human-sfx\P03\Water_Breath_1",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Water_Breath_2",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Water_Breath_3",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Water_Breath_4",db-14,1.1,25 },0.25 } }};
			breathSwimming3[] = {{ { { "A3\Sounds_F\characters\human-sfx\P04\Water_Breath_1",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Water_Breath_2",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Water_Breath_3",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Water_Breath_4",db-14,1.1,25 },0.25 } }};
			breathSwimming4[] = {{ { { "A3\Sounds_F\characters\human-sfx\P05\Water_Breath_1",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Water_Breath_2",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Water_Breath_3",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Water_Breath_4",db-14,1.1,25 },0.25 } }};
			breathSwimming5[] = {{ { { "A3\Sounds_F\characters\human-sfx\P06\Water_Breath_1",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Water_Breath_2",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Water_Breath_3",db-14,1.1,25 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Water_Breath_4",db-14,1.1,25 },0.25 } }};
		};
		class SoundHitScream
		{
			person0[] = {{ "Male08ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P01\Low_hit_01",db-14,1,40 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Low_hit_02",db-14,1,40 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Low_hit_03",db-14,1,40 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Low_hit_04",db-14,1,40 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Low_hit_05",db-14,1,40 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P01\Mid_hit_01",db-12,1,60 },0.25 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Mid_hit_02",db-12,1,60 },0.25 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Mid_hit_03",db-12,1,60 },0.25 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Mid_hit_04",db-12,1,60 },0.25 } },
				{ { { "A3\sounds_f\characters\human-sfx\P01\Max_hit_01",db-10,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Max_hit_02",db-10,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Max_hit_03",db-10,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Max_hit_04",db-10,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Max_hit_05",db-10,1,80 },0.2 } }};
			person1[] = {{ "Male06ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P02\Low_hit_01",db-14,1,40 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Low_hit_02",db-14,1,40 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Low_hit_03",db-14,1,40 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Low_hit_04",db-14,1,40 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Low_hit_05",db-14,1,40 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Low_hit_06",db-14,1,40 },0.1 } },
				{ { { "A3\sounds_f\characters\human-sfx\P02\Mid_hit_01",db-12,1,60 },0.25 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Mid_hit_02",db-12,1,60 },0.25 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Mid_hit_03",db-12,1,60 },0.25 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Mid_hit_04",db-12,1,60 },0.25 } },
				{ { { "A3\sounds_f\characters\human-sfx\P02\Max_hit_01",db-10,1,80 },0.25 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Max_hit_02",db-10,1,80 },0.25 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Max_hit_03",db-10,1,80 },0.25 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Max_hit_04",db-10,1,80 },0.25 } }};
			person2[] = {{ "Male09ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P03\Hit_Low_1",db-14,1,40 },0.35 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Hit_Low_2",db-14,1,40 },0.35 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Hit_Low_3",db-14,1,40 },0.3 } },
				{ { { "A3\sounds_f\characters\human-sfx\P03\Hit_Mid_1",db-12,1,60 },0.35 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Hit_Mid_2",db-12,1,60 },0.35 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Hit_Mid_3",db-12,1,60 },0.3 } },
				{ { { "A3\sounds_f\characters\human-sfx\P03\Hit_Max_1",db-10,1,80 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Hit_Max_2",db-10,1,80 },0.45 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Hit_Max_3",db-10,1,80 },0.45 } }};
			person3[] = {{ "Male07ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P04\Hit_Low_1",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Low_2",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Low_3",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Low_4",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Low_5",db-14,1,60 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P04\Hit_Mid_1",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Mid_2",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Mid_3",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Mid_4",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Mid_5",db-14,1,80 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P04\Hit_Max_1",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Max_2",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Max_3",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Max_4",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Hit_Max_5",db-14,1,30 },0.2 } }};
			person4[] = {{ "Male03GRE" },
				{ { { "A3\sounds_f\characters\human-sfx\P05\Hit_Low_1",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Low_2",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Low_3",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Low_4",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Low_5",db-14,1,60 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P05\Hit_Mid_1",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Mid_2",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Mid_3",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Mid_4",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Mid_5",db-14,1,80 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P05\Hit_Max_1",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Max_2",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Max_3",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Max_4",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Hit_Max_5",db-14,1,30 },0.2 } }};
			person5[] = {{ "Male02ENGB" },
				{ { { "A3\sounds_f\characters\human-sfx\P06\Hit_Low_1",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Low_2",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Low_3",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Low_4",db-14,1,60 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Low_5",db-14,1,60 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P06\Hit_Mid_1",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Mid_2",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Mid_3",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Mid_4",db-14,1,80 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Mid_5",db-14,1,80 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P06\Hit_Max_1",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Max_2",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Max_3",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Max_4",db-14,1,30 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Hit_Max_5",db-14,1,30 },0.2 } }};
		};
		class SoundBreathAiming
		{
			breath0[] = {{ "Male08ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P01\P01_Breath_Aiming_01",db-34,1,7 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P01\P01_Breath_Aiming_02",db-34,1,7 },0.5 } }};
			breath1[] = {{ "Male06ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P02\P02_Breath_Aiming_01",db-34,1,7 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P02\P02_Breath_Aiming_02",db-34,1,7 },0.5 } }};
			breath2[] = {{ "Male09ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P03\P03_Breath_Aiming_01",db-34,1,7 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P03\P03_Breath_Aiming_02",db-34,1,7 },0.5 } }};
			breath3[] = {{ "Male07ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P04\P04_Breath_Aiming_01",db-34,1,7 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P04\P04_Breath_Aiming_02",db-34,1,7 },0.5 } }};
			breath4[] = {{ "Male03ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P05\P05_Breath_Aiming_01",db-34,1,7 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P05\P05_Breath_Aiming_02",db-34,1,7 },0.5 } }};
			breath5[] = {{ "Male02ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P06\P06_Breath_Aiming_01",db-34,1,7 },0.5 },
				{ { "A3\sounds_f\characters\human-sfx\P06\P06_Breath_Aiming_02",db-34,1,7 },0.5 } }};
		};
		class SoundBreath
		{
			breath0[] = {{ "Male08ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P01\Breath_Low_01",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Low_02",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Low_03",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Low_04",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Low_05",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Low_06",db-34,1,7 },0.1 } },
				{ { { "A3\sounds_f\characters\human-sfx\P01\Breath_Mid_01",0.1,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Mid_02",db-29,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Mid_03",db-29,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Mid_04",db-29,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Mid_05",db-29,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Mid_06",db-29,1,13 },0.1 } },
				{ { { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_01",db-28,1,16 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_02",db-28,1,16 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_03",db-28,1,16 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_04",db-28,1,16 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_05",db-28,1,16 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_06",db-28,1,16 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_07",db-28,1,16 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_08",db-28,1,16 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_09",db-28,1,16 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_10",db-28,1,16 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_11",db-28,1,16 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_12",db-28,1,16 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_13z",db-28,1,17 },0.025 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Breath_Max_14z",db-28,1,17 },0.025 } }};
			breath1[] = {{ "Male06ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P02\Breath_Low_01",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Low_02",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Low_03",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Low_04",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Low_05",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Low_06",db-34,1,7 },0.1 } },
				{ { { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_01",db-31,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_02",db-31,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_03",db-31,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_04",db-31,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_05",db-31,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_06",db-31,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_07",db-31,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_08",db-31,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_09",db-31,1,13 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_10",db-31,1,13 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_11",db-31,1,13 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Mid_12",db-31,1,13 },0.05 } },
				{ { { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_01",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_02",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_03",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_04",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_05",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_06",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_07",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_08",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_09",db-28,1,17 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_10",db-28,1,17 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_11",db-28,1,17 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Breath_Max_12",db-28,1,17 },0.05 } }};
			breath2[] = {{ "Male09ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P03\Breath_Low_1",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Low_2",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Low_3",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Low_4",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Low_5",db-34,1,7 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_1",db-30,1,12 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_2",db-30,1,12 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_3",db-30,1,12 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_4",db-30,1,12 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_5",db-30,1,12 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_1",db-28,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_2",db-28,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_3",db-28,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_4",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_5",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_6",db-28,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Breath_Mid_7",db-28,1,17 },0.1 } }};
			breath3[] = {{ "Male07ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P04\Breath_Low_1",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Low_2",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Low_3",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Low_4",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Low_5",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Low_6",db-34,1,7 },0.1 } },
				{ { { "A3\sounds_f\characters\human-sfx\P04\Breath_Mid_1",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Mid_2",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Mid_3",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Mid_4",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Mid_5",db-30,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Mid_6",db-30,1,13 },0.1 } },
				{ { { "A3\sounds_f\characters\human-sfx\P04\Breath_Max_1",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Max_2",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Max_3",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Max_4",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Max_5",db-27,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Breath_Max_6",db-27,1,17 },0.1 } }};
			breath4[] = {{ "Male03GRE" },
				{ { { "A3\sounds_f\characters\human-sfx\P05\Breath_Low_1",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Low_2",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Low_3",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Low_4",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Low_5",db-34,1,7 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P05\Breath_Mid_1",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Mid_2",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Mid_3",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Mid_4",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Mid_5",db-30,1,13 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P05\Breath_Max_1",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Max_2",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Max_3",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Max_4",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Breath_Max_5",db-27,1,17 },0.2 } }};
			breath5[] = {{ "Male02ENGB" },
				{ { { "A3\sounds_f\characters\human-sfx\P06\Breath_Low_1",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Low_2",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Low_3",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Low_4",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Low_5",db-34,1,7 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P06\Breath_Mid_1",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Mid_2",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Mid_3",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Mid_4",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Mid_5",db-30,1,13 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P06\Breath_Max_1",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Max_2",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Max_3",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Max_4",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Breath_Max_5",db-27,1,17 },0.2 } }};
		};
		class SoundBreathInjured
		{
			Person0[] = {{ "Male08ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_01",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_02",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_03",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_04",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_05",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_06",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_07",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_08",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_09",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_10",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_11",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Low_12",db-34,1,7 },0.05 } },
				{ { { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_01",db-30,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_02",db-30,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_03",db-30,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_04",db-30,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_05",db-30,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_06",db-30,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_07",db-30,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_08",db-30,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_09",db-30,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_10",db-30,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_11",db-30,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_12",db-30,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_13",db-30,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Mid_14",db-30,1,7 },0.05 } },
				{ { { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_01",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_02",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_03",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_04",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_05",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_06",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_07",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_08",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_09",db-27,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_10",db-27,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_11",db-27,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P01\Soundbreathinjured_Max_12",db-27,1,7 },0.05 } }};
			person1[] = {{ "Male06ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_01",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_02",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_03",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_04",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_05",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_06",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_07",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_08",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_09",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_10",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_11",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_12",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_13",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_14",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_15",db-34,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Low_16",db-34,1,7 },0.05 } },
				{ { { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_01",db-29,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_02",db-29,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_03",db-29,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_04",db-29,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_05",db-29,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_06",db-29,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_07",db-29,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_08",db-29,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_09",db-29,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_10",db-29,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_11",db-29,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_12",db-29,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_13",db-29,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Mid_14",db-29,1,7 },0.05 } },
				{ { { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_01",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_02",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_03",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_04",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_05",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_06",db-27,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_07",db-27,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_08",db-27,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_09",db-27,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_10",db-27,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_11",db-27,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_12",db-27,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_13",db-27,1,7 },0.05 },
				{ { "A3\sounds_f\characters\human-sfx\P02\Soundbreathinjured_Max_14",db-27,1,7 },0.05 } }};
			person2[] = {{ "Male09ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Low_1",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Low_2",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Low_3",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Low_4",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Low_5",db-34,1,7 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Low_6",db-34,1,7 },0.1 } },
				{ { { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Mid_1",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Mid_2",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Mid_3",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Mid_4",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Mid_5",db-30,1,13 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Mid_6",db-30,1,13 },0.1 } },
				{ { { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Max_1",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Max_2",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Max_3",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Max_4",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Max_5",db-27,1,17 },0.1 },
				{ { "A3\sounds_f\characters\human-sfx\P03\Soundbreathinjured_Max_6",db-27,1,17 },0.1 } }};
			person3[] = {{ "Male07ENG" },
				{ { { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Low_1",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Low_2",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Low_3",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Low_4",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Low_5",db-34,1,7 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Mid_1",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Mid_2",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Mid_3",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Mid_4",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Mid_5",db-30,1,13 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Max_1",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Max_2",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Max_3",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Max_4",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P04\Soundbreathinjured_Max_5",db-27,1,17 },0.2 } }};
			person4[] = {{ "Male03GRE" },
				{ { { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Low_1",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Low_2",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Low_3",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Low_4",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Low_5",db-34,1,7 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Mid_1",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Mid_2",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Mid_3",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Mid_4",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Mid_5",db-30,1,13 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Max_1",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Max_2",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Max_3",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Max_4",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P05\Soundbreathinjured_Max_5",db-27,1,17 },0.2 } }};
			person5[] = {{ "Male02ENGB" },
				{ { { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Low_1",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Low_2",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Low_3",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Low_4",db-34,1,7 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Low_5",db-34,1,7 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Mid_1",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Mid_2",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Mid_3",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Mid_4",db-30,1,13 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Mid_5",db-30,1,13 },0.2 } },
				{ { { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Max_1",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Max_2",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Max_3",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Max_4",db-27,1,17 },0.2 },
				{ { "A3\sounds_f\characters\human-sfx\P06\Soundbreathinjured_Max_5",db-27,1,17 },0.2 } }};
		};
		class SoundInjured
		{
			person_moan0[] = {{ "Male08ENG" },
				{ { { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Low_01",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Low_02",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Low_03",db-31,1,10 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Low_04",db-31,1,10 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Low_05",db-31,1,10 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Low_06",db-31,1,10 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Low_07",db-31,1,10 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Low_08",db-31,1,10 },0.1 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Mid_01",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Mid_02",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Mid_03",db-27,1,15 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Mid_04",db-27,1,15 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Mid_05",db-27,1,15 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Mid_06",db-27,1,15 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Mid_07",db-27,1,15 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Mid_08",db-27,1,15 },0.1 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Max_01",db-25,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Max_02",db-25,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Max_03",db-25,1,20 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Max_04",db-25,1,20 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Max_05",db-25,1,20 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Max_06",db-25,1,20 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Max_07",db-25,1,20 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P01\Soundinjured_Max_08",db-25,1,20 },0.1 } }};
			person_moan1[] = {{ "Male06ENG" },
				{ { { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Low_01",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Low_02",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Low_03",db-31,1,10 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Low_04",db-31,1,10 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Low_05",db-31,1,10 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Low_06",db-31,1,10 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Low_07",db-31,1,10 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Low_08",db-31,1,10 },0.1 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Mid_01",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Mid_02",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Mid_03",db-27,1,15 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Mid_04",db-27,1,15 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Mid_05",db-27,1,15 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Mid_06",db-27,1,15 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Mid_07",db-27,1,15 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Mid_08",db-27,1,15 },0.1 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Max_01",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Max_02",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Max_03",db-23,1,20 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Max_04",db-23,1,20 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Max_05",db-23,1,20 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Max_06",db-23,1,20 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Max_07",db-23,1,20 },0.1 },
				{ { "A3\Sounds_F\characters\human-sfx\P02\Soundinjured_Max_08",db-23,1,20 },0.1 } }};
			person_moan2[] = {{ "Male09ENG" },
				{ { { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Low_1",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Low_2",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Low_3",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Low_4",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Low_5",db-31,1,10 },0.2 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Mid_1",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Mid_2",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Mid_3",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Mid_4",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Mid_5",db-27,1,15 },0.2 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Max_1",db-23,1,20 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Max_2",db-23,1,20 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Max_3",db-23,1,20 },0.25 },
				{ { "A3\Sounds_F\characters\human-sfx\P03\Soundinjured_Max_4",db-23,1,20 },0.25 } }};
			person_moan3[] = {{ "Male07ENG" },
				{ { { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Low_1",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Low_2",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Low_3",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Low_4",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Low_5",db-31,1,10 },0.2 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Mid_1",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Mid_2",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Mid_3",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Mid_4",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Mid_5",db-27,1,15 },0.2 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Max_1",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Max_2",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Max_3",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Max_4",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P04\Soundinjured_Max_5",db-23,1,20 },0.2 } }};
			person_moan4[] = {{ "Male03GRE" },
				{ { { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Low_1",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Low_2",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Low_3",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Low_4",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Low_5",db-31,1,10 },0.2 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Mid_1",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Mid_2",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Mid_3",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Mid_4",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Mid_5",db-27,1,15 },0.2 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Max_1",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Max_2",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Max_3",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Max_4",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P05\Soundinjured_Max_5",db-23,1,20 },0.2 } }};
			person_moan5[] = {{ "Male02ENGB" },
				{ { { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Low_1",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Low_2",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Low_3",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Low_4",db-31,1,10 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Low_5",db-31,1,10 },0.2 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Mid_1",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Mid_2",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Mid_3",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Mid_4",db-27,1,15 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Mid_5",db-27,1,15 },0.2 } },
				{ { { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Max_1",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Max_2",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Max_3",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Max_4",db-23,1,20 },0.2 },
				{ { "A3\Sounds_F\characters\human-sfx\P06\Soundinjured_Max_5",db-23,1,20 },0.2 } }};
		};
		class SoundBreathAutomatic
		{
			breath0[] = {{ { { "A3\Sounds_F\characters\human-sfx\other\diver-breath-1",db-14,1,20 },0.25 },{ { "A3\Sounds_F\characters\human-sfx\other\diver-breath-2",db-14,1,20 },0.25 },{ { "A3\Sounds_F\characters\human-sfx\other\diver-breath-3",db-14,1,20 },0.25 },{ { "A3\Sounds_F\characters\human-sfx\other\diver-breath-4",db-14,1,20 },0.25 } }};
		};
		class SoundEnvironExt
		{
			generic[] = 
			{
				{ "healself",{ "\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWrflDnon_medic",db-13,1,20 } },
				{ "healselfprone",{ "\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWrflDnon_medic",db-13,1,20 } },
				{ "healselfpistolkneelin",{ "\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicIn",db-13,1,20 } },
				{ "healselfpistolkneel",{ "\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medic",db-13,1,20 } },
				{ "healselfpistolkneelout",{ "\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicOut",db-13,1,20 } },
				{ "healselfpistolpromein",{ "\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicin",db-13,1,20 } },
				{ "healselfpistolprone",{ "\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medic",db-13,1,20 } },
				{ "healselfpistolpromeout",{ "\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicOut",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "adjust_short",{ "\A3\sounds_f\characters\stances\adjust_short1",db-28,1,20 } },
				{ "adjust_short",{ "\A3\sounds_f\characters\stances\adjust_short2",db-28,1,20 } },
				{ "adjust_short",{ "\A3\sounds_f\characters\stances\adjust_short3",db-28,1,20 } },
				{ "adjust_short",{ "\A3\sounds_f\characters\stances\adjust_short4",db-28,1,20 } },
				{ "adjust_short",{ "\A3\sounds_f\characters\stances\adjust_short5",db-28,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\adjust_short1",db-28,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\adjust_short1",db-28,1,20 } },
				{ "adjust_kneelhigh_to_standlow",{ "\A3\sounds_f\characters\stances\adjust_short3",db-28,1,20 } },
				{ "adjust_standlow_to_kneelhigh",{ "\A3\sounds_f\characters\stances\adjust_short1",db-28,1,20 } },
				{ "over_the_obstacle_slow",{ "\A3\sounds_f\characters\movements\over_the_obstacle_slow",db-22,1,20 } },
				{ "over_the_obstacle_fast",{ "\A3\sounds_f\characters\movements\over_the_obstacle_fast",db-22,1,20 } },
				{ "grenade_throw",{ "\A3\sounds_f\characters\stances\adjust_short1",db-21,1,20 } },
				{ "grenade_throw",{ "\A3\sounds_f\characters\stances\adjust_short2",db-21,1,20 } },
				{ "grenade_throw",{ "\A3\sounds_f\characters\stances\adjust_short3",db-21,1,20 } },
				{ "grenade_throw",{ "\A3\sounds_f\characters\stances\adjust_short4",db-21,1,20 } },
				{ "grenade_throw",{ "\A3\sounds_f\characters\stances\adjust_short5",db-21,1,20 } },
				{ "inventory_in",{ "\A3\sounds_f\characters\stances\adjust_short1",db-24,1,20 } },
				{ "inventory_out",{ "\A3\sounds_f\characters\stances\adjust_short2",db-24,1,20 } },
				{ "handgun_to_rifle",{ "\A3\Sounds_F\characters\stances\handgun_to_rifle",db-18,1,20 } },
				{ "handgun_to_launcher",{ "\A3\sounds_f\characters\stances\handgun_to_launcher",db-18,1,20 } },
				{ "launcher_to_rifle",{ "\A3\sounds_f\characters\stances\launcher_to_rifle",db-18,1,20 } },
				{ "launcher_to_handgun",{ "\A3\sounds_f\characters\stances\launcher_to_handgun",db-18,1,20 } },
				{ "rifle_to_handgun",{ "\A3\Sounds_F\characters\stances\rifle_to_handgun",db-18,1,20 } },
				{ "rifle_to_handgun_prn",{ "\A3\Sounds_F\characters\stances\rifle_to_handgun_prn",db-18,1,20 } },
				{ "rifle_to_launcher",{ "\A3\sounds_f\characters\stances\rifle_to_launcher",db-18,1,20 } },
				{ "rifle_to_binoc",{ "\A3\sounds_f\characters\stances\rifle_to_binoculars",db-18,1,20 } },
				{ "handgun_to_binoc",{ "\A3\sounds_f\characters\stances\handgun_to_binoculars",db-18,1,20 } },
				{ "launcher_to_binoc",{ "\A3\sounds_f\characters\stances\launcher_to_binoculars",db-18,1,20 } },
				{ "launcher_to_binoc_knl",{ "\A3\sounds_f\characters\stances\launcher_to_binoculars_knl",db-18,1,20 } },
				{ "unarmed_to_binoc",{ "\A3\sounds_f\characters\stances\unarmed_to_binoculars",db-18,1,20 } },
				{ "binoc_to_rifle",{ "\A3\sounds_f\characters\stances\binoculars_to_rifle",db-18,1,20 } },
				{ "binoc_to_rifle_2",{ "\A3\sounds_f\characters\stances\binoculars_to_rifle_2",db-18,1,20 } },
				{ "binoc_to_handgun",{ "\A3\sounds_f\characters\stances\binoculars_to_handgun",db-18,1,20 } },
				{ "binoc_to_launcher",{ "\A3\sounds_f\characters\stances\binoculars_to_launcher",db-18,1,20 } },
				{ "binoc_to_unarmed",{ "\A3\sounds_f\characters\stances\binoculars_to_unarmed",db-18,1,20 } },
				{ "low_rifle",{ "A3\sounds_f\characters\stances\low_rifle",db-18,1,20 } },
				{ "lift_rifle",{ "A3\sounds_f\characters\stances\lift_rifle",db-18,1,20 } },
				{ "low_handgun",{ "A3\sounds_f\characters\stances\low_handgun",db-18,1,20 } },
				{ "lift_handgun",{ "A3\sounds_f\characters\stances\lift_handgun",db-18,1,20 } },
				{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_01",db-18,1,20 } },
				{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_02",db-18,1,20 } },
				{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_03",db-18,1,20 } },
				{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_04",db-18,1,20 } },
				{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_05",db-18,1,20 } },
				{ "ladder",{ "\A3\Sounds_F\characters\movements\ladder\ladder_06",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\swim\swim_default1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\swim\swim_default2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\swim\swim_default3",db-18,1,20 } },
				{ "Acts_CrouchGetLowGesture",{ "\A3\Sounds_F\characters\cutscenes\Acts_CrouchGetLowGesture",db-13,1,20 } },
				{ "Acts_listeningToRadio_in",{ "A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_in",db-13,1,20 } },
				{ "Acts_listeningToRadio_Loop",{ "\A3\Sounds_F\dummysound",db-13,1,20 } },
				{ "Acts_listeningToRadio_Out",{ "\A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_Out",db-13,1,20 } },
				{ "Acts_LyingWounded_loop1",{ "\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop1",db-13,1,20 } },
				{ "Acts_LyingWounded_loop2",{ "\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop2",db-13,1,20 } },
				{ "Acts_LyingWounded_loop3",{ "\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop3",db-13,1,20 } },
				{ "Acts_NavigatingChopper_In",{ "\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_In",db-17,1,20 } },
				{ "Acts_NavigatingChopper_Loop",{ "\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Loop",db-17,1,20 } },
				{ "Acts_NavigatingChopper_Out",{ "\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Out",db-17,1,20 } },
				{ "Acts_PercMstpSlowWrflDnon_handup1",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1",db-17,1,20 } },
				{ "Acts_PercMstpSlowWrflDnon_handup1b",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1b",db-17,1,20 } },
				{ "Acts_PercMstpSlowWrflDnon_handup1c",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1c",db-17,1,20 } },
				{ "Acts_PercMstpSlowWrflDnon_handup2",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2",db-17,1,20 } },
				{ "Acts_PercMstpSlowWrflDnon_handup2b",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2b",db-13,1,20 } },
				{ "Acts_PercMstpSlowWrflDnon_handup2c",{ "\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2c",db-17,1,20 } },
				{ "Acts_SignalToCheck",{ "\A3\Sounds_F\characters\cutscenes\Acts_SignalToCheck",db-17,1,20 } },
				{ "Acts_ShowingTheRightWay_in",{ "\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_in",db-17,1,20 } },
				{ "Acts_ShowingTheRightWay_loop",{ "\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Loop",db-17,1,20 } },
				{ "Acts_ShowingTheRightWay_out",{ "\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Out",db-17,1,20 } },
				{ "Acts_ShieldFromSun_loop",{ "\A3\Sounds_F\dummysound",db-17,1,20 } },
				{ "Acts_ShieldFromSun_out",{ "\A3\Sounds_F\characters\cutscenes\Acts_ShieldFromSun_Out",db-17,1,20 } },
				{ "Acts_TreatingWounded01",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded01",db-17,1,20 } },
				{ "Acts_TreatingWounded02",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded02",db-17,1,20 } },
				{ "Acts_TreatingWounded03",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded03",db-17,1,20 } },
				{ "Acts_TreatingWounded04",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded04",db-17,1,20 } },
				{ "Acts_TreatingWounded05",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded05",db-17,1,20 } },
				{ "Acts_TreatingWounded06",{ "\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded06",db-17,1,20 } },
				{ "Acts_AidlPercMstpSlowWrflDnon_pissing",{ "\A3\Sounds_F\characters\cutscenes\Acts_AidlPercMstpSlowWrflDnon_pissing",db-13,1,20 } },
				{ "Acts_BoatAttacked01",{ "\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked01",db-13,1,20 } },
				{ "Acts_BoatAttacked02",{ "\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked02",db-13,1,20 } },
				{ "Acts_BoatAttacked03",{ "\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked03",db-13,1,20 } },
				{ "Acts_BoatAttacked04",{ "\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked04",db-13,1,20 } },
				{ "Acts_BoatAttacked05",{ "\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked05",db-13,1,20 } },
				{ "acts_CrouchingCoveringRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_CrouchingCoveringRifle01",db-17,1,20 } },
				{ "acts_CrouchingIdleRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_CrouchingIdleRifle01",db-17,1,20 } },
				{ "acts_CrouchingReloadingRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_CrouchingReloadingRifle01",db-17,1,20 } },
				{ "acts_CrouchingWatchingRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_CrouchingWatchingRifle01",db-17,1,20 } },
				{ "acts_InjuredAngryRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredAngryRifle01",db-17,1,20 } },
				{ "acts_InjuredCoughRifle02",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredCoughRifle02",db-17,1,20 } },
				{ "acts_InjuredLookingRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle01",db-17,1,20 } },
				{ "acts_InjuredLookingRifle02",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle02",db-17,1,20 } },
				{ "acts_InjuredLookingRifle03",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle03",db-17,1,20 } },
				{ "acts_InjuredLookingRifle04",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle04",db-17,1,20 } },
				{ "acts_InjuredLookingRifle05",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle05",db-17,1,20 } },
				{ "acts_InjuredLyingRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredLyingRifle01",db-17,1,20 } },
				{ "acts_InjuredSpeakingRifle01",{ "\A3\Sounds_F\characters\cutscenes\Acts_InjuredSpeakingRIfle01",db-17,1,20 } },
				{ "Acts_PknlMstpSlowWrflDnon",{ "\A3\Sounds_F\characters\cutscenes\Acts_PknlMstpSlowWrflDnon",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_loop1",{ "\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop1",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_loop2",{ "\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_loop3",{ "\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisekneeBendA",{ "\A3\Sounds_F\characters\cutscenes\AmovPercMstpSnonWnonDnon_exercisekneeBendA",db-17,1,20 } }
			};
			
			normal[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			rock[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\rock_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\rock_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\rock_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\rock_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\rock_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\rock_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\rock_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\rock_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\rock_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\rock_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\rock_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			stony[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\stony_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\stony_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\stony_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\stony_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\stony_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\stony_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\stony_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\stony_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\stony_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\stony_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\stony_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			gravel[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\gravel_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\gravel_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\gravel_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\gravel_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\gravel_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\gravel_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\gravel_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\gravel_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\gravel_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\gravel_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\gravel_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\gravel_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\gravel_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\gravel_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\gravel_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\gravel_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\gravel_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\gravel_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			tiling[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tiles_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tiles_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tiles_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			sand[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\sand_roll_1",db-12,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\sand_roll_2",db-12,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\sand_roll_3",db-12,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\sand_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\sand_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\sand_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\sand_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\sand_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\sand_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\sand_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\sand_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\sand_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\sand_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\sand_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\sand_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\sand_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\sand_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\sand_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\sand_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\sand_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\sand_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			drygrass[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\grass_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\grass_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			grass[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\grass_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\new_grass_walk_1",db-35.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_grass_walk_2",db-35.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_grass_walk_3",db-35.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_grass_walk_4",db-35.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_grass_walk_5",db-35.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_grass_walk_6",db-35.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_grass_walk_7",db-35.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\new_grass_walk_8",db-35.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_1",db-27,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_2",db-27,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_3",db-27,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_4",db-27,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_5",db-27,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_6",db-27,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_7",db-27,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\new_grass_run_8",db-27,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_1",db-35.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_2",db-35.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_3",db-35.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_4",db-35.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_5",db-35.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_6",db-35.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_7",db-35.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\new_grass_walk_8",db-35.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_1",db-23.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_2",db-23.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_3",db-23.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_4",db-23.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_5",db-23.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_6",db-23.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_7",db-23.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\new_grass_sprint_8",db-23.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\grass_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\grass_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\grass_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			debris[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\gravel_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\debris_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\debris_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\debris_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\debris_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\debris_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\debris_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\debris_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\debris_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\debris_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\debris_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\debris_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_1",db-25,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_2",db-25,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_3",db-25,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_4",db-25,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_5",db-25,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\gravel_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\gravel_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			wood[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_1",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_2",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_3",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_4",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_5",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_6",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_7",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_8",db-25.5,0.7,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_1",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_2",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_3",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_4",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_5",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_6",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_7",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_ext_8",db-21,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_1",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_2",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_3",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_4",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_5",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_6",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_7",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_ext_8",db-25.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_1",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_2",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_3",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_4",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_5",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_6",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_7",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_ext_8",db-19.5,0.7,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			concrete[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			metal[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\metal_walk_1",db-25.5,1,120 },
				{ "\A3\sounds_f\characters\footsteps\metal_walk_2",db-25.5,1,120 },
				{ "\A3\sounds_f\characters\footsteps\metal_walk_3",db-25.5,1,120 },
				{ "\A3\sounds_f\characters\footsteps\metal_walk_4",db-25.5,1,120 },
				{ "\A3\sounds_f\characters\footsteps\metal_walk_5",db-25.5,1,120 },
				{ "\A3\sounds_f\characters\footsteps\metal_walk_6",db-25.5,1,120 },
				{ "\A3\sounds_f\characters\footsteps\metal_walk_7",db-25.5,1,120 },
				{ "\A3\sounds_f\characters\footsteps\metal_walk_8",db-25.5,1,120 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			dirt[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\dirt_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\dirt_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\dirt_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\dirt_run_new_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\dirt_walk_new_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\dirt_sprint_new_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_1",db-25,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_2",db-25,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_3",db-25,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_4",db-25,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\dirt_crawl_5",db-25,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\dirt_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\dirt_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_dirt_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_dirt_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_dirt_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			wavymetal[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\roof_tin_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\roof_tin_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\roof_tin_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			water[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\crawl\crawl_water_7",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\crawl\crawl_water_7",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\water_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\water_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\water_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\water_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\water_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\water_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\water_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\water_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\water_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\water_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\water_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_1",db-17,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_2",db-17,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_3",db-17,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_4",db-17,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_5",db-17,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_6",db-17,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_7",db-17,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\crawl_water_8",db-17,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\water_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\water_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani4",db-18,1,20 } },
				{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-1",db-15,1.0,20 } },
				{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-2",db-15,1.0,20 } },
				{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-3",db-15,1.0,20 } },
				{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-4",db-15,1.0,20 } },
				{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-5",db-15,1.0,20 } },
				{ "dive",{ "A3\Sounds_F\characters\movements\diver-swim-6",db-15,1.0,20 } },
				{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-1",db-15,1.0,20 } },
				{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-2",db-15,1.0,20 } },
				{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-3",db-15,1.0,20 } },
				{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-4",db-15,1.0,20 } },
				{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-5",db-15,1.0,20 } },
				{ "dive_dry",{ "A3\Sounds_F\characters\movements\diver-dry-swim-6",db-15,1.0,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			virtual[] = 
			{
				{ "adjust_short",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",db-3,1,20 } },
				{ "adjust_short",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",db-3,1,20 } },
				{ "adjust_short",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",db-3,1,20 } },
				{ "adjust_short",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",db-3,1,20 } },
				{ "adjust_short",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",db-3,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",db-3,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",db-3,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",db-3,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",db-3,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",db-3,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_kneel_to_stand1",db-3,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_kneel_to_stand2",db-3,1,20 } },
				{ "adjust_kneelhigh_to_standlow",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",db-3,1,20 } },
				{ "adjust_standlow_to_kneelhigh",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",db-3,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_prone",db-3,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_to_stand",db-3,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_up",db-3,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_up_back",db-3,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",db-3,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",db-3,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",db-3,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_left",db-3,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_right",db-3,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\Sounds_F_Bootcamp\Characters\Stances\virtual_adjust_kneel_to_prone",db-3,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_to_kneel",db-3,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_left_prone",db-3,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_right_prone",db-3,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_left_prone_to_stand",db-3,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_right_prone_to_stand",db-3,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_short1",db-3,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_short2",db-3,1,20 } },
				{ "adjust_kneelhigh_to_standlow",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_short3",db-3,1,20 } },
				{ "adjust_standlow_to_kneelhigh",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_short4",db-3,1,20 } },
				{ "over_the_obstacle_fast",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_over_the_obstacle_fast",db-3,1,20 } },
				{ "over_the_obstacle_slow",{ "\A3\sounds_f_bootcamp\characters\stances\virtual_over_the_obstacle_slow",db-3,1,20 } },
				{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_1",db-22.5,1,20 },
				{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_2",db-22.5,1,20 },
				{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_3",db-22.5,1,20 },
				{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_4",db-22.5,1,20 },
				{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_5",db-22.5,1,20 },
				{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_6",db-22.5,1,20 },
				{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_7",db-22.5,1,20 },
				{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_8",db-22.5,1,20 },
				{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_1",db-18,1,20 } },
				{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_2",db-18,1,20 } },
				{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_3",db-18,1,20 } },
				{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_4",db-18,1,20 } },
				{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_5",db-18,1,20 } },
				{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_6",db-18,1,20 } },
				{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_7",db-18,1,20 } },
				{ "run",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_8",db-18,1,20 } },
				{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_1",db-22.5,1,20 } },
				{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_2",db-22.5,1,20 } },
				{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_3",db-22.5,1,20 } },
				{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_4",db-22.5,1,20 } },
				{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_5",db-22.5,1,20 } },
				{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_6",db-22.5,1,20 } },
				{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_7",db-22.5,1,20 } },
				{ "walk",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_8",db-22.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_1",db-18.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_2",db-18.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_3",db-18.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_4",db-18.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_5",db-18.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_6",db-18.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_7",db-18.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_8",db-18.5,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_3",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F_Bootcamp\Characters\laydown\virtual_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F_Bootcamp\Characters\laydown\virtual_laydown_2",db-18,1,20 } },
				{ "swim",{ "A3\sounds_f_bootcamp\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\sounds_f_bootcamp\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\sounds_f_bootcamp\characters\movements\plavani3",db-18,1,20 } },
				{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_1",db-17,1,20 } },
				{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_2",db-17,1,20 } },
				{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_3",db-17,1,20 } },
				{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_4",db-17,1,20 } },
				{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_5",db-17,1,20 } },
				{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_6",db-17,1,20 } },
				{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_7",db-17,1,20 } },
				{ "crawl",{ "A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_8",db-17,1,20 } },
				{ "roll",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_1",db-20,1,20 } },
				{ "roll",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_2",db-20,1,20 } },
				{ "roll",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_3",db-20,1,20 } },
				{ "roll",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_4",db-20,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_1",db-20,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_2",db-20,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_3",db-20,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_4",db-20,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			int_concrete[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			int_wood[] = 
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_int_1",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_int_2",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_int_3",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_int_4",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_int_5",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_int_6",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_int_7",db-25.5,0.7,20 },
				{ "\A3\sounds_f\characters\footsteps\wood_walk_int_8",db-25.5,0.7,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_1",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_2",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_3",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_4",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_5",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_6",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_7",db-21,0.7,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\wood_run_int_8",db-21,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_1",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_2",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_3",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_4",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_5",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_6",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_7",db-25.5,0.7,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\wood_walk_int_8",db-25.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_1",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_2",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_3",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_4",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_5",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_6",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_7",db-19.5,0.7,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\wood_sprint_int_8",db-19.5,0.7,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			int_metal[] =
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\metal_int_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\metal_int_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\metal_int_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\metal_int_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\metal_int_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\metal_int_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\metal_int_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\metal_int_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\metal_int_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\metal_int_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\metal_int_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			int_tiles[] =
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_int_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_int_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_int_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani1",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani2",db-18,1,20 } },
				{ "swim",{ "A3\Sounds_F\characters\movements\plavani3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-17,1,20 } }
			};
			
			tarmac[] =
			{
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_stand_side",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",db-24,1,20 } },
				{ "adjust_stand_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",db-24,1,20 } },
				{ "adjust_kneel_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",db-24,1,20 } },
				{ "adjust_stand_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",db-24,1,20 } },
				{ "adjust_prone_up",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up",db-24,1,20 } },
				{ "adjust_prone_up_back",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",db-24,1,20 } },
				{ "adjust_prone_down",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",db-24,1,20 } },
				{ "adjust_prone_left",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_left",db-24,1,20 } },
				{ "adjust_prone_right",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_right",db-24,1,20 } },
				{ "adjust_kneel_to_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",db-24,1,20 } },
				{ "adjust_prone_to_kneel",{ "\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",db-24,1,20 } },
				{ "adjust_stand_to_left_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",db-24,1,20 } },
				{ "adjust_stand_to_right_prone",{ "\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",db-24,1,20 } },
				{ "adjust_left_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",db-24,1,20 } },
				{ "adjust_right_prone_to_stand",{ "\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",db-24,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_1",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_2",db-13,1,20 } },
				{ "roll",{ "A3\Sounds_F\characters\movements\roll\concrete_roll_3",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",db-13,1,20 } },
				{ "roll_unarmed",{ "A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",db-13,1,20 } },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",db-25.5,1,20 },
				{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",db-25.5,1,20 },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_1",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_2",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_3",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_4",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_5",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_6",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_7",db-21,1,20 } },
				{ "run",{ "\A3\sounds_f\characters\footsteps\concrete_run_8",db-21,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_1",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_2",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_3",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_4",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_5",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_6",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_7",db-25.5,1,20 } },
				{ "walk",{ "\A3\sounds_f\characters\footsteps\concrete_walk_8",db-25.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_1",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_2",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_3",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_4",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_5",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_6",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_7",db-19.5,1,20 } },
				{ "sprint",{ "\A3\sounds_f\characters\footsteps\concrete_sprint_8",db-19.5,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_1",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_2",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_3",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_4",db-20,1,20 } },
				{ "crawl",{ "\A3\sounds_f\characters\crawl\concrete_crawl_5",db-20,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",db-18,1,20 } },
				{ "laydown",{ "\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",db-18,1,20 } },
				{ "bodyfall",{ "\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",db-18,1,20 } },
				{ "Acts_carFixingWheel",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",db-17,1,20 } },
				{ "Acts_PercMwlkSlowWrflDf2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",db-17,1,20 } },
				{ "Acts_WalkingChecking",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle02",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle03",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",db-17,1,20 } },
				{ "Acts_CrouchingFiringLeftRifle04",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",db-17,1,20 } },
				{ "Acts_HUBABriefing",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",db-17,1,20 } },
				{ "Acts_PointingLeftUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",db-17,1,20 } },
				{ "Acts_SittingJumpingSaluting_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",db-17,1,20 } },
				{ "Acts_StandingSpeakingUnarmed",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",db-17,1,20 } },
				{ "Acts_TreatingWounded_in",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",db-17,1,20 } },
				{ "Acts_TreatingWounded_out",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",db-17,1,20 } },
				{ "Acts_UnconsciousStandUp_part1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_1b",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB01_PlayerWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_4",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_5",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_AIWalk_6",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_1",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_2",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",db-17,1,20 } },
				{ "Acts_WelcomeOnHUB02_PlayerWalk_3",{ "A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",db-17,1,20 } },
				{ "AmovPercMstpSnonWnonDnon_exercisePushup",{ "\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",db-3,1,20 } }
			};
		};
		class SoundGear
		{
			primary[] = 
			{
				{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_01",db-34,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_02",db-34,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_03",db-34,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_04",db-34,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_05",db-34,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_06",db-34,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_07",db-34,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\soldier_gear_walk_08",db-34,1,30 } },
				{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_01",db-31,1,35 } },
				{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_02",db-31,1,35 } },
				{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_03",db-31,1,35 } },
				{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_04",db-31,1,35 } },
				{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_05",db-31,1,35 } },
				{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_06",db-31,1,35 } },
				{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_07",db-31,1,35 } },
				{ "run",{ "A3\sounds_f\characters\movements\soldier_gear_run_08",db-31,1,35 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_01",db-29,1,45 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_02",db-29,1,45 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_03",db-29,1,45 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_04",db-29,1,45 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_05",db-29,1,45 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_06",db-29,1,45 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_07",db-29,1,45 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\soldier_gear_sprint_08",db-29,1,45 } }
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
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_01",db-37,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_02",db-37,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_03",db-37,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_04",db-37,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_05",db-37,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_06",db-37,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_07",db-37,1,30 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_08",db-37,1,30 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_01",db-36,1,32 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_02",db-36,1,32 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_03",db-36,1,32 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_04",db-36,1,32 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_05",db-36,1,32 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_06",db-36,1,32 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_07",db-36,1,32 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_08",db-36,1,32 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_01",db-32,1,35 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_02",db-32,1,35 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_03",db-32,1,35 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_04",db-32,1,35 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_05",db-32,1,35 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_06",db-32,1,35 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_07",db-32,1,35 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_08",db-32,1,35 } }
			};
			civilian[] = 
			{
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_01",db-37,1,20 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_02",db-37,1,20 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_03",db-37,1,20 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_04",db-37,1,20 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_05",db-37,1,20 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_06",db-37,1,20 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_07",db-37,1,20 } },
				{ "walk",{ "A3\sounds_f\characters\movements\suit_run_08",db-37,1,20 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_01",db-36,1,30 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_02",db-36,1,30 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_03",db-36,1,30 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_04",db-36,1,30 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_05",db-36,1,30 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_06",db-36,1,30 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_07",db-36,1,30 } },
				{ "run",{ "A3\sounds_f\characters\movements\suit_run_08",db-36,1,30 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_01",db-32,1,40 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_02",db-32,1,40 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_03",db-32,1,40 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_04",db-32,1,40 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_05",db-32,1,40 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_06",db-32,1,40 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_07",db-32,1,40 } },
				{ "sprint",{ "A3\sounds_f\characters\movements\suit_sprint_08",db-32,1,40 } }
			};
		};
	};
	class MBT_01_base_F: Tank_F
	{
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",db-13,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",db-13,1,20};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_start",db-12,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_start",db-10,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_stop",db-12,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_stop",db-10,1.0,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",db-8,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",db-8,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",db-8,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",db-8,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",db-8,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",db-8,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",db-8,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",db-8,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",db-8,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",db-8,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",db-8,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",db-8,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",db-8,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",db-8,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm1",db-10,1,400};//200
				frequency = "0.95	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm2",db-9,1,480};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm3",db-7,1,560};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm4",db-6,1,640};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm5",db-5,1,720};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm6",db-4,1,800};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm7",db-3,1,880};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*camPos*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1",db-7,1,400};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2",db-5,1,400};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3",db-3,1,460};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4",db-2,1,580};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5",db-3,1,700};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6",db-1,1,800};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7",db0,1,900};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1",db-14,1};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2",db-17,1};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3",db-16,1};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4",db-15,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5",db-14,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6",db-13,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7",db-12,1};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1",db-12,1};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2",db-16,1};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3",db-15,1};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4",db-15,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5",db-14,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6",db-13,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7",db-12,1};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",db-14,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",db-9,1.0,50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_01",db-16,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_02",db-15,1.0,320};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_03",db-14,1.0,360};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_04",db-13,1.0,400};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_05",db-13,1.0,440};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01",db-18,1.0,240};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02",db-17,1.0,280};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03",db-16,1.0,320};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04",db-15,1.0,360};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05",db-14,1.0,400};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01",db-20,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02",db-19,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03",db-18,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04",db-17,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05",db-16,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01",db-18,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02",db-18,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03",db-17,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04",db-17,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05",db-16,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
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
    gain[] = {0.63095737,db-5,db-8,0.31622776};
   };
   class Equalizer1
   {
    center[] = {60,500,3000,8000};
    bandwidth[] = {2,2,2,2};
    gain[] = {0.70794576,db-6,db-9,0.17782794};
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
    gain[] = {1.0,1.0,db-10,0.17782794};
   };
   class Equalizer1
   {
    center[] = {50,500,2500,10000};
    bandwidth[] = {2,2,2,2};
    gain[] = {1.0,0.4466836,db-13,0.12589253};
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
    gain[] = {0.8912509,db-1,db-5,0.31622776};
   };
   class Equalizer1
   {
    center[] = {50,500,2500,10000};
    bandwidth[] = {2,2,2,2};
    gain[] = {1.0,0.7943282,db-6,0.12589253};
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
    gain[] = {1.0,1.0,db-1,0.70794576};
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
    gain[] = {1.0,1.0,db-1,0.70794576};
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
    gain[] = {1.0,0.7943282,db-6,0.31622776};
    threshold = 0.31622776;
    attack = 45;
   };
   class End: Default
   {
    distance = 150;
    frequency = 0.9;
    gain[] = {1.0,db-5,db-10,0.12589253};
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
    gain[] = {1.0,1.0,db-8,0.25118864};
    threshold = 0.1;
    ratio = 0.5;
    attack = 40;
   };
   class End: Default
   {
    distance = 200;
    frequency = 0.85;
    gain[] = {1.0,db-5,db-18,0.12589253};
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
    gain[] = {1.0,1.0,db-5,0.35481337};
    threshold = 0.1;
    ratio = 0.5;
    attack = 90;
   };
   class End: Default
   {
    distance = 200;
    frequency = 0.9;
    gain[] = {2.5118864,1.4125376,db-10,0.12589253};
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
   gain[] = {1.4125376,1.0",db-15,0.12589253};
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
   gain[] = {1.0,db-5,db-10,0.31622776};
  };
  class Equalizer1
  {
   center[] = {100,800,2000,10000};
   bandwidth[] = {2.0,2.0,2.0,2.0};
   gain[] = {1.0,db-10,db-18,0.12589253};
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
   gain[] = {0.12589253,db-18,1.5848932,0.70794576};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericDoors\squeak1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GenericDoors\squeak2",db-3,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\GenericDoors\squeak3",db-3,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\GenericDoors\squeak4",db-3,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericDoors\knob1",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericDoors\slam1",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsSqueak_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsSqueak_2",db-3,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsSqueak_3",db-3,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsSqueak_4",db-3,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsKnob",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GenericBigDoors\GenericBigDoorsSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\PlasticDoors\PlasticDoorsSqueake_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\PlasticDoors\PlasticDoorsSqueake_1",db-3,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\PlasticDoors\PlasticDoorsKnob",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\PlasticDoors\PlasticDoorsSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsSqueak_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsSqueak_2",db-3,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsSqueak_3",db-3,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsSqueak_4",db-3,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsKnob",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassBigDoors\GlassBigDoorsSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSqueak_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSqueak_2",db-3,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSqueak_3",db-3,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSqueak_4",db-3,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSlam_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSlam_2",db-3,1,20};
   sound[] = {"sound0",1,"sound1",0.5};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsKnob_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsKnob_2",db-3,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSlam_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassServoDoors\GlassServoDoorsSlam_2",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassMetalDoors\GlassMetalDoorsSqueak_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GlassMetalDoors\GlassMetalDoorsSqueak_2",db-3,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassMetalDoors\GlassMetalDoorsKnob",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GlassMetalDoors\GlassMetalDoorsSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsSqueak_1",db-11,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsSqueak_2",db-11,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsSqueak_3",db-11,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsSqueak_4",db-11,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsKnob",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\OldWoodDoors\OldWoodDoorsSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsSqueak_1",db-8,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsSqueak_2",db-8,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsSqueak_3",db-8,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsSqueak_4",db-8,1,20};
   sound[] = {"sound0",0.2,"sound1",0.2,"sound2",0.4,"sound3",0.2};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsKnob",db-7,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalDoors\MetalDoorsSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsSqueak_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsSqueak_2",db-3,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsSlam",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsKnob_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsKnob_2",db-3,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalBigDoors\MetalBigDoorsSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldDoors\MetalOldDoorsSqueak_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\MetalOldDoors\MetalOldDoorsSqueak_2",db-3,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\MetalOldDoors\MetalOldDoorsSqueak_3",db-3,1,20};
   sound[] = {"sound0",0.33,"sound1",0.33,"sound2",0.33};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldDoors\MetalOldDoorsKnob",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldDoors\MetalOldDoorsSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldBigDoors\MetalOldBigDoorsSqueak_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\MetalOldBigDoors\MetalOldBigDoorsSqueak_2",db-3,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldBigDoors\MetalOldBigDoorsSlam",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldBigDoors\MetalOldBigDoorsKnob",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\MetalOldBigDoors\MetalOldBigDoorsSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSqueak_1",db-3,1,35};
   sound1[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSqueak_2",db-3,1,35};
   sound2[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSqueak_3",db-3,1,35};
   sound3[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSqueak_4",db-3,1,35};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSlam_1",db-3,1,35};
   sound1[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSlam_2",db-3,1,35};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsKnob_1",db-3,1,35};
   sound1[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsKnob_2",db-3,1,35};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSlam_1",db-3,1,35};
   sound1[] = {"A3\Sounds_F\sfx\doors\RollDoors\RollDoorsSlam_2",db-3,1,35};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_1",db-12,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_2",db-12,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_3",db-12,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_4",db-12,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",db-12,1,20};
   sound[] = {"sound0",1};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsKnob",db-12,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.02,0.01])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_1",db-3,1,60};
   sound1[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_2",db-3,1,60};
   sound2[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_3",db-3,1,60};
   sound3[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSqueak_4",db-3,1,60};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone1
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.9,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",db-3,1,60};
   sound[] = {"sound0",1};
  };
  class DoorMovementDone2
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.05])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",db-3,1,60};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.02,0.01])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",db-3,1,60};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoRamp\ServoRampSound_1",db-3,1,60};
   sound1[] = {"A3\Sounds_F\sfx\doors\ServoRamp\ServoRampSound_2",db-3,1,60};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class DoorMovementDone1
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoRamp\ServoRampSlam",db-3,1,60};
   sound[] = {"sound0",1};
  };
  class DoorMovementDone2
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.02,0.01])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoRamp\ServoRampSlam",db-3,1,60};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.02,0.01])";
   sound0[] = {"A3\Sounds_F\sfx\doors\ServoRamp\ServoRampSlam",db-3,1,60};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateSqueak_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateSqueak_1",db-3,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateSlam",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateKnob",db-3,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateSlam",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_2",db-3,1,20};
   sound2[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_3",db-3,1,20};
   sound3[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_4",db-3,1,20};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSlam_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSlam_2",db-3,1,20};
   sound[] = {"sound0",0.5,"sound1",0.5};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateKnob",db-6,1,20};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSlam_1",db-3,1,20};
   sound1[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSlam_2",db-3,1,20};
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
   sound0[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSqueake_1",db-3,1,45};
   sound1[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSqueake_2",db-3,1,45};
   sound2[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSqueake_3",db-3,1,45};
   sound3[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSqueake_4",db-3,1,45};
   sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
  };
  class DoorMovementDone
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.98,0.99])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSlam",db-3,1,45};
   sound[] = {"sound0",1};
  };
  class OpenTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "direction * (phase factor[0.01,0.02])";
   sound0[] = {"A3\Sounds_F\dummysound",db-3,1,45};
   sound[] = {"sound0",1};
  };
  class SlamTheDoor
  {
   loop = 0;
   terminate = 0;
   trigger = "(1 - direction) * (phase factor[0.1,0.09])";
   sound0[] = {"A3\Sounds_F\sfx\doors\RoadGateDoors\RoadGateDoorsSlam",db-3,1,45};
   sound[] = {"sound0",1};
  };
 };
};
*/