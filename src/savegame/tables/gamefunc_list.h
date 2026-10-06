/*
 * Copyright (C) 1997-2001 Id Software, Inc.
 * Copyright (C) 2011 Yamagi Burmeister
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * =======================================================================
 *
 * Functionpointers to every function in the game.so.
 *
 * =======================================================================
 */

static const fnlist_entry_t fnentries_die[] =
{
	{"DBall_BallDie", (byte *)DBall_BallDie},
	{"barrel_delay", (byte *)barrel_delay},
	{"berserk_die", (byte *)berserk_die},
	{"body_die", (byte *)body_die},
	{"boss2_die", (byte *)boss2_die},
	{"brain_die", (byte *)brain_die},
	{"button_killed", (byte *)button_killed},
	{"carrier_die", (byte *)carrier_die},
	{"chick_die", (byte *)chick_die},
	{"debris_die", (byte *)debris_die},
	{"door_killed", (byte *)door_killed},
	{"door_secret_die", (byte *)door_secret_die},
	{"doppleganger_die", (byte *)doppleganger_die},
	{"fd_secret_killed", (byte *)fd_secret_killed},
	{"flipper_die", (byte *)flipper_die},
	{"floater_die", (byte *)floater_die},
	{"flyer_die", (byte *)flyer_die},
	{"func_explosive_explode", (byte *)func_explosive_explode},
	{"gib_die", (byte *)gib_die},
	{"gladiator_die", (byte *)gladiator_die},
	{"gunner_die", (byte *)gunner_die},
	{"hover_die", (byte *)hover_die},
	{"infantry_die", (byte *)infantry_die},
	{"insane_die", (byte *)insane_die},
	{"jorg_die", (byte *)jorg_die},
	{"makron_die", (byte *)makron_die},
	{"makron_torso_die", (byte *)makron_torso_die},
	{"medic_die", (byte *)medic_die},
	{"misc_deadsoldier_die", (byte *)misc_deadsoldier_die},
	{"mutant_die", (byte *)mutant_die},
	{"nuke_die", (byte *)nuke_die},
	{"parasite_die", (byte *)parasite_die},
	{"player_die", (byte *)player_die},
	{"prox_die", (byte *)prox_die},
	{"soldier_die", (byte *)soldier_die},
	{"sphere_explode", (byte *)sphere_explode},
	{"sphere_if_idle_die", (byte *)sphere_if_idle_die},
	{"stalker_die", (byte *)stalker_die},
	{"supertank_die", (byte *)supertank_die},
	{"tank_die", (byte *)tank_die},
	{"tesla_die", (byte *)tesla_die},
	{"turret_die", (byte *)turret_die},
	{"turret_driver_die", (byte *)turret_driver_die},
	{"widow2_die", (byte *)widow2_die},
	{"widow_die", (byte *)widow_die},
};
static const functionList_t fnlist_die =
{
	"die",
	fnentries_die, ARREND(fnentries_die),
};

static const fnlist_entry_t fnentries_pain[] =
{
	{"DBall_BallPain", (byte *)DBall_BallPain},
	{"berserk_pain", (byte *)berserk_pain},
	{"boss2_pain", (byte *)boss2_pain},
	{"brain_pain", (byte *)brain_pain},
	{"carrier_pain", (byte *)carrier_pain},
	{"chick_pain", (byte *)chick_pain},
	{"defender_pain", (byte *)defender_pain},
	{"doppleganger_pain", (byte *)doppleganger_pain},
	{"flipper_pain", (byte *)flipper_pain},
	{"floater_pain", (byte *)floater_pain},
	{"flyer_pain", (byte *)flyer_pain},
	{"gladiator_pain", (byte *)gladiator_pain},
	{"gunner_pain", (byte *)gunner_pain},
	{"hover_pain", (byte *)hover_pain},
	{"hunter_pain", (byte *)hunter_pain},
	{"infantry_pain", (byte *)infantry_pain},
	{"insane_pain", (byte *)insane_pain},
	{"jorg_pain", (byte *)jorg_pain},
	{"makron_pain", (byte *)makron_pain},
	{"medic_pain", (byte *)medic_pain},
	{"mutant_pain", (byte *)mutant_pain},
	{"parasite_pain", (byte *)parasite_pain},
	{"player_pain", (byte *)player_pain},
	{"soldier_pain", (byte *)soldier_pain},
	{"stalker_pain", (byte *)stalker_pain},
	{"supertank_pain", (byte *)supertank_pain},
	{"tank_pain", (byte *)tank_pain},
	{"turret_pain", (byte *)turret_pain},
	{"vengeance_pain", (byte *)vengeance_pain},
	{"widow2_pain", (byte *)widow2_pain},
	{"widow_pain", (byte *)widow_pain},
};
static const functionList_t fnlist_pain =
{
	"pain",
	fnentries_pain, ARREND(fnentries_pain),
};

