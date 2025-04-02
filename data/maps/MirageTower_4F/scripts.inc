# 1 "data/maps/MirageTower_4F/scripts.pory"

# 2 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_ROOT_FOSSIL, 1
# 3 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_CLAW_FOSSIL, 2
# 4 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_DOME_FOSSIL, 3
# 5 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_HELIX_FOSSIL, 4
# 6 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_OLD_AMBER, 5
# 7 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_ARMOR_FOSSIL, 6
# 8 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_SKULL_FOSSIL, 7
# 9 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_COVER_FOSSIL, 8
# 10 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_PLUME_FOSSIL, 9
# 11 "data/maps/MirageTower_4F/scripts.pory"

# 12 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_MapScripts::
# 13 "data/maps/MirageTower_4F/scripts.pory"
	.byte 0
# 14 "data/maps/MirageTower_4F/scripts.pory"

# 15 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_RootFossil::
# 16 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 17 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 18 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeRootFossil, MSGBOX_YESNO
# 19 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveRootFossil
# 20 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 21 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 22 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 23 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 24 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 25 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_ROOT_FOSSIL
# 26 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 27 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_ROOT_FOSSIL
# 28 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 29 "data/maps/MirageTower_4F/scripts.pory"
	end
# 30 "data/maps/MirageTower_4F/scripts.pory"

# 31 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveRootFossil::
# 32 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftRootFossilAlone, MSGBOX_DEFAULT
# 33 "data/maps/MirageTower_4F/scripts.pory"
	release
# 34 "data/maps/MirageTower_4F/scripts.pory"
	end
# 35 "data/maps/MirageTower_4F/scripts.pory"

# 36 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ClawFossil::
# 37 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 38 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 39 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeClawFossil, MSGBOX_YESNO
# 40 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveClawFossil
# 41 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 42 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 43 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 44 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 45 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 46 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_CLAW_FOSSIL
# 47 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 48 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_CLAW_FOSSIL
# 49 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 50 "data/maps/MirageTower_4F/scripts.pory"
	end
# 51 "data/maps/MirageTower_4F/scripts.pory"

# 52 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveClawFossil::
# 53 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveClawFossilAlone, MSGBOX_DEFAULT
# 54 "data/maps/MirageTower_4F/scripts.pory"
	release
# 55 "data/maps/MirageTower_4F/scripts.pory"
	end
# 56 "data/maps/MirageTower_4F/scripts.pory"

# 57 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_HelixFossil::
# 58 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 59 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 60 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeHelixFossil, MSGBOX_YESNO
# 61 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveHelixFossil
# 62 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_HELIX_FOSSIL
# 63 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 64 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 65 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 66 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 67 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 68 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 69 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_HELIX_FOSSIL
# 70 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 71 "data/maps/MirageTower_4F/scripts.pory"
	end
# 72 "data/maps/MirageTower_4F/scripts.pory"

# 73 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveHelixFossil::
# 74 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveHelixFossilAlone, MSGBOX_DEFAULT
# 75 "data/maps/MirageTower_4F/scripts.pory"
	release
# 76 "data/maps/MirageTower_4F/scripts.pory"
	end
# 77 "data/maps/MirageTower_4F/scripts.pory"

# 78 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_DomeFossil::
# 79 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 80 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 81 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeDomeFossil, MSGBOX_YESNO
# 82 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveDomeFossil
# 83 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_DOME_FOSSIL
# 84 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 85 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 86 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 87 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 88 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 89 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 90 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_DOME_FOSSIL
# 91 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 92 "data/maps/MirageTower_4F/scripts.pory"
	end
# 93 "data/maps/MirageTower_4F/scripts.pory"

# 94 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveDomeFossil::
# 95 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveDomeFossilAlone, MSGBOX_DEFAULT
# 96 "data/maps/MirageTower_4F/scripts.pory"
	release
# 97 "data/maps/MirageTower_4F/scripts.pory"
	end
# 98 "data/maps/MirageTower_4F/scripts.pory"

