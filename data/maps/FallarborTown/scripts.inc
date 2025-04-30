FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x479, FallarborTown_EventScript_Gentleman_8
	msgbox FallarborTown_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
	closemessage
	multichoice 0, 0, MULTI_EEVEE_STONE3, 0
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_EventScript_Gentleman_2
	compare VAR_RESULT, 1
	goto_if_eq FallarborTown_EventScript_Gentleman_3
	compare VAR_RESULT, 2
	goto_if_eq FallarborTown_EventScript_Gentleman_4
	compare VAR_RESULT, 3
	goto_if_eq FallarborTown_EventScript_Gentleman_5
	compare VAR_RESULT, 4
	goto_if_eq FallarborTown_EventScript_Gentleman_6
	compare VAR_RESULT, 5
	goto_if_eq FallarborTown_EventScript_Gentleman_7
	compare VAR_RESULT, 6

FallarborTown_EventScript_Gentleman_1:
	setflag FLAG_UNUSED_0x479
	release
	end

FallarborTown_EventScript_Gentleman_2:
	giveitem ITEM_DAWN_STONE
	goto FallarborTown_EventScript_Gentleman_1

FallarborTown_EventScript_Gentleman_3:
	giveitem ITEM_DUSK_STONE
	goto FallarborTown_EventScript_Gentleman_1

FallarborTown_EventScript_Gentleman_4:
	giveitem ITEM_SHINY_STONE
	goto FallarborTown_EventScript_Gentleman_1

FallarborTown_EventScript_Gentleman_5:
	giveitem ITEM_SUN_STONE
	goto FallarborTown_EventScript_Gentleman_1

FallarborTown_EventScript_Gentleman_6:
	giveitem ITEM_MOON_STONE
	goto FallarborTown_EventScript_Gentleman_1

FallarborTown_EventScript_Gentleman_7:
	giveitem ITEM_LEAF_STONE
	goto FallarborTown_EventScript_Gentleman_1

FallarborTown_EventScript_Gentleman_8:
	msgbox FallarborTown_Text_MyPreciousStones, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

FallarborTown_Text_MyPreciousStones:
	.string "Wow! Passing over that \n"
	.string "stone to you felt so good!\p"
	.string "I hope I never have another!$"

FallarborTown_Text_TeachingMonAboutTrend:
	.string "AHHHHHHHH!\n"
	.string "It hurts really bad!\p"
	.string "Will you take one of these.\n"
	.string "stones from me\l"
	.string "oh my, PLEASE?\p"
	.string "They are very sharp\n"
	.string "and painful.$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged JOSE,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The guys's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see JOSE\n"
	.string "become a great TRAINER in his own\l"
	.string "right.$"

FallarborTown_Text_TownSign:
	.string "FALLARBOR TOWN\n"
	.string "“A farm community with small gardens.”$"

FallarborTown_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"

