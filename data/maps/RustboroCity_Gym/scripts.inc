# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEC, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 11 "data/maps/RustboroCity_Gym/scripts.pory"

# 12 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 27 "data/maps/RustboroCity_Gym/scripts.pory"

# 28 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_TM_STEALTH_ROCK
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_QUICK_CLAW
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_RAZOR_CLAW
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_BINDING_BAND
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	additem ITEM_BIG_ROOT
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 39 "data/maps/RustboroCity_Gym/scripts.pory"

# 40 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 44 "data/maps/RustboroCity_Gym/scripts.pory"

# 45 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 49 "data/maps/RustboroCity_Gym/scripts.pory"

# 50 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 54 "data/maps/RustboroCity_Gym/scripts.pory"

# 55 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Gym/scripts.pory"

# 63 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 67 "data/maps/RustboroCity_Gym/scripts.pory"

# 68 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 73 "data/maps/RustboroCity_Gym/scripts.pory"

# 74 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 79 "data/maps/RustboroCity_Gym/scripts.pory"

# 80 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 84 "data/maps/RustboroCity_Gym/scripts.pory"

# 85 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 89 "data/maps/RustboroCity_Gym/scripts.pory"

# 90 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC, the GYM LEADER, is a user\n"
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"

# 112 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"

# 124 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"

# 128 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"

# 131 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"

# 135 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ALEC!$"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"

# 139 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"

# 142 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC is stronger than me by\n"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"

# 147 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"

# 153 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Feels like kicking rocks!$"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"

# 157 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at his old age.$"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"

# 162 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ALEC, the RUSTBORO\n"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER after sailing\n"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "and missing the land so much that\l"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I now carry ROCK-types in battle.\p"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Do you smell what the ROCK\l"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "is cooking?$"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"

# 171 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You broke the ROCK's back..."
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"

# 179 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ALEC.$"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"

# 183 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\n"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "power of your POKéMON.\p"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It also enables them to use the HM move\n"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "CUT outside of battle.\p"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"

# 190 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE,\n"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains STEALTH ROCK.\p"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It sets up floating rocks that\n"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "damages POKéMON who switch in.\p"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"

# 198 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"

# 204 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"

# 207 "data/maps/RustboroCity_Gym/scripts.pory"

# 208 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC'S CERTIFIED TRAINERS:\n"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"

# 213 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ALEC: Oh, hello, {PLAYER}?\n"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ALEC of RUSTBORO CITY.\p"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"

RustboroCity_Gym_Text_Eevee::
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Eevee_Text_0
	return


RustboroCity_Gym_Text_Eevee_Text_0:
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROCKY HORROR SHOW$"
