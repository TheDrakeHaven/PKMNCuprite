EverGrandeCity_DrakeChampions_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_DrakeChampions_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_DrakeChampions_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakeChampions_OnFrame
	.byte 0

EverGrandeCity_DrakeChampions_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

EverGrandeCity_DrakeChampions_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakeChampions_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_DrakeChampions_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_DrakeChampions_OnFrame:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakeChampions_EventScript_EnterRoom
	.2byte 0

EverGrandeCity_DrakeChampions_EventScript_EnterRoom::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
	waitmovement 0
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_DrakeChampions_Movement_PlayerApproachWallace
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto EverGrandeCity_DrakeChampions_EventScript_Wallace
	releaseall
	end

EverGrandeCity_DrakeChampions_Movement_PlayerApproachWallace:
	walk_up
	walk_up
	step_end

EverGrandeCity_DrakeChampions_EventScript_Wallace::
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
	msgbox EverGrandeCity_DrakeChampions_Text_IntroSpeech, MSGBOX_DEFAULT
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	trainerbattle_no_intro TRAINER_DRAKE_CHAMP, EverGrandeCity_DrakeChampions_Text_Defeat
	goto EverGrandeCity_DrakeChampions_EventScript_Defeated
	end

EverGrandeCity_DrakeChampions_EventScript_Defeated::
	msgbox EverGrandeCity_DrakeChampions_Text_PostBattleSpeech, MSGBOX_DEFAULT
	closemessage
	goto EverGrandeCity_DrakeChampions_EventScript_HoF
	end

EverGrandeCity_DrakeChampions_EventScript_HoF::
	lockall
	delay 20
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
	delay 40
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
	goto EverGrandeCity_HallOfFame_EventScript_GameClearFemale
	end

EverGrandeCity_DrakeChampions_Text_IntroSpeech:
	.string "DRAKE: Welcome, {PLAYER}.\p"
	.string "I created this game in a \l"
	.string "time of great struggle.\p"
	.string "But seeing that you were able\n"
	.string "and willing to win brings me\l"
	.string "the greatest joy.\p"
	.string "And this is where your achievements\n"
	.string "are put to the test against what\l"
	.string "I have created.\p"
	.string "Now, for your final battle!$"

EverGrandeCity_DrakeChampions_Text_Defeat:
	.string "I, the CHAMPION, fall in defeat…\p"
	.string "That was wonderful work.\n"
	.string "You could conquer my favorite.\l"
	.string "team so easily!\p"
	.string "Kudos to you, {PLAYER}!\p"
	.string "You are a truly noble POKéMON\n"
	.string "TRAINER!$"

EverGrandeCity_DrakeChampions_Text_PostBattleSpeech:
	.string "DRAKE: This is the end of \n"
	.string "the game…\p"
	.string "THANK YOU! $"


