EverGrandeCity_DrakeSS_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesSS_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesSS_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	.byte 0

@ Unused, Drake uses Sidneys identical OnWarp for some reason
EverGrandeCity_DrakesSS_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesSS_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_DrakesSS_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_DrakesSS_OnFrame:
	map_script_2 VAR_ELITE_DRAKE_STATE, 3, EverGrandeCity_DrakesSS_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_DrakesSS_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_DRAKE_STATE, 4
	releaseall
	end

EverGrandeCity_DrakesSS_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_DRAKE_SS, EverGrandeCity_DrakesSS_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_DRAKE_STATE, 4, EverGrandeCity_DrakesSS_EventScript_CloseDoor
	end

EverGrandeCity_DrakesSS_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_DrakesSS_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_DrakesSS_EventScript_Drake::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_DRAKE_SS, EverGrandeCity_DrakesSS_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_DrakesSS_Text_IntroSpeech, MSGBOX_DEFAULT
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	setflag FLAG_UNUSED_0x265
	trainerbattle_no_intro TRAINER_DRAKE_SS, EverGrandeCity_DrakesSS_Text_Defeat
	goto EverGrandeCity_DrakesSS_EventScript_Defeated
	end

EverGrandeCity_DrakesSS_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_DrakesSS_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesSS_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_DRAKE_SS
	clearflag FLAG_UNUSED_0x265
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_DrakesSS_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesSS_Text_IntroSpeech:
	.string "I am last of the DRAKE LEAGUE,\n"
	.string "I bring POKéMON from Jhoto!\p"
	.string "This was the last game\n"
	.string "I played as a kid.\p"
	.string "But this team is the strongest!\p"
	.string "I'll roast you like\n"
	.string "a Slowpoke Tail!$"

EverGrandeCity_DrakesSS_Text_Defeat:
	.string "Well, thats unlucky.$"

EverGrandeCity_DrakesSS_Text_PostBattleSpeech:
	.string "The Champion Drake awaits \n"
	.string "to seal you in a sandy tomb!$"


