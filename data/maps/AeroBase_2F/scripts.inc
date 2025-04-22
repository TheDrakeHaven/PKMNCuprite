AeroBase_2F_MapScripts::
	.byte 0

TrainerHill_EventScript_Grunt5::
	trainerbattle_single TRAINER_TATE_AND_LIZA_2, TrainerHill_GruntIntro2, TrainerHill_GruntDefeat2
	msgbox TrainerHill_GruntPost2, MSGBOX_AUTOCLOSE
	end

TrainerHill_EventScript_Grunt6::
	trainerbattle_single TRAINER_TATE_AND_LIZA_3, TrainerHill_GruntIntro, TrainerHill_GruntDefeat
	msgbox TrainerHill_GruntPost, MSGBOX_AUTOCLOSE
	end

TrainerHill_EventScript_Grunt7::
	trainerbattle_single TRAINER_TATE_AND_LIZA_4, TrainerHill_GruntIntro2, TrainerHill_GruntDefeat2
	msgbox TrainerHill_GruntPost2, MSGBOX_AUTOCLOSE
	end

TrainerHill_EventScript_Ghostess::
	trainerbattle_single TRAINER_LUCY, TrainerHill_GhostessIntro, TrainerHill_GhostessDefeat, TrainerHill_ghostgift
	msgbox TrainerHill_GhostessPost, MSGBOX_DEFAULT
	release
	end

TrainerHill_ghostgift::
	giveitem ITEM_TM_HEX
	giveitem ITEM_TM_ENERGY_BALL
	multichoicedefault 5, 10, MULTI_GHOSTESS, 0, TRUE
	switch VAR_RESULT
	case 0, TrainerHill_EventScript_GhostessItem1
	case 1, TrainerHill_EventScript_GhostessItem2
	case 2, TrainerHill_EventScript_GhostessItem3
	case 3, TrainerHill_EventScript_GhostessItem4
	release
	end

TrainerHill_EventScript_GhostessItem1::
	msgbox TrainerHill_Text_GhostItem MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_LOADED_DICE
	release
	end

TrainerHill_EventScript_GhostessItem2::
	msgbox TrainerHill_Text_GhostItem MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_METRONOME
	release
	end

TrainerHill_EventScript_GhostessItem3::
	msgbox TrainerHill_Text_GhostItem MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_FLAME_ORB
	release
	end

TrainerHill_EventScript_GhostessItem4::
	msgbox TrainerHill_Text_GhostItem MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TOXIC_ORB
	release
	end

TrainerHill_Text_GhostItem:
	.string "I thrifted these from \n"
	.string "An old casino!$"

