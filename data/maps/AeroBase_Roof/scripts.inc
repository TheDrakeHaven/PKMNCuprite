.set LOCALID_JORDAN, 1

AeroBase_Roof_MapScripts::
	.byte 0

TrainerHill_Roof_EventScript_Owner::
	lock
	faceplayer
	setflag FLAG_UNUSED_0x265
	trainerbattle_single TRAINER_JORDAN, TrainerHill_JordanIntro, TrainerHill_JordanDefeated, AeroBase_EventScript_Jordanescape
	clearflag FLAG_UNUSED_0x265
	release
	end

starterfade::
	fadescreen FADE_TO_BLACK
	delay 20
	fadescreen FADE_FROM_BLACK
	return

AeroBase_EventScript_Jordanescape::
	setvar VAR_0x8008, LOCALID_JORDAN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	delay 20
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	removeobject VAR_0x8008
	delay 20
	call starterfade
	delay 20
	setflag FLAG_UNUSED_0x02C
	clearflag FLAG_UNUSED_0x265
	setflag FLAG_UNUSED_0x025
	release
	end

