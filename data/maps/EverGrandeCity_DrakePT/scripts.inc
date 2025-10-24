EverGrandeCity_DrakePT_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesPT_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesPT_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	.byte 0

@ Unused, Drake uses Sidneys identical OnWarp for some reason
EverGrandeCity_DrakesPT_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesPT_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_DrakesPT_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_DrakesPT_OnFrame:
	map_script_2 VAR_ELITE_DRAKE_STATE, 2, EverGrandeCity_DrakesPT_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_DrakesPT_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_DRAKE_STATE, 3
	releaseall
	end

EverGrandeCity_DrakesPT_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_DRAKE_PT, EverGrandeCity_DrakesPT_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_DRAKE_STATE, 3, EverGrandeCity_DrakesPT_EventScript_CloseDoor
	end

EverGrandeCity_DrakesPT_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_DrakesPT_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_DrakesPT_EventScript_Drake::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_DRAKE_PT, EverGrandeCity_DrakesPT_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_DrakesPT_Text_IntroSpeech, MSGBOX_DEFAULT
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	setflag FLAG_UNUSED_0x265
	trainerbattle_no_intro TRAINER_DRAKE_PT, EverGrandeCity_DrakesPT_Text_Defeat
	goto EverGrandeCity_DrakesPT_EventScript_Defeated
	end

EverGrandeCity_DrakesPT_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_DrakesPT_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesPT_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_DRAKE_PT
	clearflag FLAG_UNUSED_0x265
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_DrakesPT_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesPT_Text_IntroSpeech:
	.string "I am third of the DRAKE LEAGUE,\n"
	.string "I bring POKéMON from Sinnoh!\p"
	.string "I loved mining underground\n"
	.string "and using ICE types.\p"
	.string "Behold my crystalline team!\p"
	.string "This will be a match of \n"
	.string "Galactic proportions!$"

EverGrandeCity_DrakesPT_Text_Defeat:
	.string "Ill need a ice pack for that burn.$"

EverGrandeCity_DrakesPT_Text_PostBattleSpeech:
	.string "Next up is Soul Silver! \p"
	.string "Dont' underestimate him!$"

