EverGrandeCity_DrakeLG_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesLG_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesLG_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	.byte 0

@ Unused, Drake uses Sidneys identical OnWarp for some reason
EverGrandeCity_DrakesLG_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesLG_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_DrakesLG_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_DrakesLG_OnFrame:
	map_script_2 VAR_ELITE_DRAKE_STATE, 0, EverGrandeCity_DrakesLG_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_DrakesLG_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_DRAKE_STATE, 1
	releaseall
	end

EverGrandeCity_DrakesLG_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_DRAKE_LG, EverGrandeCity_DrakesLG_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_DRAKE_STATE, 1, EverGrandeCity_DrakesLG_EventScript_CloseDoor
	end

EverGrandeCity_DrakesLG_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_DrakesLG_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_DrakesLG_EventScript_Drake::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_DRAKE_LG, EverGrandeCity_DrakesLG_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_DrakesLG_Text_IntroSpeech, MSGBOX_DEFAULT
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	setflag FLAG_UNUSED_0x265
	trainerbattle_no_intro TRAINER_DRAKE_LG, EverGrandeCity_DrakesLG_Text_Defeat
	goto EverGrandeCity_DrakesLG_EventScript_Defeated
	end

EverGrandeCity_DrakesLG_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_DrakesLG_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesLG_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_DRAKE_LG
	clearflag FLAG_UNUSED_0x265
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_DrakesLG_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesLG_Text_IntroSpeech:
	.string "I am the first of the DRAKE LEAGUE,\n"
	.string "I bring POKéMON from Kanto!\p"
	.string "Leaf Green was my first POKéMON\n"
	.string "game I played as a kid.\p"
	.string "I remember fighting in Viridian\n"
	.string "Forest during Diego's Karate.\p"
	.string "Can you beat my 12 year old's team?\p"
	.string "Prepare for trouble,\n"
	.string "and make it double!$"

EverGrandeCity_DrakesLG_Text_Defeat:
	.string "Maybe I wasn't good yet.$"

EverGrandeCity_DrakesLG_Text_PostBattleSpeech:
	.string "Prepare to fight my POKéMON Emerald\n"
	.string "rain team next.$"


