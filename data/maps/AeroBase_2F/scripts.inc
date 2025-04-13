AeroBase_2F_MapScripts::
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
	trainerbattle_single TRAINER_LUCY, TrainerHill_GhostessIntro, TrainerHill_GhostessDefeat, TrainerHill_ghostgift
	msgbox TrainerHill_GhostessPost, MSGBOX_DEFAULT
	release
	end

TrainerHill_ghostgift::
	additem ITEM_TM_HEX
	additem ITEM_TM_ENERGY_BALL
	additem ITEM_LOADED_DICE
	additem ITEM_METRONOME
	additem ITEM_FLAME_ORB
	additem ITEM_DESTINY_KNOT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	release
	end



