Route124_DivingTreasureHuntersHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_DivingTreasureHuntersHouse_OnTransition
	.byte 0

Route124_DivingTreasureHuntersHouse_OnTransition:
	setflag FLAG_LANDMARK_HUNTERS_HOUSE
	end

Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter::
	lock
	faceplayer
	goto_if_set FLAG_MET_DIVING_TREASURE_HUNTER, Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting
	msgbox Route124_DivingTreasureHuntersHouse_Text_Greeting, MSGBOX_DEFAULT
	setflag FLAG_MET_DIVING_TREASURE_HUNTER
	goto Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting
	end

Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting::
	msgbox Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards, MSGBOX_DEFAULT
	release
	end

Route124_DivingTreasureHuntersHouse_Text_Greeting:
	.string "I'm the DIVING TREASURE HUNTER!\p"
	.string "I'm the awesome dude who makes\n"
	.string "deep-sea dives to gather treasures\l"
	.string "resting at the bottom.$"

Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards:
	.string "You should beat MARK in Mossdeep\n"
	.string "so you can dive too!\p"
	.string "Treasure hunt time!$"
