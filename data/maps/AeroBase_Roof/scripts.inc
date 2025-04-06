AeroBase_Roof_MapScripts::
	.byte 0

TrainerHill_Roof_EventScript_Owner::
	lock
	faceplayer
	trainerbattle_single TRAINER_BRANDON, TrainerHill_JordanIntro, TrainerHill_JordanDefeated
	setflag FLAG_UNUSED_0x02C
	end