static const fnlist_entry_t fnentries_prethink[] =
{
	{"misc_viper_bomb_prethink", (byte *)misc_viper_bomb_prethink},
};
static const functionList_t fnlist_prethink =
{
	"prethink",
	fnentries_prethink, ARREND(fnentries_prethink),
};

static const fnlist_entry_t fnentries_think[] =
{
	{"AngleMove_Begin", (byte *)AngleMove_Begin},
	{"AngleMove_Done", (byte *)AngleMove_Done},
	{"AngleMove_Final", (byte *)AngleMove_Final},
	{"BossExplode", (byte *)BossExplode},
	{"DBall_BallRespawn", (byte *)DBall_BallRespawn},
	{"DoRespawn", (byte *)DoRespawn},
	{"G_FreeEdict", (byte *)G_FreeEdict},
	{"Grenade_Explode", (byte *)Grenade_Explode},
	{"M_FliesOff", (byte *)M_FliesOff},
	{"M_FliesOn", (byte *)M_FliesOn},
	{"MakronSpawn", (byte *)MakronSpawn},
	{"MegaHealth_think", (byte *)MegaHealth_think},
	{"Move_Begin", (byte *)Move_Begin},
	{"Move_Done", (byte *)Move_Done},
	{"Move_Final", (byte *)Move_Final},
	{"Nuke_Quake", (byte *)Nuke_Quake},
	{"Nuke_Think", (byte *)Nuke_Think},
	{"Prox_Explode", (byte *)Prox_Explode},
	{"TH_viewthing", (byte *)TH_viewthing},
	{"Tag_MakeTouchable", (byte *)Tag_MakeTouchable},
	{"Tag_Respawn", (byte *)Tag_Respawn},
	{"Target_Help_Think", (byte *)Target_Help_Think},
	{"Think_AccelMove", (byte *)Think_AccelMove},
	{"Think_Boss3Stand", (byte *)Think_Boss3Stand},
	{"Think_CalcMoveSpeed", (byte *)Think_CalcMoveSpeed},
	{"Think_Delay", (byte *)Think_Delay},
	{"Think_SpawnDoorTrigger", (byte *)Think_SpawnDoorTrigger},
	{"WidowExplode", (byte *)WidowExplode},
	{"barrel_explode", (byte *)barrel_explode},
	{"barrel_start", (byte *)barrel_start},
	{"barrel_think", (byte *)barrel_think},
	{"bfg_explode", (byte *)bfg_explode},
	{"bfg_think", (byte *)bfg_think},
	{"blacklight_think", (byte *)blacklight_think},
	{"body_think", (byte *)body_think},
	{"button_return", (byte *)button_return},
	{"commander_body_drop", (byte *)commander_body_drop},
	{"commander_body_think", (byte *)commander_body_think},
	{"defender_think", (byte *)defender_think},
	{"door_go_down", (byte *)door_go_down},
	{"door_secret_move2", (byte *)door_secret_move2},
	{"door_secret_move4", (byte *)door_secret_move4},
	{"door_secret_move6", (byte *)door_secret_move6},
	{"doppleganger_timeout", (byte *)doppleganger_timeout},
	{"drop_make_touchable", (byte *)drop_make_touchable},
	{"droptofloor", (byte *)droptofloor},
	{"fd_secret_move2", (byte *)fd_secret_move2},
	{"fd_secret_move4", (byte *)fd_secret_move4},
	{"fd_secret_move6", (byte *)fd_secret_move6},
	{"flymonster_start_go", (byte *)flymonster_start_go},
	{"force_wall_think", (byte *)force_wall_think},
	{"func_clock_think", (byte *)func_clock_think},
	{"func_object_release", (byte *)func_object_release},
	{"func_timer_think", (byte *)func_timer_think},
	{"func_train_find", (byte *)func_train_find},
	{"gib_think", (byte *)gib_think},
	{"hover_deadthink", (byte *)hover_deadthink},
	{"hunter_think", (byte *)hunter_think},
	{"makron_torso_think", (byte *)makron_torso_think},
	{"misc_banner_think", (byte *)misc_banner_think},
	{"misc_blackhole_think", (byte *)misc_blackhole_think},
	{"misc_easterchick2_think", (byte *)misc_easterchick2_think},
	{"misc_easterchick_think", (byte *)misc_easterchick_think},
	{"misc_eastertank_think", (byte *)misc_eastertank_think},
	{"misc_satellite_dish_think", (byte *)misc_satellite_dish_think},
	{"monster_think", (byte *)monster_think},
	{"monster_triggered_spawn", (byte *)monster_triggered_spawn},
	{"multi_wait", (byte *)multi_wait},
	{"orb_think", (byte *)orb_think},
	{"plat2_go_down", (byte *)plat2_go_down},
	{"plat2_go_up", (byte *)plat2_go_up},
	{"plat_go_down", (byte *)plat_go_down},
	{"prox_open", (byte *)prox_open},
	{"prox_seek", (byte *)prox_seek},
	{"rotating_accel", (byte *)rotating_accel},
	{"rotating_decel", (byte *)rotating_decel},
	{"smart_water_go_up", (byte *)smart_water_go_up},
	{"spawngrow_think", (byte *)spawngrow_think},
	{"sphere_think_explode", (byte *)sphere_think_explode},
	{"stationarymonster_start_go", (byte *)stationarymonster_start_go},
	{"stationarymonster_triggered_spawn", (byte *)stationarymonster_triggered_spawn},
	{"swimmonster_start_go", (byte *)swimmonster_start_go},
	{"target_crosslevel_target_think", (byte *)target_crosslevel_target_think},
	{"target_earthquake_think", (byte *)target_earthquake_think},
	{"target_explosion_explode", (byte *)target_explosion_explode},
	{"target_laser_start", (byte *)target_laser_start},
	{"target_laser_think", (byte *)target_laser_think},
	{"target_lightramp_think", (byte *)target_lightramp_think},
	{"target_steam_start", (byte *)target_steam_start},
	{"tesla_activate", (byte *)tesla_activate},
	{"tesla_think", (byte *)tesla_think},
	{"tesla_think_active", (byte *)tesla_think_active},
	{"tracker_fly", (byte *)tracker_fly},
	{"tracker_pain_daemon_think", (byte *)tracker_pain_daemon_think},
	{"train_next", (byte *)train_next},
	{"trigger_elevator_init", (byte *)trigger_elevator_init},
	{"turret_brain_link", (byte *)turret_brain_link},
	{"turret_brain_think", (byte *)turret_brain_think},
	{"turret_breach_finish_init", (byte *)turret_breach_finish_init},
	{"turret_breach_think", (byte *)turret_breach_think},
	{"turret_driver_link", (byte *)turret_driver_link},
	{"turret_driver_think", (byte *)turret_driver_think},
	{"vengeance_think", (byte *)vengeance_think},
	{"wait_and_change_think", (byte *)wait_and_change_think},
	{"walkmonster_start_go", (byte *)walkmonster_start_go},
	{"widowlegs_think", (byte *)widowlegs_think},
};
static const functionList_t fnlist_think =
{
	"think",
	fnentries_think, ARREND(fnentries_think),
};