# 99 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_OldAmber::
# 100 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 101 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 102 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeOldAmber, MSGBOX_YESNO
# 103 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveOldAmber
# 104 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_OLD_AMBER
# 105 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 106 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 107 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 108 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 109 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_OLD_AMBER
# 110 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 111 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_OLD_AMBER
# 112 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 113 "data/maps/MirageTower_4F/scripts.pory"
	end
# 114 "data/maps/MirageTower_4F/scripts.pory"

# 115 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveOldAmber::
# 116 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveOldAmberAlone, MSGBOX_DEFAULT
# 117 "data/maps/MirageTower_4F/scripts.pory"
	release
# 118 "data/maps/MirageTower_4F/scripts.pory"
	end
# 119 "data/maps/MirageTower_4F/scripts.pory"

# 120 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_SkullFossil::
# 121 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 122 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 123 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeSkullFossil, MSGBOX_YESNO
# 124 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveSkullFossil
# 125 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_SKULL_FOSSIL
# 126 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 127 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 128 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 129 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 130 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_SKULL_FOSSIL
# 131 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 132 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_SKULL_FOSSIL
# 133 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 134 "data/maps/MirageTower_4F/scripts.pory"
	end
# 135 "data/maps/MirageTower_4F/scripts.pory"

# 136 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveSkullFossil::
# 137 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveSkullFossilAlone, MSGBOX_DEFAULT
# 138 "data/maps/MirageTower_4F/scripts.pory"
	release
# 139 "data/maps/MirageTower_4F/scripts.pory"
	end
# 140 "data/maps/MirageTower_4F/scripts.pory"

# 141 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ArmorFossil::
# 142 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 143 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 144 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeArmorFossil, MSGBOX_YESNO
# 145 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveArmorFossil
# 146 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_ARMOR_FOSSIL
# 147 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 148 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 149 "data/maps/MirageTower_4F/scripts.pory"
    setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 150 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 151 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_ARMOR_FOSSIL
# 152 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 153 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_ARMOR_FOSSIL
# 154 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 155 "data/maps/MirageTower_4F/scripts.pory"
	end
# 156 "data/maps/MirageTower_4F/scripts.pory"

# 157 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveArmorFossil::
# 158 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveArmorFossilAlone, MSGBOX_DEFAULT
# 159 "data/maps/MirageTower_4F/scripts.pory"
	release
# 160 "data/maps/MirageTower_4F/scripts.pory"
	end
# 161 "data/maps/MirageTower_4F/scripts.pory"

# 162 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_CoverFossil::
# 163 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 164 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 165 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeCoverFossil, MSGBOX_YESNO
# 166 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveCoverFossil
# 167 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_COVER_FOSSIL
# 168 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 169 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 170 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 171 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 172 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_COVER_FOSSIL
# 173 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 174 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_COVER_FOSSIL
# 175 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 176 "data/maps/MirageTower_4F/scripts.pory"
	end
# 177 "data/maps/MirageTower_4F/scripts.pory"

# 178 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveCoverFossil::
# 179 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveCoverFossilAlone, MSGBOX_DEFAULT
# 180 "data/maps/MirageTower_4F/scripts.pory"
	release
# 181 "data/maps/MirageTower_4F/scripts.pory"
	end
# 182 "data/maps/MirageTower_4F/scripts.pory"

# 183 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_PlumeFossil::
# 184 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 185 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 186 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakePlumeFossil, MSGBOX_YESNO
# 187 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeavePlumeFossil
# 188 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_PLUME_FOSSIL
# 189 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 190 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 191 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 192 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 193 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_PLUME_FOSSIL
# 194 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 195 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_PLUME_FOSSIL
# 196 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 197 "data/maps/MirageTower_4F/scripts.pory"
	end
# 198 "data/maps/MirageTower_4F/scripts.pory"

# 199 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeavePlumeFossil::
# 200 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeavePlumeFossilAlone, MSGBOX_DEFAULT
# 201 "data/maps/MirageTower_4F/scripts.pory"
	release
# 202 "data/maps/MirageTower_4F/scripts.pory"
	end
# 203 "data/maps/MirageTower_4F/scripts.pory"

