SkyPillar_5F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_5F_OnTransition
	.byte 0

SkyPillar_5F_OnTransition:
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_5F_EventScript_CleanFloor
	return

SkyPillar_5F_EventScript_CleanFloor::
	setmaplayoutindex LAYOUT_SKY_PILLAR_5F_CLEAN
	return

TrainerHill_EventScript_GruntA::
	trainerbattle_single TRAINER_GRUNT_E, TrainerHill_GruntIntro2, TrainerHill_GruntDefeat2
	msgbox TrainerHill_GruntPost2, MSGBOX_AUTOCLOSE
	end