static const fnlist_entry_t fnentries_touch[] =
{
	{"DBall_BallTouch", (byte *)DBall_BallTouch},
	{"DBall_GoalTouch", (byte *)DBall_GoalTouch},
	{"DBall_SpeedTouch", (byte *)DBall_SpeedTouch},
	{"Grenade_Touch", (byte *)Grenade_Touch},
	{"Prox_Field_Touch", (byte *)Prox_Field_Touch},
	{"Touch_DoorTrigger", (byte *)Touch_DoorTrigger},
	{"Touch_Item", (byte *)Touch_Item},
	{"Touch_Multi", (byte *)Touch_Multi},
	{"Touch_Plat_Center", (byte *)Touch_Plat_Center},
	{"Touch_Plat_Center2", (byte *)Touch_Plat_Center2},
	{"badarea_touch", (byte *)badarea_touch},
	{"barrel_touch", (byte *)barrel_touch},
	{"bfg_touch", (byte *)bfg_touch},
	{"blaster2_touch", (byte *)blaster2_touch},
	{"blaster_touch", (byte *)blaster_touch},
	{"button_touch", (byte *)button_touch},
	{"door_touch", (byte *)door_touch},
	{"drop_temp_touch", (byte *)drop_temp_touch},
	{"flechette_touch", (byte *)flechette_touch},
	{"func_object_touch", (byte *)func_object_touch},
	{"gib_touch", (byte *)gib_touch},
	{"hint_path_touch", (byte *)hint_path_touch},
	{"hunter_touch", (byte *)hunter_touch},
	{"hurt_touch", (byte *)hurt_touch},
	{"misc_viper_bomb_touch", (byte *)misc_viper_bomb_touch},
	{"mutant_jump_touch", (byte *)mutant_jump_touch},
	{"nuke_bounce", (byte *)nuke_bounce},
	{"path_corner_touch", (byte *)path_corner_touch},
	{"point_combat_touch", (byte *)point_combat_touch},
	{"prox_land", (byte *)prox_land},
	{"rocket_touch", (byte *)rocket_touch},
	{"rotating_touch", (byte *)rotating_touch},
	{"secret_touch", (byte *)secret_touch},
	{"teleporter_touch", (byte *)teleporter_touch},
	{"tesla_lava", (byte *)tesla_lava},
	{"tesla_zap", (byte *)tesla_zap},
	{"tracker_touch", (byte *)tracker_touch},
	{"trigger_disguise_touch", (byte *)trigger_disguise_touch},
	{"trigger_gravity_touch", (byte *)trigger_gravity_touch},
	{"trigger_monsterjump_touch", (byte *)trigger_monsterjump_touch},
	{"trigger_push_touch", (byte *)trigger_push_touch},
	{"trigger_teleport_touch", (byte *)trigger_teleport_touch},
	{"vengeance_touch", (byte *)vengeance_touch},
	{"widow_gib_touch", (byte *)widow_gib_touch},
};
static const functionList_t fnlist_touch =
{
	"touch",
	fnentries_touch, ARREND(fnentries_touch),
};

