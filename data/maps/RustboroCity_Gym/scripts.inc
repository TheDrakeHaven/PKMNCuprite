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
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 12 "data/maps/RustboroCity_Gym/scripts.pory"

# 13 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_UNUSED_0x265
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 29 "data/maps/RustboroCity_Gym/scripts.pory"

# 30 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_TM_STEALTH_ROCK
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_TM_ACCELEROCK
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_QUICK_CLAW
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_RAZOR_CLAW
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_BINDING_BAND
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_BIG_ROOT
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Gym/scripts.pory"

# 43 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 47 "data/maps/RustboroCity_Gym/scripts.pory"

# 48 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 52 "data/maps/RustboroCity_Gym/scripts.pory"

# 53 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 57 "data/maps/RustboroCity_Gym/scripts.pory"

# 58 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Gym/scripts.pory"

# 66 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 70 "data/maps/RustboroCity_Gym/scripts.pory"

# 71 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 76 "data/maps/RustboroCity_Gym/scripts.pory"

# 77 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 82 "data/maps/RustboroCity_Gym/scripts.pory"

# 83 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 87 "data/maps/RustboroCity_Gym/scripts.pory"

# 88 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 92 "data/maps/RustboroCity_Gym/scripts.pory"

# 93 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC, the GYM LEADER, is a user\n"
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"

# 115 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"

# 127 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"

# 131 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"

# 134 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"

# 138 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ALEC!$"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"

# 142 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"

# 145 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC is stronger than me by\n"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"

# 150 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"

# 156 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Feels like kicking rocks!$"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"

# 160 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at his old age.$"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"

# 165 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ALEC, the RUSTBORO\n"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER after sailing\n"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "and missing the land so much that\l"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I now carry ROCK-types in battle.\p"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Do you smell what the ROCK\l"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "is cooking?$"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"

# 174 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You broke the ROCK's back..."
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"

# 182 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ALEC.$"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"

# 186 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\n"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "power of your POKéMON.\p"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It also enables them to use the HM move\n"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "CUT outside of battle.\p"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"

# 193 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE,\n"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains STEALTH ROCK.\p"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It sets up floating rocks that\n"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "damages POKéMON who switch in.\p"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"

# 201 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"

# 207 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"

# 210 "data/maps/RustboroCity_Gym/scripts.pory"

# 211 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC'S CERTIFIED TRAINERS:\n"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"

# 216 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC: Oh, hello, {PLAYER}?\n"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ALEC of RUSTBORO CITY.\p"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"

RustboroCity_Gym_Text_Eevee::
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Eevee_Text_0
	return


RustboroCity_Gym_Text_Eevee_Text_0:
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROCKY HORROR SHOW$"
