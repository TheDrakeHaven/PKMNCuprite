TrainerHill_2F_MapScripts::
	.byte 0

TrainerHill_EventScript_Grunt5::
	trainerbattle_single TRAINER_TATE_AND_LIZA_2, TrainerHill_GruntIntro, TrainerHill_GruntDefeat
	msgbox TrainerHill_GruntPost, MSGBOX_AUTOCLOSE
	end

TrainerHill_EventScript_Grunt6::
	trainerbattle_single TRAINER_TATE_AND_LIZA_3, TrainerHill_GruntIntro, TrainerHill_GruntDefeat
	msgbox TrainerHill_GruntPost, MSGBOX_AUTOCLOSE
	end

TrainerHill_EventScript_Grunt7::
	trainerbattle_single TRAINER_TATE_AND_LIZA_4, TrainerHill_GruntIntro, TrainerHill_GruntDefeat
	msgbox TrainerHill_GruntPost, MSGBOX_AUTOCLOSE
	end

TrainerHill_EventScript_Ghostess::
	trainerbattle_single TRAINER_LUCY, TrainerHill_GhostessIntro, TrainerHill_GhostessDefeat
	msgbox TrainerHill_GhostessPost, MSGBOX_AUTOCLOSE
	end