static const fnlist_entry_t fnentries_use[] =
{
	{"Door_Activate", (byte *)Door_Activate},
	{"Item_TriggeredSpawn", (byte *)Item_TriggeredSpawn},
	{"Use_Areaportal", (byte *)Use_Areaportal},
	{"Use_Boss3", (byte *)Use_Boss3},
	{"Use_Item", (byte *)Use_Item},
	{"Use_Multi", (byte *)Use_Multi},
	{"Use_Plat", (byte *)Use_Plat},
	{"Use_Plat2", (byte *)Use_Plat2},
	{"Use_Target_Help", (byte *)Use_Target_Help},
	{"Use_Target_Speaker", (byte *)Use_Target_Speaker},
	{"Use_Target_Tent", (byte *)Use_Target_Tent},
	{"button_use", (byte *)button_use},
	{"commander_body_use", (byte *)commander_body_use},
	{"door_secret_use", (byte *)door_secret_use},
	{"door_use", (byte *)door_use},
	{"fd_secret_use", (byte *)fd_secret_use},
	{"force_wall_use", (byte *)force_wall_use},
	{"func_clock_use", (byte *)func_clock_use},
	{"func_conveyor_use", (byte *)func_conveyor_use},
	{"func_explosive_activate", (byte *)func_explosive_activate},
	{"func_explosive_spawn", (byte *)func_explosive_spawn},
	{"func_explosive_use", (byte *)func_explosive_use},
	{"func_object_use", (byte *)func_object_use},
	{"func_timer_use", (byte *)func_timer_use},
	{"func_wall_use", (byte *)func_wall_use},
	{"hurt_use", (byte *)hurt_use},
	{"light_use", (byte *)light_use},
	{"misc_blackhole_use", (byte *)misc_blackhole_use},
	{"misc_nuke_core_use", (byte *)misc_nuke_core_use},
	{"misc_satellite_dish_use", (byte *)misc_satellite_dish_use},
	{"misc_strogg_ship_use", (byte *)misc_strogg_ship_use},
	{"misc_viper_bomb_use", (byte *)misc_viper_bomb_use},
	{"misc_viper_use", (byte *)misc_viper_use},
	{"monster_triggered_spawn_use", (byte *)monster_triggered_spawn_use},
	{"monster_use", (byte *)monster_use},
	{"plat2_activate", (byte *)plat2_activate},
	{"rotating_use", (byte *)rotating_use},
	{"stationarymonster_triggered_spawn_use", (byte *)stationarymonster_triggered_spawn_use},
	{"target_anger_use", (byte *)target_anger_use},
	{"target_earthquake_use", (byte *)target_earthquake_use},
	{"target_killplayers_use", (byte *)target_killplayers_use},
	{"target_laser_use", (byte *)target_laser_use},
	{"target_lightramp_use", (byte *)target_lightramp_use},
	{"target_string_use", (byte *)target_string_use},
	{"train_use", (byte *)train_use},
	{"trigger_counter_use", (byte *)trigger_counter_use},
	{"trigger_crosslevel_trigger_use", (byte *)trigger_crosslevel_trigger_use},
	{"trigger_disguise_use", (byte *)trigger_disguise_use},
	{"trigger_elevator_use", (byte *)trigger_elevator_use},
	{"trigger_enable", (byte *)trigger_enable},
	{"trigger_gravity_use", (byte *)trigger_gravity_use},
	{"trigger_key_use", (byte *)trigger_key_use},
	{"trigger_push_use", (byte *)trigger_push_use},
	{"trigger_relay_use", (byte *)trigger_relay_use},
	{"trigger_teleport_use", (byte *)trigger_teleport_use},
	{"turret_activate", (byte *)turret_activate},
	{"turret_brain_activate", (byte *)turret_brain_activate},
	{"turret_brain_deactivate", (byte *)turret_brain_deactivate},
	{"use_killbox", (byte *)use_killbox},
	{"use_target_blaster", (byte *)use_target_blaster},
	{"use_target_changelevel", (byte *)use_target_changelevel},
	{"use_target_explosion", (byte *)use_target_explosion},
	{"use_target_goal", (byte *)use_target_goal},
	{"use_target_secret", (byte *)use_target_secret},
	{"use_target_spawner", (byte *)use_target_spawner},
	{"use_target_splash", (byte *)use_target_splash},
	{"use_target_steam", (byte *)use_target_steam},
};
static const functionList_t fnlist_use =
{
	"use",
	fnentries_use, ARREND(fnentries_use),
};

