AeroBase_Roof_MapScripts::
	.byte 0

TrainerHill_Roof_EventScript_Owner::
	lock
	faceplayer
	trainerbattle_single TRAINER_BRANDON, TrainerHill_JordanIntro, TrainerHill_JordanDefeated
	setflag FLAG_UNUSED_0x02C
	call starterfade
	release
	end

starterfade::
	fadescreen FADE_TO_BLACK
	delay 20
	fadescreen FADE_FROM_BLACK
	return
