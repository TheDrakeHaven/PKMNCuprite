NewBirchesLab_MapScripts::
# 2 "data/maps/NewBirchesLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBircheslab_EventScript_Pokeball
	.byte 0


NewBircheslab_EventScript_Pokeball::
# 6 "data/maps/NewBirchesLab/scripts.pory"
	setvar STARTER_TYPE, 0
	return


NewProfessor_EventScript_Birch::
# 10 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 11 "data/maps/NewBirchesLab/scripts.pory"
	faceplayer
# 12 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewProfessor_EventScript_Birch_4
NewProfessor_EventScript_Birch_3:
# 31 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_2, MSGBOX_NPC
NewProfessor_EventScript_Birch_1:
# 33 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 34 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_Birch_2:
# 13 "data/maps/NewBirchesLab/scripts.pory"
	message NewProfessor_EventScript_Birch_Text_0
# 14 "data/maps/NewBirchesLab/scripts.pory"
	multichoice 7, 2, MULTI_STARTER_CHOICE, 0
# 15 "data/maps/NewBirchesLab/scripts.pory"
	closemessage
# 16 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewProfessor_EventScript_Birch_12
# 19 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewProfessor_EventScript_Birch_13
# 22 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewProfessor_EventScript_Birch_14
NewProfessor_EventScript_Birch_11:
# 25 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_1
# 26 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 27 "data/maps/NewBirchesLab/scripts.pory"
	release
	goto NewProfessor_EventScript_Birch_1

NewProfessor_EventScript_Birch_4:
# 12 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewProfessor_EventScript_Birch_6
	goto NewProfessor_EventScript_Birch_3

NewProfessor_EventScript_Birch_6:
# 12 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewProfessor_EventScript_Birch_8
	goto NewProfessor_EventScript_Birch_3

NewProfessor_EventScript_Birch_8:
# 12 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x023, NewProfessor_EventScript_Birch_2
	goto NewProfessor_EventScript_Birch_3

NewProfessor_EventScript_Birch_12:
# 17 "data/maps/NewBirchesLab/scripts.pory"
	setvar STARTER_TYPE, 0
	goto NewProfessor_EventScript_Birch_11

NewProfessor_EventScript_Birch_13:
# 20 "data/maps/NewBirchesLab/scripts.pory"
	setvar STARTER_TYPE, 1
	goto NewProfessor_EventScript_Birch_11

NewProfessor_EventScript_Birch_14:
# 23 "data/maps/NewBirchesLab/scripts.pory"
	setvar STARTER_TYPE, 2
	goto NewProfessor_EventScript_Birch_11


