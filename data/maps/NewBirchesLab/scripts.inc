NewBirchesLab_MapScripts::
# 2 "data/maps/NewBirchesLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBircheslab_EventScript_Pokeball
	.byte 0


NewBircheslab_EventScript_Pokeball::
# 6 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
	return


NewProfessor_EventScript_Birch::
# 10 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 11 "data/maps/NewBirchesLab/scripts.pory"
	faceplayer
# 12 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewProfessor_EventScript_Birch_4
NewProfessor_EventScript_Birch_3:
# 28 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_3
NewProfessor_EventScript_Birch_1:
# 30 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 31 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_Birch_2:
# 13 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_0, MSGBOX_YESNO
# 14 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Birch_11
# 24 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_2
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

NewProfessor_EventScript_Birch_11:
# 15 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_ne NewProfessor_EventScript_Birch_15
# 19 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
NewProfessor_EventScript_Birch_14:
# 21 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_1
	goto NewProfessor_EventScript_Birch_1

NewProfessor_EventScript_Birch_15:
# 16 "data/maps/NewBirchesLab/scripts.pory"
	addvar VAR_UNUSED_0x40F7, 1
	goto NewProfessor_EventScript_Birch_14


NewProfessor_EventScript_Totodile::
# 38 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 39 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 40 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Totodile_1
# 62 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 63 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Totodile_1:
# 41 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_EXP_SHARE
# 42 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Totodile_4
# 49 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Totodile_5
# 57 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 58 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Totodile_4:
# 43 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 44 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_1
# 45 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 46 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 47 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Totodile_5:
# 50 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_1
# 52 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 53 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 54 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Squirtle::
# 69 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 70 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 71 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Squirtle_1
# 93 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 94 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Squirtle_1:
# 72 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_EXP_SHARE
# 73 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Squirtle_4
# 80 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Squirtle_5
# 88 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 89 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Squirtle_4:
# 74 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 75 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_1
# 76 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 77 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 78 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Squirtle_5:
# 81 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 82 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_1
# 83 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 84 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 85 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Chikorita::
# 100 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 101 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 102 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Chikorita_1
# 124 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 125 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Chikorita_1:
# 103 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_EXP_SHARE
# 104 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Chikorita_4
# 111 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Chikorita_5
# 119 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 120 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Chikorita_4:
# 105 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_1
# 107 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 108 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 109 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Chikorita_5:
# 112 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_1
# 114 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 115 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 116 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Bulbasaur::
# 131 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 132 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 133 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Bulbasaur_1
# 155 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 156 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Bulbasaur_1:
# 134 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5, ITEM_EXP_SHARE
# 135 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Bulbasaur_4
# 142 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Bulbasaur_5
# 150 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 151 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Bulbasaur_4:
# 136 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 137 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_1
# 138 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 139 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 140 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Bulbasaur_5:
# 143 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 144 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_1
# 145 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 146 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 147 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Cyndaquil::
# 161 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 162 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 163 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Cyndaquil_1
# 185 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 186 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Cyndaquil_1:
# 164 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_EXP_SHARE
# 165 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Cyndaquil_4
# 172 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Cyndaquil_5
# 180 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 181 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Cyndaquil_4:
# 166 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 167 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_1
# 168 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 169 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 170 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Cyndaquil_5:
# 173 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 174 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_1
# 175 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 176 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 177 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Turtwig::
# 193 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 194 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_0, MSGBOX_YESNO
# 195 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Turtwig_1
# 217 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 218 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Turtwig_1:
# 196 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_EXP_SHARE
# 197 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Turtwig_4
# 204 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Turtwig_5
# 212 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 213 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Turtwig_4:
# 198 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_1
# 200 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 201 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 202 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Turtwig_5:
# 205 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_1
# 207 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 208 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 209 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Chimchar::
# 224 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 225 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 226 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Chimchar_1
# 248 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 249 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Chimchar_1:
# 227 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5, ITEM_EXP_SHARE
# 228 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Chimchar_4
# 235 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Chimchar_5
# 243 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 244 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Chimchar_4:
# 229 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 230 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chimchar_Text_1
# 231 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 232 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 233 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Chimchar_5:
# 236 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 237 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Chimchar_Text_1
# 238 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 239 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 240 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Piplup::
# 254 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 255 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Piplup_Text_0, MSGBOX_YESNO
# 256 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Piplup_1
# 278 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 279 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Piplup_1:
# 257 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5, ITEM_EXP_SHARE
# 258 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Piplup_4
# 265 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Piplup_5
# 273 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 274 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Piplup_4:
# 259 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 260 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Piplup_Text_1
# 261 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 262 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 263 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Piplup_5:
# 266 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 267 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Piplup_Text_1
# 268 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 269 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 270 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Snivy::
# 285 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 286 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 287 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Snivy_1
# 309 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 310 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Snivy_1:
# 288 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_SNIVY, 5, ITEM_EXP_SHARE
# 289 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Snivy_4
# 296 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Snivy_5
# 304 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 305 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Snivy_4:
# 290 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 291 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Snivy_Text_1
# 292 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 293 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 294 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Snivy_5:
# 297 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 298 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Snivy_Text_1
# 299 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 300 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 301 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Charmander::
# 316 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 317 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 318 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Charmander_1
# 340 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 341 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Charmander_1:
# 319 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_EXP_SHARE
# 320 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Charmander_4
# 327 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Charmander_5
# 335 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 336 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Charmander_4:
# 321 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 322 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_1
# 323 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 324 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 325 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Charmander_5:
# 328 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 329 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_1
# 330 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 331 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 332 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Tepig::
# 347 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 348 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Tepig_Text_0, MSGBOX_YESNO
# 349 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Tepig_1
# 371 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 372 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Tepig_1:
# 350 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_TEPIG, 5, ITEM_EXP_SHARE
# 351 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Tepig_4
# 358 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Tepig_5
# 366 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 367 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Tepig_4:
# 352 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 353 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Tepig_Text_1
# 354 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 355 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 356 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Tepig_5:
# 359 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 360 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Tepig_Text_1
# 361 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 362 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 363 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Oshawott::
# 377 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 378 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 379 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Oshawott_1
# 401 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 402 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Oshawott_1:
# 380 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_EXP_SHARE
# 381 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Oshawott_4
# 388 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Oshawott_5
# 396 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 397 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_2
	return

