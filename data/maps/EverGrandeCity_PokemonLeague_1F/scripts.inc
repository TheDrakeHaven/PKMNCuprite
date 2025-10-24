.set LOCALID_NURSE, 1
.set LOCALID_GUARD_1, 3
.set LOCALID_GUARD_2, 4
.set LOCALID_MOVE_RELEARNER, 5
.set LOCAL_ID_DRAKEGUARD, 6

EverGrandeCity_PokemonLeague_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EverGrandeCity_PokemonLeague_1F_OnTransition:
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	removeitem ITEM_POKEMON_BOX_LINK
	call_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
	call_if_unset FLAG_UNUSED_0x0E9, EverGrandeCity_PokemonLeague_1F_EventScript_DrakeGuardsBlockDoor
	end

EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
	setobjectxyperm LOCALID_GUARD_1, 9, 2
	setobjectxyperm LOCALID_GUARD_2, 10, 2
	return

EverGrandeCity_PokemonLeague_1F_EventScript_DrakeGuardsBlockDoor::
	setobjectxyperm LOCAL_ID_DRAKEGUARD, 15, 2
	return

EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
EverGrandeCity_PokemonLeague_1F_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	pokemartlistend

@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
@ Its assumed the player has the remaining badges
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
	lockall
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
	waitmessage
	delay 120
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
	closemessage
	applymovement LOCALID_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
	applymovement LOCALID_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
	waitmovement 0
	delay 10
	playfanfare MUS_OBTAIN_BADGE
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
	waitmessage
	waitfanfare
	closemessage
	copyobjectxytoperm LOCALID_GUARD_1
	copyobjectxytoperm LOCALID_GUARD_2
	setflag FLAG_ENTERED_ELITE_FOUR
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_DrakeGuard::
	lockall
	goto_if_set FLAG_UNUSED_0x0E9, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
	call EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeftdr
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveChamp
	waitmessage
	delay 30
	goto_if_unset FLAG_UNUSED_0x4EB, EverGrandeCity_PokemonLeague_1F_EventScript_NotChamp
	closemessage
	applymovement LOCAL_ID_DRAKEGUARD, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWayDRAKE
	waitmovement 0
	delay 10
	playfanfare MUS_OBTAIN_BADGE
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
	waitmessage
	waitfanfare
	closemessage
	copyobjectxytoperm LOCAL_ID_DRAKEGUARD
	setflag FLAG_UNUSED_0x0E9
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeftdr::
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeftdr
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
	playse SE_FAILURE
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_NotChamp::
	playse SE_FAILURE
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedChamp, MSGBOX_DEFAULT
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
	walk_down
	walk_left
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
	walk_down
	walk_right
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeftdr:
	walk_down
	walk_down
	walk_up
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
	walk_left
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
	walk_right
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWayDRAKE::
	walk_in_place_faster_down
	walk_right
	step_end

EverGrandeCity_PokemonLeague_1F_EventScript_MoveRelearner::
	lockall
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, EverGrandeCity_PokemonLeague_1F_EventScript_AskTeachMove
	msgbox EverGrandeCity_PokemonLeague_1F_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto EverGrandeCity_PokemonLeague_1F_EventScript_AskTeachMove
	end

EverGrandeCity_PokemonLeague_1F_EventScript_AskTeachMove::
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, EverGrandeCity_PokemonLeague_1F_EventScript_ComeBackWithHeartScale
	msgbox EverGrandeCity_PokemonLeague_1F_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, EverGrandeCity_PokemonLeague_1F_EventScript_ComeBackWithHeartScale
	goto EverGrandeCity_PokemonLeague_1F_EventScript_ChooseMon
	end

EverGrandeCity_PokemonLeague_1F_EventScript_ChooseMon::
	msgbox EverGrandeCity_PokemonLeague_1F_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EverGrandeCity_PokemonLeague_1F_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, EverGrandeCity_PokemonLeague_1F_EventScript_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, EverGrandeCity_PokemonLeague_1F_EventScript_NoMoveToTeachMon
	goto EverGrandeCity_PokemonLeague_1F_EventScript_ChooseMove
	end

EverGrandeCity_PokemonLeague_1F_EventScript_ChooseMove::
	msgbox EverGrandeCity_PokemonLeague_1F_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, EverGrandeCity_PokemonLeague_1F_EventScript_ChooseMon
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	goto EverGrandeCity_PokemonLeague_1F_EventScript_ComeBackWithHeartScale
	end

EverGrandeCity_PokemonLeague_1F_EventScript_NoMoveToTeachMon::
	msgbox EverGrandeCity_PokemonLeague_1F_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto EverGrandeCity_PokemonLeague_1F_EventScript_ChooseMon
	end

EverGrandeCity_PokemonLeague_1F_EventScript_CantTeachEgg::
	msgbox EverGrandeCity_PokemonLeague_1F_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto EverGrandeCity_PokemonLeague_1F_EventScript_ChooseMon
	end

EverGrandeCity_PokemonLeague_1F_EventScript_ComeBackWithHeartScale::
	msgbox EverGrandeCity_PokemonLeague_1F_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_Text_ImTheMoveTutor:
	.string "I'm JUAN.\p"
	.string "I know all the moves that POKéMON\n"
	.string "learn--every one of them--and I can\l"
	.string "teach POKéMON those moves.\p"
	.string "I can teach a move to a POKéMON\n"
	.string "of yours if you'd like.\p"
	.string "I'll do it for a HEART SCALE.$"

EverGrandeCity_PokemonLeague_1F_Text_ThatsAHeartScaleWantMeToTeachMove:
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness HEART SCALE!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

EverGrandeCity_PokemonLeague_1F_Text_TutorWhichMon:
	.string "Which POKéMON needs tutoring?$"

EverGrandeCity_PokemonLeague_1F_Text_TeachWhichMove:
	.string "Which move should I teach?$"

EverGrandeCity_PokemonLeague_1F_Text_DontHaveMoveToTeachPokemon:
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that POKéMON.$"

EverGrandeCity_PokemonLeague_1F_Text_HandedOverHeartScale:
	.string "{PLAYER} handed over one HEART SCALE\n"
	.string "in exchange.$"

EverGrandeCity_PokemonLeague_1F_Text_ComeBackWithHeartScale:
	.string "If your POKéMON need to learn a move,\n"
	.string "come back with a HEART SCALE.$"

EverGrandeCity_PokemonLeague_1F_Text_CantTeachEgg:
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an EGG.$"

EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
	.string "Beyond this point, only those TRAINERS\n"
	.string "who have collected all the GYM BADGES\l"
	.string "are permitted to enter.\p"
	.string "TRAINER, let us confirm that you have\n"
	.string "all the GYM BADGES.$"

EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges:
	.string "You haven't obtained all the BADGES.\p"
	.string "If you're bound for the POKéMON\n"
	.string "LEAGUE, you must return with them.$"

EverGrandeCity_PokemonLeague_1F_Text_GoForth:
	.string "TRAINER! Believe in yourself and your\n"
	.string "POKéMON, and go forth!$"

EverGrandeCity_PokemonLeague_1F_Text_MustHaveChamp:
	.string "Beyond this point, only those TRAINERS\n"
	.string "who have defeated the Champion\l"
	.string "are permitted to enter.\p"
	.string "TRAINER, let us confirm that you have\n"
	.string "become the Champion.$"

EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedChamp:
	.string "You haven't deafeated the Champion.\p"
	.string "If you're bound for the DRAKE\n"
	.string "LEAGUE, you must return with it.$"
