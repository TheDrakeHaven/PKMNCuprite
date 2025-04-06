TrainerHill_Roof_MapScripts::
	.byte 0

TrainerHill_Roof_EventScript_Owner::
	lock
	faceplayer
	trainerbattle_single TRAINER_BRANDON, TrainerHill_JordanIntro, TrainerHill_JordanDefeated,
	goto TrainerHill_Roof_Text_YouFinallyCameBravo
	end

TrainerHill_Roof_EventScript_Arrived::
	msgbox TrainerHill_Roof_Text_YouFinallyCameBravo, MSGBOX_DEFAULT
	release
	end