NewProfessor_EventScript_Oshawott_4:
# 382 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 383 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 384 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 385 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 386 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Oshawott_5:
# 389 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 390 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 391 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 392 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 393 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_PokeballOne::
# 407 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 408 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewProfessor_EventScript_PokeballOne_4
NewProfessor_EventScript_PokeballOne_3:
# 420 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballOne_1:
# 422 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 423 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballOne_2:
# 409 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewProfessor_EventScript_PokeballOne_11
# 412 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewProfessor_EventScript_PokeballOne_12
# 415 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewProfessor_EventScript_PokeballOne_13
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_4:
# 408 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewProfessor_EventScript_PokeballOne_6
	goto NewProfessor_EventScript_PokeballOne_3

NewProfessor_EventScript_PokeballOne_6:
# 408 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewProfessor_EventScript_PokeballOne_8
	goto NewProfessor_EventScript_PokeballOne_3

NewProfessor_EventScript_PokeballOne_8:
# 408 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x023, NewProfessor_EventScript_PokeballOne_2
	goto NewProfessor_EventScript_PokeballOne_3

NewProfessor_EventScript_PokeballOne_11:
# 410 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Piplup
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_12:
# 413 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Chimchar
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_13:
# 416 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Turtwig
	goto NewProfessor_EventScript_PokeballOne_1


NewProfessor_EventScript_PokeballTwo::
# 428 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 429 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewProfessor_EventScript_PokeballTwo_4
NewProfessor_EventScript_PokeballTwo_3:
# 441 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballTwo_1:
# 443 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 444 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballTwo_2:
# 430 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewProfessor_EventScript_PokeballTwo_11
# 433 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewProfessor_EventScript_PokeballTwo_12
# 436 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewProfessor_EventScript_PokeballTwo_13
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_4:
# 429 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewProfessor_EventScript_PokeballTwo_6
	goto NewProfessor_EventScript_PokeballTwo_3

NewProfessor_EventScript_PokeballTwo_6:
# 429 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewProfessor_EventScript_PokeballTwo_8
	goto NewProfessor_EventScript_PokeballTwo_3

NewProfessor_EventScript_PokeballTwo_8:
# 429 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x023, NewProfessor_EventScript_PokeballTwo_2
	goto NewProfessor_EventScript_PokeballTwo_3

NewProfessor_EventScript_PokeballTwo_11:
# 431 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Squirtle
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_12:
# 434 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Charmander
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_13:
# 437 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Bulbasaur
	goto NewProfessor_EventScript_PokeballTwo_1


NewProfessor_EventScript_PokeballThree::
# 449 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 450 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewProfessor_EventScript_PokeballThree_4
NewProfessor_EventScript_PokeballThree_3:
# 462 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballThree_1:
# 464 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 465 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballThree_2:
# 451 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewProfessor_EventScript_PokeballThree_11
# 454 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewProfessor_EventScript_PokeballThree_12
# 457 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewProfessor_EventScript_PokeballThree_13
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_4:
# 450 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewProfessor_EventScript_PokeballThree_6
	goto NewProfessor_EventScript_PokeballThree_3

NewProfessor_EventScript_PokeballThree_6:
# 450 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewProfessor_EventScript_PokeballThree_8
	goto NewProfessor_EventScript_PokeballThree_3

NewProfessor_EventScript_PokeballThree_8:
# 450 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x023, NewProfessor_EventScript_PokeballThree_2
	goto NewProfessor_EventScript_PokeballThree_3