static const fnlist_entry_t fnentries_blocked[] =
{
	{"door_blocked", (byte *)door_blocked},
	{"door_secret_blocked", (byte *)door_secret_blocked},
	{"plat2_blocked", (byte *)plat2_blocked},
	{"plat_blocked", (byte *)plat_blocked},
	{"rotating_blocked", (byte *)rotating_blocked},
	{"secret_blocked", (byte *)secret_blocked},
	{"smart_water_blocked", (byte *)smart_water_blocked},
	{"train_blocked", (byte *)train_blocked},
	{"turret_blocked", (byte *)turret_blocked},
};
static const functionList_t fnlist_blocked =
{
	"blocked",
	fnentries_blocked, ARREND(fnentries_blocked),
};

static const fnlist_entry_t fnentries_mi_stand[] =
{
	{"berserk_stand", (byte *)berserk_stand},
	{"boss2_stand", (byte *)boss2_stand},
	{"brain_stand", (byte *)brain_stand},
	{"carrier_stand", (byte *)carrier_stand},
	{"chick_stand", (byte *)chick_stand},
	{"flipper_stand", (byte *)flipper_stand},
	{"floater_stand", (byte *)floater_stand},
	{"flyer_stand", (byte *)flyer_stand},
	{"gladiator_stand", (byte *)gladiator_stand},
	{"gunner_stand", (byte *)gunner_stand},
	{"hover_stand", (byte *)hover_stand},
	{"infantry_stand", (byte *)infantry_stand},
	{"insane_stand", (byte *)insane_stand},
	{"jorg_stand", (byte *)jorg_stand},
	{"makron_stand", (byte *)makron_stand},
	{"medic_stand", (byte *)medic_stand},
	{"mutant_stand", (byte *)mutant_stand},
	{"parasite_stand", (byte *)parasite_stand},
	{"soldier_blind", (byte *)soldier_blind},
	{"soldier_stand", (byte *)soldier_stand},
	{"stalker_stand", (byte *)stalker_stand},
	{"supertank_stand", (byte *)supertank_stand},
	{"tank_stand", (byte *)tank_stand},
	{"turret_stand", (byte *)turret_stand},
	{"widow2_stand", (byte *)widow2_stand},
	{"widow_stand", (byte *)widow_stand},
};
static const functionList_t fnlist_mi_stand =
{
	"mi_stand",
	fnentries_mi_stand, ARREND(fnentries_mi_stand),
};

