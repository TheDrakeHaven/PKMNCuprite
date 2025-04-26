.set LOCALID_JORDAN, 8

EcruDune_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Ecrudune_OnTransition
	.byte 0


Ecrudune_OnTransition::
	call_if_set FLAG_BADGE05_GET, Ecrudune_EventScript_MoveJordantoDesert
	end


Ecrudune_EventScript_MoveJordantoDesert::
	clearflag FLAG_UNUSED_0x025
	end

Ecrudune_EventScript_Jordanbacks::
	msgbox Ecrudune_Text_Jordanback, MSGBOX_NPC
	closemessage
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
	setflag FLAG_UNUSED_0x025
	release
	end

Route135_EventScript_SunTrigger::
	setweather WEATHER_SUNNY
	doweather
	end

Route135_EventScript_SandTrigger::
	setweather WEATHER_SANDSTORM
	fadenewbgm MUS_DESERT
	doweather
	end

Ecrudune_EventScript_TownSign::
	msgbox Ecrudune_Text_TownSign, MSGBOX_SIGN 
	end

Ecrudune_EventScript_Sondheim::
	trainerbattle_single TRAINER_SONDHEIM, Ecrudune_Text_SondheimIntro, Ecrudune_Text_SondheimDefeated
	msgbox Ecrudune_Text_SondheimPostBattle, MSGBOX_AUTOCLOSE
	end

Ecrudune_EventScript_Asher::
	trainerbattle_single TRAINER_ASHER, Ecrudune_Text_AsherIntro, Ecrudune_Text_AsherDefeated
	msgbox Ecrudune_Text_AsherPostBattle, MSGBOX_AUTOCLOSE
	end

Ecrudune_EventScript_Bridgette::
	trainerbattle_single TRAINER_BRIDGETTE, Ecrudune_Text_BridgetteIntro, Ecrudune_Text_BridgetteDefeated
	msgbox Ecrudune_Text_BridgettePostBattle, MSGBOX_AUTOCLOSE
	end

Ecrudune_EventScript_Flavia::
	trainerbattle_single TRAINER_FLAVIA, Ecrudune_Text_FlaviaIntro, Ecrudune_Text_FlaviaDefeated
	msgbox Ecrudune_Text_FlaviaPostBattle, MSGBOX_AUTOCLOSE
	end

Ecrudune_EventScript_Olive::
	trainerbattle_single TRAINER_OLIVE, Ecrudune_Text_OliveIntro, Ecrudune_Text_OliveDefeated
	msgbox Ecrudune_Text_OlivePostBattle, MSGBOX_AUTOCLOSE
	end

Ecrudune_EventScript_Viola::
	trainerbattle_single TRAINER_VIOLA, Ecrudune_Text_ViolaIntro, Ecrudune_Text_ViolaDefeated
	msgbox Ecrudune_Text_ViolaPostBattle, MSGBOX_AUTOCLOSE
	end

Ecrudune_EventScript_Reiju::
	trainerbattle_single TRAINER_REIJU, Ecrudune_Text_ReijuIntro, Ecrudune_Text_ReijuDefeated
	msgbox Ecrudune_Text_ReijuPostBattle, MSGBOX_AUTOCLOSE
	end

Ecrudune_Text_TownSign:
	.string "Welcome to the dryest \n"
	.string "place in HOENN, ECRUDUNE TOWN!$"

Ecrudune_Text_Jordanback::
	.string "All I ever wished for was \n"
	.string "a way to free this area of sand.\p"
	.string "Have you come to mock me? \n"
	.string "I just wanted to help my people.\p"
	.string "I now have my means, so I must act!$"