NewProfessor_EventScript_Totodile::
# 40 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 41 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 42 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Totodile_1
# 64 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 65 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Totodile_1:
# 43 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_EXP_SHARE
# 44 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Totodile_4
# 51 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Totodile_5
# 59 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 60 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Totodile_4:
# 45 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_1
# 47 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 48 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 49 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Totodile_5:
# 52 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 53 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_1
# 54 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 55 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 56 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Squirtle::
# 71 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 72 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 73 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Squirtle_1
# 95 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 96 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Squirtle_1:
# 74 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_EXP_SHARE
# 75 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Squirtle_4
# 82 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Squirtle_5
# 90 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 91 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Squirtle_4:
# 76 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 77 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_1
# 78 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 79 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 80 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Squirtle_5:
# 83 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 84 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_1
# 85 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 86 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 87 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Chikorita::
# 102 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 103 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 104 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Chikorita_1
# 126 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 127 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Chikorita_1:
# 105 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_EXP_SHARE
# 106 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Chikorita_4
# 113 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Chikorita_5
# 121 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 122 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Chikorita_4:
# 107 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 108 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_1
# 109 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 110 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 111 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Chikorita_5:
# 114 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 115 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_1
# 116 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 117 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 118 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Bulbasaur::
# 133 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 134 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 135 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Bulbasaur_1
# 157 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 158 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Bulbasaur_1:
# 136 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5, ITEM_EXP_SHARE
# 137 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Bulbasaur_4
# 144 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Bulbasaur_5
# 152 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 153 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Bulbasaur_4:
# 138 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_1
# 140 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 141 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 142 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Bulbasaur_5:
# 145 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 146 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_1
# 147 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 148 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 149 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Cyndaquil::
# 163 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 164 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 165 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Cyndaquil_1
# 187 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 188 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Cyndaquil_1:
# 166 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_EXP_SHARE
# 167 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Cyndaquil_4
# 174 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Cyndaquil_5
# 182 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 183 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Cyndaquil_4:
# 168 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 169 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_1
# 170 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 171 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 172 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Cyndaquil_5:
# 175 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 176 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_1
# 177 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 178 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 179 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Turtwig::
# 195 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 196 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_0, MSGBOX_YESNO
# 197 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Turtwig_1
# 219 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 220 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Turtwig_1:
# 198 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_EXP_SHARE
# 199 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Turtwig_4
# 206 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Turtwig_5
# 214 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 215 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Turtwig_4:
# 200 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_1
# 202 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 203 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 204 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Turtwig_5:
# 207 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 208 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_1
# 209 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 210 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 211 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Chimchar::
# 226 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 227 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 228 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Chimchar_1
# 250 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 251 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Chimchar_1:
# 229 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5, ITEM_EXP_SHARE
# 230 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Chimchar_4
# 237 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Chimchar_5
# 245 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 246 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Chimchar_4:
# 231 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 232 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chimchar_Text_1
# 233 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 234 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 235 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Chimchar_5:
# 238 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 239 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chimchar_Text_1
# 240 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 241 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 242 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Piplup::
# 256 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 257 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Piplup_Text_0, MSGBOX_YESNO
# 258 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Piplup_1
# 280 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 281 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Piplup_1:
# 259 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5, ITEM_EXP_SHARE
# 260 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Piplup_4
# 267 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Piplup_5
# 275 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 276 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Piplup_4:
# 261 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 262 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Piplup_Text_1
# 263 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 264 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 265 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Piplup_5:
# 268 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 269 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Piplup_Text_1
# 270 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 271 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 272 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Snivy::
# 287 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 288 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 289 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Snivy_1
# 311 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 312 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Snivy_1:
# 290 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_SNIVY, 5, ITEM_EXP_SHARE
# 291 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Snivy_4
# 298 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Snivy_5
# 306 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 307 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Snivy_4:
# 292 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 293 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Snivy_Text_1
# 294 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 295 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 296 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Snivy_5:
# 299 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 300 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Snivy_Text_1
# 301 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 302 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 303 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Charmander::
# 318 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 319 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 320 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Charmander_1
# 342 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 343 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Charmander_1:
# 321 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_EXP_SHARE
# 322 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Charmander_4
# 329 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Charmander_5
# 337 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 338 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Charmander_4:
# 323 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 324 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_1
# 325 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 326 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 327 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Charmander_5:
# 330 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 331 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_1
# 332 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 333 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 334 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Tepig::
# 349 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 350 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Tepig_Text_0, MSGBOX_YESNO
# 351 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Tepig_1
# 373 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 374 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Tepig_1:
# 352 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_TEPIG, 5, ITEM_EXP_SHARE
# 353 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Tepig_4
# 360 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Tepig_5
# 368 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 369 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Tepig_4:
# 354 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 355 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Tepig_Text_1
# 356 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 357 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 358 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Tepig_5:
# 361 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 362 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Tepig_Text_1
# 363 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 364 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 365 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Oshawott::
# 379 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 380 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 381 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Oshawott_1
# 403 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 404 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Oshawott_1:
# 382 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_EXP_SHARE
# 383 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Oshawott_4
# 390 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Oshawott_5
# 398 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 399 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Oshawott_4:
# 384 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 385 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 386 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 387 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 388 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Oshawott_5:
# 391 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 392 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 393 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 394 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 395 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_PokeballOne::
# 409 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 410 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewProfessor_EventScript_PokeballOne_4
NewProfessor_EventScript_PokeballOne_3:
# 422 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballOne_1:
# 424 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 425 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballOne_2:
# 411 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 1
	goto_if_eq NewProfessor_EventScript_PokeballOne_11
# 414 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 0
	goto_if_eq NewProfessor_EventScript_PokeballOne_12