static const fnlist_entry_t fnentries_mi_walk[] =
{
	{"berserk_walk", (byte *)berserk_walk},
	{"boss2_walk", (byte *)boss2_walk},
	{"brain_walk", (byte *)brain_walk},
	{"carrier_walk", (byte *)carrier_walk},
	{"chick_walk", (byte *)chick_walk},
	{"flipper_walk", (byte *)flipper_walk},
	{"floater_walk", (byte *)floater_walk},
	{"flyer_walk", (byte *)flyer_walk},
	{"gladiator_walk", (byte *)gladiator_walk},
	{"gunner_walk", (byte *)gunner_walk},
	{"hover_walk", (byte *)hover_walk},
	{"infantry_walk", (byte *)infantry_walk},
	{"insane_walk", (byte *)insane_walk},
	{"jorg_walk", (byte *)jorg_walk},
	{"makron_walk", (byte *)makron_walk},
	{"medic_walk", (byte *)medic_walk},
	{"mutant_walk", (byte *)mutant_walk},
	{"parasite_start_walk", (byte *)parasite_start_walk},
	{"soldier_walk", (byte *)soldier_walk},
	{"stalker_walk", (byte *)stalker_walk},
	{"supertank_walk", (byte *)supertank_walk},
	{"tank_walk", (byte *)tank_walk},
	{"turret_walk", (byte *)turret_walk},
	{"widow2_walk", (byte *)widow2_walk},
	{"widow_walk", (byte *)widow_walk},
};
static const functionList_t fnlist_mi_walk =
{
	"mi_walk",
	fnentries_mi_walk, ARREND(fnentries_mi_walk),
};

static const fnlist_entry_t fnentries_mi_run[] =
{
	{"berserk_run", (byte *)berserk_run},
	{"boss2_run", (byte *)boss2_run},
	{"brain_run", (byte *)brain_run},
	{"carrier_run", (byte *)carrier_run},
	{"chick_run", (byte *)chick_run},
	{"flipper_start_run", (byte *)flipper_start_run},
	{"floater_run", (byte *)floater_run},
	{"flyer_run", (byte *)flyer_run},
	{"gladiator_run", (byte *)gladiator_run},
	{"gunner_run", (byte *)gunner_run},
	{"hover_run", (byte *)hover_run},
	{"infantry_run", (byte *)infantry_run},
	{"insane_run", (byte *)insane_run},
	{"jorg_run", (byte *)jorg_run},
	{"makron_run", (byte *)makron_run},
	{"medic_run", (byte *)medic_run},
	{"mutant_run", (byte *)mutant_run},
	{"parasite_start_run", (byte *)parasite_start_run},
	{"soldier_run", (byte *)soldier_run},
	{"stalker_run", (byte *)stalker_run},
	{"supertank_run", (byte *)supertank_run},
	{"tank_run", (byte *)tank_run},
	{"turret_run", (byte *)turret_run},
	{"widow2_run", (byte *)widow2_run},
	{"widow_run", (byte *)widow_run},
};
static const functionList_t fnlist_mi_run =
{
	"mi_run",
	fnentries_mi_run, ARREND(fnentries_mi_run),
};

static const fnlist_entry_t fnentries_mi_melee[] =
{
	{"berserk_melee", (byte *)berserk_melee},
	{"brain_melee", (byte *)brain_melee},
	{"chick_melee", (byte *)chick_melee},
	{"flipper_melee", (byte *)flipper_melee},
	{"floater_melee", (byte *)floater_melee},
	{"flyer_melee", (byte *)flyer_melee},
	{"gladiator_melee", (byte *)gladiator_melee},
	{"mutant_melee", (byte *)mutant_melee},
	{"stalker_attack_melee", (byte *)stalker_attack_melee},
	{"widow2_melee", (byte *)widow2_melee},
	{"widow_melee", (byte *)widow_melee},
};
static const functionList_t fnlist_mi_melee =
{
	"mi_melee",
	fnentries_mi_melee, ARREND(fnentries_mi_melee),
};

static const fnlist_entry_t fnentries_mi_attack[] =
{
	{"boss2_attack", (byte *)boss2_attack},
	{"carrier_attack", (byte *)carrier_attack},
	{"chick_attack", (byte *)chick_attack},
	{"floater_attack", (byte *)floater_attack},
	{"flyer_attack", (byte *)flyer_attack},
	{"gladiator_attack", (byte *)gladiator_attack},
	{"gunner_attack", (byte *)gunner_attack},
	{"hover_start_attack", (byte *)hover_start_attack},
	{"infantry_attack", (byte *)infantry_attack},
	{"jorg_attack", (byte *)jorg_attack},
	{"makron_attack", (byte *)makron_attack},
	{"medic_attack", (byte *)medic_attack},
	{"mutant_jump", (byte *)mutant_jump},
	{"parasite_attack", (byte *)parasite_attack},
	{"soldier_attack", (byte *)soldier_attack},
	{"stalker_attack_ranged", (byte *)stalker_attack_ranged},
	{"supertank_attack", (byte *)supertank_attack},
	{"tank_attack", (byte *)tank_attack},
	{"turret_attack", (byte *)turret_attack},
	{"widow2_attack", (byte *)widow2_attack},
	{"widow_attack", (byte *)widow_attack},
};
static const functionList_t fnlist_mi_attack =
{
	"mi_attack",
	fnentries_mi_attack, ARREND(fnentries_mi_attack),
};

