EverGrandeCity_DrakeEM_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesEM_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesEM_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	.byte 0

@ Unused, Drake uses Sidneys identical OnWarp for some reason
EverGrandeCity_DrakesEM_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesEM_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_DrakesEM_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_DrakesEM_OnFrame:
	map_script_2 VAR_ELITE_DRAKE_STATE, 1, EverGrandeCity_DrakesEM_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_DrakesEM_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_DRAKE_STATE, 2
	releaseall
	end

EverGrandeCity_DrakesEM_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_DRAKE_EM, EverGrandeCity_DrakesEM_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_DRAKE_STATE, 2, EverGrandeCity_DrakesEM_EventScript_CloseDoor
	end

EverGrandeCity_DrakesEM_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_DrakesEM_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_DrakesEM_EventScript_Drake::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_DRAKE_EM, EverGrandeCity_DrakesEM_EventScript_PostBattleSpeech
	special HasEnoughMonsForDoubleBattle
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, EverGrandeCity_DrakesEM_EventScript_NotEnoughPokemon
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_DrakesEM_Text_IntroSpeech, MSGBOX_DEFAULT
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	setflag FLAG_UNUSED_0x265
	trainerbattle_no_intro TRAINER_DRAKE_EM, EverGrandeCity_DrakesEM_Text_Defeat
	goto EverGrandeCity_DrakesEM_EventScript_Defeated
	end

EverGrandeCity_DrakesEM_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_DrakesEM_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesEM_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_DRAKE_EM
	clearflag FLAG_UNUSED_0x265
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_DrakesEM_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesEM_Text_IntroSpeech:
	.string "I am second of the DRAKE LEAGUE,\n"
	.string "I bring POKéMON from Hoenn!\p"
	.string "I loved Sapphire and Emeralds\n"
	.string "when I played as a kid.\p"
	.string "I used this team to defeat the Elite 4!\p"
	.string "Team Aqua and Team Magma,\n"
	.string "are no match for me!$"

EverGrandeCity_DrakesEM_Text_Defeat:
	.string "Talk about damping the mood.$"

EverGrandeCity_DrakesEM_Text_PostBattleSpeech:
	.string "Prepare to fight my POKéMON \n"
	.string "Platinum team next!$"

EverGrandeCity_DrakesEM_EventScript_NotEnoughPokemon::
	msgbox GymRematch_Text_NotEnoughPokemon, MSGBOX_DEFAULT
	release
	end
