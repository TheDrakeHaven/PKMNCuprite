AeroBase_1F_MapScripts::
	.byte 0

TrainerHill_EventScript_Grunt1::
	trainerbattle_single TRAINER_WINONA_2, TrainerHill_GruntIntro, TrainerHill_GruntDefeat
	msgbox TrainerHill_GruntPost, MSGBOX_AUTOCLOSE
	end

TrainerHill_EventScript_Grunt2::
	trainerbattle_single TRAINER_WINONA_3, TrainerHill_GruntIntro2, TrainerHill_GruntDefeat2
	msgbox TrainerHill_GruntPost2, MSGBOX_AUTOCLOSE
	end

TrainerHill_EventScript_Grunt3::
	trainerbattle_single TRAINER_WINONA_4, TrainerHill_GruntIntro, TrainerHill_GruntDefeat
	msgbox TrainerHill_GruntPost, MSGBOX_AUTOCLOSE
	end

TrainerHill_EventScript_Grunt4::
	trainerbattle_single TRAINER_WINONA_5, TrainerHill_GruntIntro2, TrainerHill_GruntDefeat2
	msgbox TrainerHill_GruntPost2, MSGBOX_AUTOCLOSE
	end