# 417 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 2
	goto_if_eq NewProfessor_EventScript_PokeballOne_13
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_4:
# 410 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewProfessor_EventScript_PokeballOne_6
	goto NewProfessor_EventScript_PokeballOne_3

NewProfessor_EventScript_PokeballOne_6:
# 410 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewProfessor_EventScript_PokeballOne_8
	goto NewProfessor_EventScript_PokeballOne_3

NewProfessor_EventScript_PokeballOne_8:
# 410 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x023, NewProfessor_EventScript_PokeballOne_2
	goto NewProfessor_EventScript_PokeballOne_3

NewProfessor_EventScript_PokeballOne_11:
# 412 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Piplup
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_12:
# 415 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Chimchar
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_13:
# 418 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Turtwig
	goto NewProfessor_EventScript_PokeballOne_1


NewProfessor_EventScript_PokeballTwo::
# 430 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 431 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewProfessor_EventScript_PokeballTwo_4
NewProfessor_EventScript_PokeballTwo_3:
# 443 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballTwo_1:
# 445 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 446 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballTwo_2:
# 432 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 1
	goto_if_eq NewProfessor_EventScript_PokeballTwo_11
# 435 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 0
	goto_if_eq NewProfessor_EventScript_PokeballTwo_12
# 438 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 2
	goto_if_eq NewProfessor_EventScript_PokeballTwo_13
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_4:
# 431 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewProfessor_EventScript_PokeballTwo_6
	goto NewProfessor_EventScript_PokeballTwo_3

NewProfessor_EventScript_PokeballTwo_6:
# 431 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewProfessor_EventScript_PokeballTwo_8
	goto NewProfessor_EventScript_PokeballTwo_3

NewProfessor_EventScript_PokeballTwo_8:
# 431 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x023, NewProfessor_EventScript_PokeballTwo_2
	goto NewProfessor_EventScript_PokeballTwo_3

NewProfessor_EventScript_PokeballTwo_11:
# 433 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Squirtle
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_12:
# 436 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Charmander
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_13:
# 439 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Bulbasaur
	goto NewProfessor_EventScript_PokeballTwo_1


NewProfessor_EventScript_PokeballThree::
# 451 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 452 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewProfessor_EventScript_PokeballThree_4
NewProfessor_EventScript_PokeballThree_3:
# 464 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballThree_1:
# 466 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 467 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballThree_2:
# 453 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 1
	goto_if_eq NewProfessor_EventScript_PokeballThree_11
# 456 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 0
	goto_if_eq NewProfessor_EventScript_PokeballThree_12
# 459 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 2
	goto_if_eq NewProfessor_EventScript_PokeballThree_13
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_4:
# 452 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewProfessor_EventScript_PokeballThree_6
	goto NewProfessor_EventScript_PokeballThree_3

NewProfessor_EventScript_PokeballThree_6:
# 452 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewProfessor_EventScript_PokeballThree_8
	goto NewProfessor_EventScript_PokeballThree_3

NewProfessor_EventScript_PokeballThree_8:
# 452 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x023, NewProfessor_EventScript_PokeballThree_2
	goto NewProfessor_EventScript_PokeballThree_3

NewProfessor_EventScript_PokeballThree_11:
# 454 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Totodile
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_12:
# 457 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Cyndaquil
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_13:
# 460 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Chikorita
	goto NewProfessor_EventScript_PokeballThree_1


NewProfessor_EventScript_PokeballFour::
# 472 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 473 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewProfessor_EventScript_PokeballFour_4
NewProfessor_EventScript_PokeballFour_3:
# 485 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballFour_1:
# 487 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 488 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballFour_2:
# 474 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 1
	goto_if_eq NewProfessor_EventScript_PokeballFour_11
# 477 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 0
	goto_if_eq NewProfessor_EventScript_PokeballFour_12
# 480 "data/maps/NewBirchesLab/scripts.pory"
	compare STARTER_TYPE, 2
	goto_if_eq NewProfessor_EventScript_PokeballFour_13
	goto NewProfessor_EventScript_PokeballFour_1

NewProfessor_EventScript_PokeballFour_4:
# 473 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewProfessor_EventScript_PokeballFour_6
	goto NewProfessor_EventScript_PokeballFour_3

