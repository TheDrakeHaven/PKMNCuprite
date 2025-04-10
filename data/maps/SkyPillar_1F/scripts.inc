SkyPillar_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_1F_OnTransition
	.byte 0

SkyPillar_1F_OnTransition:
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_1F_EventScript_CleanFloor
	end

SkyPillar_1F_EventScript_CleanFloor::
	setmaplayoutindex LAYOUT_SKY_PILLAR_1F_CLEAN
	return

TrainerHill_EventScript_GruntE::
	trainerbattle_single TRAINER_GRUNT_A, TrainerHill_GruntIntro, TrainerHill_GruntDefeat
	msgbox TrainerHill_GruntPost, MSGBOX_AUTOCLOSE
	end

