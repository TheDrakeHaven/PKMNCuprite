# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_UNUSED_0x265
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEC, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, RustboroCity_Gym_EventScript_RoxanneRematch
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_ALEC_REMATCH, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, GymRematch_Text_NotEnoughPokemon
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_UNUSED_0x265
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 20 "data/maps/RustboroCity_Gym/scripts.pory"

# 21 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_UNUSED_0x265
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 37 "data/maps/RustboroCity_Gym/scripts.pory"

# 38 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_STEALTH_ROCK
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ACCELEROCK
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	multichoicedefault 0, 0, MULTI_GYM1, 0, TRUE
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	case 0, RustboroCity_Gym_EventScript_AlecItem1
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, RustboroCity_Gym_EventScript_AlecItem2
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	case 2, RustboroCity_Gym_EventScript_AlecItem3
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	case 3, RustboroCity_Gym_EventScript_AlecItem4
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Gym/scripts.pory"

# 52 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_AlecItem1::
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_AlecItem MSGBOX_DEFAULT
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 58 "data/maps/RustboroCity_Gym/scripts.pory"

# 59 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_AlecItem2::
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_AlecItem MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_RAZOR_CLAW
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Gym/scripts.pory"

# 66 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_AlecItem3::
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_AlecItem MSGBOX_DEFAULT
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_BINDING_BAND
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 72 "data/maps/RustboroCity_Gym/scripts.pory"

# 73 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_AlecItem4::
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_AlecItem MSGBOX_DEFAULT
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_BIG_ROOT
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 79 "data/maps/RustboroCity_Gym/scripts.pory"

# 80 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 84 "data/maps/RustboroCity_Gym/scripts.pory"

# 85 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 89 "data/maps/RustboroCity_Gym/scripts.pory"

# 90 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 94 "data/maps/RustboroCity_Gym/scripts.pory"

# 95 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 102 "data/maps/RustboroCity_Gym/scripts.pory"

# 103 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 107 "data/maps/RustboroCity_Gym/scripts.pory"

# 108 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 113 "data/maps/RustboroCity_Gym/scripts.pory"

# 114 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 119 "data/maps/RustboroCity_Gym/scripts.pory"

# 120 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 124 "data/maps/RustboroCity_Gym/scripts.pory"

# 125 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 129 "data/maps/RustboroCity_Gym/scripts.pory"

# 130 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC, the GYM LEADER, is a user\n"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"

# 152 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"

# 164 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"

# 168 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"

# 171 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"

# 175 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ALEC!$"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"

# 179 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"

# 182 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC is stronger than me by\n"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"

# 187 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"

# 193 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Feels like kicking rocks!$"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"

# 197 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for him to\n"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at his old age.$"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"

# 202 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ALEC, the RUSTBORO\n"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER after sailing\p"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "and missing the land so much that\n"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I now carry ROCK-types in battle.\p"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Do you smell what the ROCK\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "is cooking?$"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"

# 211 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You broke the ROCK's back...\p"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"

# 219 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ALEC.$"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"

# 223 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE enables\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "your POKéMON to use the HM CUT.\p"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take these with you, too.$"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"

# 228 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE,\n"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains STEALTH ROCK.\p"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It sets up floating rocks that\n"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "damages POKéMON who switch in.\p"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"

# 236 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.\p"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Now take an item as well.$"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"

# 243 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"

# 246 "data/maps/RustboroCity_Gym/scripts.pory"

# 247 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC'S CERTIFIED TRAINERS:\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"

# 252 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_AlecItem:
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Use it well.$"