NewProfessor_EventScript_PokeballFour_6:
# 473 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewProfessor_EventScript_PokeballFour_8
	goto NewProfessor_EventScript_PokeballFour_3

NewProfessor_EventScript_PokeballFour_8:
# 473 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x023, NewProfessor_EventScript_PokeballFour_2
	goto NewProfessor_EventScript_PokeballFour_3

NewProfessor_EventScript_PokeballFour_11:
# 475 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Oshawott
	goto NewProfessor_EventScript_PokeballFour_1

NewProfessor_EventScript_PokeballFour_12:
# 478 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Tepig
	goto NewProfessor_EventScript_PokeballFour_1

NewProfessor_EventScript_PokeballFour_13:
# 481 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Snivy
	goto NewProfessor_EventScript_PokeballFour_1


NicknamePartyMon::
# 493 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 494 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 495 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 496 "data/maps/NewBirchesLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 497 "data/maps/NewBirchesLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 502 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 503 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 504 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 507 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 505 "data/maps/NewBirchesLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewProfessor_EventScript_Birch_Text_0:
# 13 "data/maps/NewBirchesLab/scripts.pory"
	.string "Would you like to change the type?$"

NewProfessor_EventScript_Birch_Text_1:
# 25 "data/maps/NewBirchesLab/scripts.pory"
	.string "Choose your Pokemon wisely$"

NewProfessor_EventScript_Birch_Text_2:
# 31 "data/maps/NewBirchesLab/scripts.pory"
	.string "That's the only free one$"

NewProfessor_EventScript_Totodile_Text_0:
# 41 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewProfessor_EventScript_Totodile_Text_1:
# 46 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Totodile$"

NewProfessor_EventScript_Totodile_Text_2:
# 60 "data/maps/NewBirchesLab/scripts.pory"
	.string "No More Room$"

NewProfessor_EventScript_Squirtle_Text_0:
# 72 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewProfessor_EventScript_Squirtle_Text_1:
# 77 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Squirtle$"

NewProfessor_EventScript_Chikorita_Text_0:
# 103 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewProfessor_EventScript_Chikorita_Text_1:
# 108 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Chikorita$"

NewProfessor_EventScript_Bulbasaur_Text_0:
# 134 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewProfessor_EventScript_Bulbasaur_Text_1:
# 139 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Bulbasaur$"

NewProfessor_EventScript_Cyndaquil_Text_0:
# 164 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewProfessor_EventScript_Cyndaquil_Text_1:
# 169 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Cyndaquil$"

NewProfessor_EventScript_Turtwig_Text_0:
# 196 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

NewProfessor_EventScript_Turtwig_Text_1:
# 201 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Turtwig$"

NewProfessor_EventScript_Chimchar_Text_0:
# 227 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

NewProfessor_EventScript_Chimchar_Text_1:
# 232 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Chimchar$"

NewProfessor_EventScript_Piplup_Text_0:
# 257 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

NewProfessor_EventScript_Piplup_Text_1:
# 262 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Piplup$"

NewProfessor_EventScript_Snivy_Text_0:
# 288 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Snivy?$"

NewProfessor_EventScript_Snivy_Text_1:
# 293 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Snivy$"

NewProfessor_EventScript_Charmander_Text_0:
# 319 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewProfessor_EventScript_Charmander_Text_1:
# 324 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Charmander$"

NewProfessor_EventScript_Tepig_Text_0:
# 350 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Tepig?$"

NewProfessor_EventScript_Tepig_Text_1:
# 355 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Tepig$"

NewProfessor_EventScript_Oshawott_Text_0:
# 380 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewProfessor_EventScript_Oshawott_Text_1:
# 385 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Oshawott$"

NewProfessor_EventScript_PokeballOne_Text_0:
# 422 "data/maps/NewBirchesLab/scripts.pory"
	.string "Don't Take Another$"

NicknamePartyMon_Text_0:
# 493 "data/maps/NewBirchesLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 507 "data/maps/NewBirchesLab/scripts.pory"
	.string "Transferred to PC$"

NewProfessor_NotChosen::
# 510 "data/maps/NewBirchesLab/scripts.pory"
	.string "You did not choose the Pokemon$"