NewProfessor_EventScript_PokeballThree_11:
# 452 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Totodile
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_12:
# 455 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Cyndaquil
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_13:
# 458 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Chikorita
	goto NewProfessor_EventScript_PokeballThree_1


NewProfessor_EventScript_PokeballFour::
# 470 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 471 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewProfessor_EventScript_PokeballFour_4
NewProfessor_EventScript_PokeballFour_3:
# 483 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballFour_1:
# 485 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 486 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballFour_2:
# 472 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewProfessor_EventScript_PokeballFour_11
# 475 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewProfessor_EventScript_PokeballFour_12
# 478 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewProfessor_EventScript_PokeballFour_13
	goto NewProfessor_EventScript_PokeballFour_1

NewProfessor_EventScript_PokeballFour_4:
# 471 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewProfessor_EventScript_PokeballFour_6
	goto NewProfessor_EventScript_PokeballFour_3

NewProfessor_EventScript_PokeballFour_6:
# 471 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewProfessor_EventScript_PokeballFour_8
	goto NewProfessor_EventScript_PokeballFour_3

NewProfessor_EventScript_PokeballFour_8:
# 471 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x023, NewProfessor_EventScript_PokeballFour_2
	goto NewProfessor_EventScript_PokeballFour_3

NewProfessor_EventScript_PokeballFour_11:
# 473 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Oshawott
	goto NewProfessor_EventScript_PokeballFour_1

NewProfessor_EventScript_PokeballFour_12:
# 476 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Tepig
	goto NewProfessor_EventScript_PokeballFour_1

NewProfessor_EventScript_PokeballFour_13:
# 479 "data/maps/NewBirchesLab/scripts.pory"
	call NewProfessor_EventScript_Snivy
	goto NewProfessor_EventScript_PokeballFour_1


NicknamePartyMon::
# 491 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 492 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 493 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 494 "data/maps/NewBirchesLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 495 "data/maps/NewBirchesLab/scripts.pory"
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
# 21 "data/maps/NewBirchesLab/scripts.pory"
	.string "This type is better$"

NewProfessor_EventScript_Birch_Text_2:
# 24 "data/maps/NewBirchesLab/scripts.pory"
	.string "Choose your Pokemon wisely$"

NewProfessor_EventScript_Birch_Text_3:
# 28 "data/maps/NewBirchesLab/scripts.pory"
	.string "That's the only free one$"

NewProfessor_EventScript_Totodile_Text_0:
# 39 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewProfessor_EventScript_Totodile_Text_1:
# 44 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Totodile$"

NewProfessor_EventScript_Totodile_Text_2:
# 58 "data/maps/NewBirchesLab/scripts.pory"
	.string "No More Room$"

NewProfessor_EventScript_Squirtle_Text_0:
# 70 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewProfessor_EventScript_Squirtle_Text_1:
# 75 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Squirtle$"

NewProfessor_EventScript_Chikorita_Text_0:
# 101 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewProfessor_EventScript_Chikorita_Text_1:
# 106 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Chikorita$"

NewProfessor_EventScript_Bulbasaur_Text_0:
# 132 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewProfessor_EventScript_Bulbasaur_Text_1:
# 137 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Bulbasaur$"

NewProfessor_EventScript_Cyndaquil_Text_0:
# 162 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewProfessor_EventScript_Cyndaquil_Text_1:
# 167 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Cyndaquil$"

NewProfessor_EventScript_Turtwig_Text_0:
# 194 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

NewProfessor_EventScript_Turtwig_Text_1:
# 199 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Turtwig$"

NewProfessor_EventScript_Chimchar_Text_0:
# 225 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

NewProfessor_EventScript_Chimchar_Text_1:
# 230 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Chimchar$"

NewProfessor_EventScript_Piplup_Text_0:
# 255 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

NewProfessor_EventScript_Piplup_Text_1:
# 260 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Piplup$"

NewProfessor_EventScript_Snivy_Text_0:
# 286 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Snivy?$"

NewProfessor_EventScript_Snivy_Text_1:
# 291 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Snivy$"

NewProfessor_EventScript_Charmander_Text_0:
# 317 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewProfessor_EventScript_Charmander_Text_1:
# 322 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Charmander$"

NewProfessor_EventScript_Tepig_Text_0:
# 348 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Tepig?$"

NewProfessor_EventScript_Tepig_Text_1:
# 353 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Tepig$"

NewProfessor_EventScript_Oshawott_Text_0:
# 378 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewProfessor_EventScript_Oshawott_Text_1:
# 383 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Oshawott$"

NewProfessor_EventScript_PokeballOne_Text_0:
# 420 "data/maps/NewBirchesLab/scripts.pory"
	.string "Don't Take Another$"

NicknamePartyMon_Text_0:
# 491 "data/maps/NewBirchesLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 507 "data/maps/NewBirchesLab/scripts.pory"
	.string "Transferred to PC$"

NewProfessor_NotChosen::
# 510 "data/maps/NewBirchesLab/scripts.pory"
	.string "You did not choose the Pokemon$"