static const fnlist_entry_t fnentries_mi_checkattack[] =
{
	{"Boss2_CheckAttack", (byte *)Boss2_CheckAttack},
	{"Carrier_CheckAttack", (byte *)Carrier_CheckAttack},
	{"Jorg_CheckAttack", (byte *)Jorg_CheckAttack},
	{"M_CheckAttack", (byte *)M_CheckAttack},
	{"Makron_CheckAttack", (byte *)Makron_CheckAttack},
	{"Widow2_CheckAttack", (byte *)Widow2_CheckAttack},
	{"Widow_CheckAttack", (byte *)Widow_CheckAttack},
	{"medic_checkattack", (byte *)medic_checkattack},
	{"mutant_checkattack", (byte *)mutant_checkattack},
	{"parasite_checkattack", (byte *)parasite_checkattack},
	{"turret_checkattack", (byte *)turret_checkattack},
};
static const functionList_t fnlist_mi_checkattack =
{
	"mi_checkattack",
	fnentries_mi_checkattack, ARREND(fnentries_mi_checkattack),
};

static const fnlist_entry_t fnentries_mi_dodge[] =
{
	{"M_MonsterDodge", (byte *)M_MonsterDodge},
	{"stalker_dodge", (byte *)stalker_dodge},
};
static const functionList_t fnlist_mi_dodge =
{
	"mi_dodge",
	fnentries_mi_dodge, ARREND(fnentries_mi_dodge),
};

static const fnlist_entry_t fnentries_mi_idle[] =
{
	{"brain_idle", (byte *)brain_idle},
	{"flipper_idle", (byte *)flipper_idle},
	{"floater_idle", (byte *)floater_idle},
	{"flyer_idle", (byte *)flyer_idle},
	{"gladiator_idle", (byte *)gladiator_idle},
	{"infantry_fidget", (byte *)infantry_fidget},
	{"medic_idle", (byte *)medic_idle},
	{"mutant_idle", (byte *)mutant_idle},
	{"parasite_idle", (byte *)parasite_idle},
	{"stalker_idle", (byte *)stalker_idle},
	{"tank_idle", (byte *)tank_idle},
};
static const functionList_t fnlist_mi_idle =
{
	"mi_idle",
	fnentries_mi_idle, ARREND(fnentries_mi_idle),
};

static const fnlist_entry_t fnentries_mi_search[] =
{
	{"berserk_search", (byte *)berserk_search},
	{"boss2_search", (byte *)boss2_search},
	{"brain_search", (byte *)brain_search},
	{"chick_search", (byte *)chick_search},
	{"flipper_search", (byte *)flipper_search},
	{"gladiator_search", (byte *)gladiator_search},
	{"gunner_search", (byte *)gunner_search},
	{"hover_search", (byte *)hover_search},
	{"infantry_search", (byte *)infantry_search},
	{"jorg_search", (byte *)jorg_search},
	{"medic_search", (byte *)medic_search},
	{"mutant_search", (byte *)mutant_search},
	{"parasite_search", (byte *)parasite_search},
	{"supertank_search", (byte *)supertank_search},
	{"turret_search", (byte *)turret_search},
	{"widow2_search", (byte *)widow2_search},
	{"widow_search", (byte *)widow_search},
};
static const functionList_t fnlist_mi_search =
{
	"mi_search",
	fnentries_mi_search, ARREND(fnentries_mi_search),
};