# 204 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_CollapseMirageTower::
# 205 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 206 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 207 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32  @ num shakes
# 208 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2   @ shake delay
# 209 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 210 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 211 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 212 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 213 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 214 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 215 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 216 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 217 "data/maps/MirageTower_4F/scripts.pory"
	release
# 218 "data/maps/MirageTower_4F/scripts.pory"
	end
# 219 "data/maps/MirageTower_4F/scripts.pory"

# 220 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeRootFossil:
# 221 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the ROOT FOSSIL.\p"
# 222 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 223 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 224 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the ROOT FOSSIL anyway?$"
# 225 "data/maps/MirageTower_4F/scripts.pory"

# 226 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeftRootFossilAlone:
# 227 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the ROOT FOSSIL alone.$"
# 228 "data/maps/MirageTower_4F/scripts.pory"

# 229 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeClawFossil:
# 230 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the CLAW FOSSIL.\p"
# 231 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 232 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 233 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the CLAW FOSSIL anyway?$"
# 234 "data/maps/MirageTower_4F/scripts.pory"

# 235 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveClawFossilAlone:
# 236 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the CLAW FOSSIL alone.$"
# 237 "data/maps/MirageTower_4F/scripts.pory"
    MirageTower_4F_Text_TakeOldAmber:
# 238 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the OLD AMBER.\p"
# 239 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this OLD AMBER is taken, the ground\n"
# 240 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 241 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the OLD AMBER anyway?$"
# 242 "data/maps/MirageTower_4F/scripts.pory"

# 243 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveOldAmberAlone:
# 244 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the OLD AMBER alone.$"
# 245 "data/maps/MirageTower_4F/scripts.pory"
    
# 246 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeHelixFossil:
# 247 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the HELIX FOSSIL.\p"
# 248 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 249 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 250 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the HELIX FOSSIL anyway?$"
# 251 "data/maps/MirageTower_4F/scripts.pory"

# 252 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveHelixFossilAlone:
# 253 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the HELIX FOSSIL alone.$"
# 254 "data/maps/MirageTower_4F/scripts.pory"

# 255 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeDomeFossil:
# 256 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the DOME FOSSIL.\p"
# 257 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 258 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 259 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the DOME FOSSIL anyway?$"
# 260 "data/maps/MirageTower_4F/scripts.pory"

# 261 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveDomeFossilAlone:
# 262 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the DOME FOSSIL alone.$"
# 263 "data/maps/MirageTower_4F/scripts.pory"

# 264 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeSkullFossil:
# 265 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the SKULL FOSSIL.\p"
# 266 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 267 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 268 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the SKULL FOSSIL anyway?$"
# 269 "data/maps/MirageTower_4F/scripts.pory"

# 270 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveSkullFossilAlone:
# 271 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the SKULL FOSSIL alone.$"
# 272 "data/maps/MirageTower_4F/scripts.pory"
    
# 273 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeArmorFossil:
# 274 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the ARMOR FOSSIL.\p"
# 275 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 276 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 277 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the ARMOR FOSSIL anyway?$"
# 278 "data/maps/MirageTower_4F/scripts.pory"

# 279 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveArmorFossilAlone:
# 280 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the ARMOR FOSSIL alone.$"
# 281 "data/maps/MirageTower_4F/scripts.pory"
    
# 282 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeCoverFossil:
# 283 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the COVER FOSSIL.\p"
# 284 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 285 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 286 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the COVER FOSSIL anyway?$"
# 287 "data/maps/MirageTower_4F/scripts.pory"

# 288 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveCoverFossilAlone:
# 289 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the COVER FOSSIL alone.$"
# 290 "data/maps/MirageTower_4F/scripts.pory"
    
# 291 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakePlumeFossil:
# 292 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the PLUME FOSSIL.\p"
# 293 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 294 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 295 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the PLUME FOSSIL anyway?$"
# 296 "data/maps/MirageTower_4F/scripts.pory"

# 297 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeavePlumeFossilAlone:
# 298 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the PLUME FOSSIL alone.$"