static const fnlist_entry_t fnentries_mi_sight[] =
{
	{"berserk_sight", (byte *)berserk_sight},
	{"brain_sight", (byte *)brain_sight},
	{"carrier_sight", (byte *)carrier_sight},
	{"chick_sight", (byte *)chick_sight},
	{"flipper_sight", (byte *)flipper_sight},
	{"floater_sight", (byte *)floater_sight},
	{"flyer_sight", (byte *)flyer_sight},
	{"gladiator_sight", (byte *)gladiator_sight},
	{"gunner_sight", (byte *)gunner_sight},
	{"hover_sight", (byte *)hover_sight},
	{"infantry_sight", (byte *)infantry_sight},
	{"makron_sight", (byte *)makron_sight},
	{"medic_sight", (byte *)medic_sight},
	{"mutant_sight", (byte *)mutant_sight},
	{"parasite_sight", (byte *)parasite_sight},
	{"soldier_sight", (byte *)soldier_sight},
	{"stalker_sight", (byte *)stalker_sight},
	{"tank_sight", (byte *)tank_sight},
	{"turret_sight", (byte *)turret_sight},
	{"widow_sight", (byte *)widow_sight},
};
static const functionList_t fnlist_mi_sight =
{
	"mi_sight",
	fnentries_mi_sight, ARREND(fnentries_mi_sight),
};

static const fnlist_entry_t fnentries_mi_blocked[] =
{
	{"berserk_blocked", (byte *)berserk_blocked},
	{"chick_blocked", (byte *)chick_blocked},
	{"floater_blocked", (byte *)floater_blocked},
	{"flyer_blocked", (byte *)flyer_blocked},
	{"gladiator_blocked", (byte *)gladiator_blocked},
	{"gunner_blocked", (byte *)gunner_blocked},
	{"hover_blocked", (byte *)hover_blocked},
	{"infantry_blocked", (byte *)infantry_blocked},
	{"medic_blocked", (byte *)medic_blocked},
	{"mutant_blocked", (byte *)mutant_blocked},
	{"parasite_blocked", (byte *)parasite_blocked},
	{"soldier_blocked", (byte *)soldier_blocked},
	{"stalker_blocked", (byte *)stalker_blocked},
	{"supertank_blocked", (byte *)supertank_blocked},
	{"tank_blocked", (byte *)tank_blocked},
	{"widow_blocked", (byte *)widow_blocked},
};
static const functionList_t fnlist_mi_blocked =
{
	"mi_blocked",
	fnentries_mi_blocked, ARREND(fnentries_mi_blocked),
};

static const fnlist_entry_t fnentries_mi_duck[] =
{
	{"brain_duck", (byte *)brain_duck},
	{"chick_duck", (byte *)chick_duck},
	{"gunner_duck", (byte *)gunner_duck},
	{"infantry_duck", (byte *)infantry_duck},
	{"medic_duck", (byte *)medic_duck},
	{"soldier_duck", (byte *)soldier_duck},
};
static const functionList_t fnlist_mi_duck =
{
	"mi_duck",
	fnentries_mi_duck, ARREND(fnentries_mi_duck),
};

static const fnlist_entry_t fnentries_mi_unduck[] =
{
	{"monster_duck_up", (byte *)monster_duck_up},
};
static const functionList_t fnlist_mi_unduck =
{
	"mi_unduck",
	fnentries_mi_unduck, ARREND(fnentries_mi_unduck),
};

static const fnlist_entry_t fnentries_mi_sidestep[] =
{
	{"berserk_sidestep", (byte *)berserk_sidestep},
	{"chick_sidestep", (byte *)chick_sidestep},
	{"gunner_sidestep", (byte *)gunner_sidestep},
	{"infantry_sidestep", (byte *)infantry_sidestep},
	{"medic_sidestep", (byte *)medic_sidestep},
	{"soldier_sidestep", (byte *)soldier_sidestep},
};
static const functionList_t fnlist_mi_sidestep =
{
	"mi_sidestep",
	fnentries_mi_sidestep, ARREND(fnentries_mi_sidestep),
};

static const fnlist_entry_t fnentries_mv_end[] =
{
	{"button_done", (byte *)button_done},
	{"button_wait", (byte *)button_wait},
	{"door_hit_bottom", (byte *)door_hit_bottom},
	{"door_hit_top", (byte *)door_hit_top},
	{"door_secret_done", (byte *)door_secret_done},
	{"door_secret_move1", (byte *)door_secret_move1},
	{"door_secret_move3", (byte *)door_secret_move3},
	{"door_secret_move5", (byte *)door_secret_move5},
	{"plat2_hit_bottom", (byte *)plat2_hit_bottom},
	{"plat2_hit_top", (byte *)plat2_hit_top},
	{"plat_hit_bottom", (byte *)plat_hit_bottom},
	{"plat_hit_top", (byte *)plat_hit_top},
	{"train_piece_wait", (byte *)train_piece_wait},
	{"train_wait", (byte *)train_wait},
};
static const functionList_t fnlist_mv_end =
{
	"mv_end",
	fnentries_mv_end, ARREND(fnentries_mv_end),
};

