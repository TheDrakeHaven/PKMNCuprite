# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_NORMAN, 9 
# 7 "data/maps/LittlerootTown/scripts.pory"

# 8 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 11 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 12 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 13 "data/maps/LittlerootTown/scripts.pory"

# 14 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 19 "data/maps/LittlerootTown/scripts.pory"

# 20 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 28 "data/maps/LittlerootTown/scripts.pory"

# 29 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 30 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 36 "data/maps/LittlerootTown/scripts.pory"

# 37 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 41 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"

# 44 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 45 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 46 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 56 "data/maps/LittlerootTown/scripts.pory"
	end
# 57 "data/maps/LittlerootTown/scripts.pory"

# 58 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 59 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 60 "data/maps/LittlerootTown/scripts.pory"
	return
# 61 "data/maps/LittlerootTown/scripts.pory"

# 62 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 63 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 64 "data/maps/LittlerootTown/scripts.pory"
	return
# 65 "data/maps/LittlerootTown/scripts.pory"

# 66 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 67 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 68 "data/maps/LittlerootTown/scripts.pory"
	return
# 69 "data/maps/LittlerootTown/scripts.pory"

# 70 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 71 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 72 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 73 "data/maps/LittlerootTown/scripts.pory"
	return
# 74 "data/maps/LittlerootTown/scripts.pory"

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 76 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 77 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 78 "data/maps/LittlerootTown/scripts.pory"
	return
# 79 "data/maps/LittlerootTown/scripts.pory"

# 80 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 81 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 82 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 31, 0
# 83 "data/maps/LittlerootTown/scripts.pory"
	return
# 84 "data/maps/LittlerootTown/scripts.pory"

# 85 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 86 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 87 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 88 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 29, 6 
# 89 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 90 "data/maps/LittlerootTown/scripts.pory"
	return
# 91 "data/maps/LittlerootTown/scripts.pory"

# 92 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 93 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 94 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 95 "data/maps/LittlerootTown/scripts.pory"
	return
# 96 "data/maps/LittlerootTown/scripts.pory"

# 97 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 98 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 99 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 100 "data/maps/LittlerootTown/scripts.pory"
	return
# 101 "data/maps/LittlerootTown/scripts.pory"

# 102 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 103 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 104 "data/maps/LittlerootTown/scripts.pory"
	return
# 105 "data/maps/LittlerootTown/scripts.pory"

# 106 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 107 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 108 "data/maps/LittlerootTown/scripts.pory"
	return
# 109 "data/maps/LittlerootTown/scripts.pory"

# 110 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 111 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 112 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 113 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 114 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 115 "data/maps/LittlerootTown/scripts.pory"

# 116 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 117 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 118 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 119 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 120 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 121 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 122 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 123 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 124 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 125 "data/maps/LittlerootTown/scripts.pory"
	end
# 126 "data/maps/LittlerootTown/scripts.pory"

# 127 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 128 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 129 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 130 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 131 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 132 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 133 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 134 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 135 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 136 "data/maps/LittlerootTown/scripts.pory"
	end
# 137 "data/maps/LittlerootTown/scripts.pory"

# 138 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 139 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 140 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 141 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 142 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 144 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 145 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 146 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 147 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 149 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 150 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 151 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 154 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 155 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 156 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 157 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 158 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 159 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 160 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 162 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 163 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 164 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 165 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 167 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 168 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 169 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 170 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 171 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 172 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 173 "data/maps/LittlerootTown/scripts.pory"
	return
# 174 "data/maps/LittlerootTown/scripts.pory"

# 175 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 176 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 177 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 178 "data/maps/LittlerootTown/scripts.pory"

# 179 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 180 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 181 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 182 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 183 "data/maps/LittlerootTown/scripts.pory"

# 184 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 185 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 186 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 187 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 188 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 189 "data/maps/LittlerootTown/scripts.pory"

# 190 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 191 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 192 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 193 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 194 "data/maps/LittlerootTown/scripts.pory"

# 195 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 196 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 198 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 199 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 200 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 201 "data/maps/LittlerootTown/scripts.pory"

# 202 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 203 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 204 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 205 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 206 "data/maps/LittlerootTown/scripts.pory"

# 207 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 208 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 209 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 211 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 212 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 213 "data/maps/LittlerootTown/scripts.pory"

# 214 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 215 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 216 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 217 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 218 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 219 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 220 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 221 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 222 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 223 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 224 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 225 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 226 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 227 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 228 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 229 "data/maps/LittlerootTown/scripts.pory"
	end
# 230 "data/maps/LittlerootTown/scripts.pory"

# 231 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 232 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 233 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 234 "data/maps/LittlerootTown/scripts.pory"

# 235 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 236 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 237 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 238 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 239 "data/maps/LittlerootTown/scripts.pory"
	end
# 240 "data/maps/LittlerootTown/scripts.pory"

# 241 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 242 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 243 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 244 "data/maps/LittlerootTown/scripts.pory"
	end
# 245 "data/maps/LittlerootTown/scripts.pory"

# 246 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 247 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 248 "data/maps/LittlerootTown/scripts.pory"
	end
# 249 "data/maps/LittlerootTown/scripts.pory"

# 250 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 251 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 252 "data/maps/LittlerootTown/scripts.pory"
	end
# 253 "data/maps/LittlerootTown/scripts.pory"

# 254 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 255 "data/maps/LittlerootTown/scripts.pory"
	lock
# 256 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 257 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 258 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 259 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 260 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 261 "data/maps/LittlerootTown/scripts.pory"
	release
# 262 "data/maps/LittlerootTown/scripts.pory"
	end
# 263 "data/maps/LittlerootTown/scripts.pory"

# 264 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 265 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 266 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 267 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 268 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 269 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 270 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 271 "data/maps/LittlerootTown/scripts.pory"
	release
# 272 "data/maps/LittlerootTown/scripts.pory"
	end
# 273 "data/maps/LittlerootTown/scripts.pory"

# 274 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 275 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 276 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 277 "data/maps/LittlerootTown/scripts.pory"
	release
# 278 "data/maps/LittlerootTown/scripts.pory"
	end
# 279 "data/maps/LittlerootTown/scripts.pory"

# 280 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 281 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown/scripts.pory"
	release
# 283 "data/maps/LittlerootTown/scripts.pory"
	end
# 284 "data/maps/LittlerootTown/scripts.pory"

# 285 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 286 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 287 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 288 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 289 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 290 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 291 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 292 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 293 "data/maps/LittlerootTown/scripts.pory"
	end
# 294 "data/maps/LittlerootTown/scripts.pory"

# 295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 296 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 297 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 298 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 299 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 300 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 301 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 302 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 303 "data/maps/LittlerootTown/scripts.pory"
	return
# 304 "data/maps/LittlerootTown/scripts.pory"

# 305 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 306 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 307 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 308 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 309 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 310 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 311 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 312 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 313 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 314 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 315 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 316 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 317 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 318 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 319 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 320 "data/maps/LittlerootTown/scripts.pory"

# 321 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 323 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 324 "data/maps/LittlerootTown/scripts.pory"

# 325 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 327 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 328 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 335 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 336 "data/maps/LittlerootTown/scripts.pory"

# 337 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 338 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 340 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 341 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 342 "data/maps/LittlerootTown/scripts.pory"

# 343 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 344 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 345 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 346 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 347 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 348 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 349 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 350 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 351 "data/maps/LittlerootTown/scripts.pory"
	end
# 352 "data/maps/LittlerootTown/scripts.pory"

# 353 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 354 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 355 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 356 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 357 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 358 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 363 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 365 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 366 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 367 "data/maps/LittlerootTown/scripts.pory"

# 368 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 375 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 376 "data/maps/LittlerootTown/scripts.pory"

# 377 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 378 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 379 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 380 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 381 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 382 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 383 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 384 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 385 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 386 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 387 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 388 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 389 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 390 "data/maps/LittlerootTown/scripts.pory"
	end
# 391 "data/maps/LittlerootTown/scripts.pory"

# 392 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 393 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 394 "data/maps/LittlerootTown/scripts.pory"
	end
# 395 "data/maps/LittlerootTown/scripts.pory"

# 396 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 397 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 398 "data/maps/LittlerootTown/scripts.pory"
	end
# 399 "data/maps/LittlerootTown/scripts.pory"

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 401 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 402 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_BirchsHouseSignFemale
# 403 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 404 "data/maps/LittlerootTown/scripts.pory"
	end
# 405 "data/maps/LittlerootTown/scripts.pory"

# 406 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 407 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 408 "data/maps/LittlerootTown/scripts.pory"
	return
# 409 "data/maps/LittlerootTown/scripts.pory"

# 410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 411 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 412 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_PlayersHouseSignFemale
# 413 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 414 "data/maps/LittlerootTown/scripts.pory"
	end
# 415 "data/maps/LittlerootTown/scripts.pory"

# 416 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 417 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 418 "data/maps/LittlerootTown/scripts.pory"
	return
# 419 "data/maps/LittlerootTown/scripts.pory"

# 420 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 421 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 422 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 423 "data/maps/LittlerootTown/scripts.pory"
	return
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 426 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 427 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 428 "data/maps/LittlerootTown/scripts.pory"
	return
# 429 "data/maps/LittlerootTown/scripts.pory"

# 430 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 431 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 432 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 433 "data/maps/LittlerootTown/scripts.pory"
	return
# 434 "data/maps/LittlerootTown/scripts.pory"

# 435 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 436 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 437 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 438 "data/maps/LittlerootTown/scripts.pory"
	return
# 439 "data/maps/LittlerootTown/scripts.pory"

# 440 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 441 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 442 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 443 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 444 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 445 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 446 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 447 "data/maps/LittlerootTown/scripts.pory"
	return
# 448 "data/maps/LittlerootTown/scripts.pory"

# 449 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 450 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 451 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 452 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 453 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 454 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 455 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 456 "data/maps/LittlerootTown/scripts.pory"
	return
# 457 "data/maps/LittlerootTown/scripts.pory"

# 458 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 459 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 460 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 461 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 462 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 463 "data/maps/LittlerootTown/scripts.pory"
	return
# 464 "data/maps/LittlerootTown/scripts.pory"

# 465 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 466 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 467 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 468 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 469 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 470 "data/maps/LittlerootTown/scripts.pory"
	return
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 473 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 474 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 475 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 476 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 477 "data/maps/LittlerootTown/scripts.pory"
	return
# 478 "data/maps/LittlerootTown/scripts.pory"

# 479 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 480 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 481 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 482 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 483 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 484 "data/maps/LittlerootTown/scripts.pory"
	return
# 485 "data/maps/LittlerootTown/scripts.pory"

# 486 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 487 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 488 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 489 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 490 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 491 "data/maps/LittlerootTown/scripts.pory"
	return
# 492 "data/maps/LittlerootTown/scripts.pory"

# 493 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 494 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 495 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 496 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 497 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 498 "data/maps/LittlerootTown/scripts.pory"
	return
# 499 "data/maps/LittlerootTown/scripts.pory"

# 500 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 501 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 502 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 503 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 504 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 505 "data/maps/LittlerootTown/scripts.pory"
	return
# 506 "data/maps/LittlerootTown/scripts.pory"

# 507 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 508 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 509 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 510 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 511 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 512 "data/maps/LittlerootTown/scripts.pory"
	return
# 513 "data/maps/LittlerootTown/scripts.pory"

# 514 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 515 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 516 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 517 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 518 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 519 "data/maps/LittlerootTown/scripts.pory"
	return
# 520 "data/maps/LittlerootTown/scripts.pory"

# 521 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 522 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 523 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 524 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 525 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 526 "data/maps/LittlerootTown/scripts.pory"
	return
# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 531 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 534 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 535 "data/maps/LittlerootTown/scripts.pory"
	return
# 536 "data/maps/LittlerootTown/scripts.pory"

# 537 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 538 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 539 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 540 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 541 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 542 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 543 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 544 "data/maps/LittlerootTown/scripts.pory"
	return
# 545 "data/maps/LittlerootTown/scripts.pory"

# 546 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 547 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 548 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 549 "data/maps/LittlerootTown/scripts.pory"
	return
# 550 "data/maps/LittlerootTown/scripts.pory"

# 551 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 552 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 553 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/LittlerootTown/scripts.pory"
	return
# 555 "data/maps/LittlerootTown/scripts.pory"

# 556 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 557 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 558 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 559 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 560 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 561 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 562 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 563 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 564 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 565 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 566 "data/maps/LittlerootTown/scripts.pory"
	return
# 567 "data/maps/LittlerootTown/scripts.pory"

# 568 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 569 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 570 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 571 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 573 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 574 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 575 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 576 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 577 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 578 "data/maps/LittlerootTown/scripts.pory"
	return
# 579 "data/maps/LittlerootTown/scripts.pory"

# 580 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 581 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 584 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 585 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 586 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 587 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 588 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 590 "data/maps/LittlerootTown/scripts.pory"
	return
# 591 "data/maps/LittlerootTown/scripts.pory"

# 592 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 597 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 598 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 600 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 602 "data/maps/LittlerootTown/scripts.pory"
	return
# 603 "data/maps/LittlerootTown/scripts.pory"

# 604 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 605 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 606 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 607 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 608 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 609 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 610 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 611 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 612 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 613 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 614 "data/maps/LittlerootTown/scripts.pory"
	return
# 615 "data/maps/LittlerootTown/scripts.pory"

# 616 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 617 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 618 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 619 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 620 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 621 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 622 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 623 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 624 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 625 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 626 "data/maps/LittlerootTown/scripts.pory"
	return
# 627 "data/maps/LittlerootTown/scripts.pory"

# 628 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 629 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 630 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 631 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 632 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 633 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 634 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 635 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 636 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 637 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 638 "data/maps/LittlerootTown/scripts.pory"
	return
# 639 "data/maps/LittlerootTown/scripts.pory"

# 640 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 641 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 644 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 645 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 646 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 648 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 650 "data/maps/LittlerootTown/scripts.pory"
	return
# 651 "data/maps/LittlerootTown/scripts.pory"

# 652 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 653 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 654 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 655 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 656 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 657 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 658 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 659 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 660 "data/maps/LittlerootTown/scripts.pory"

# 661 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 662 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 663 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 664 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 665 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 666 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 667 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 668 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 669 "data/maps/LittlerootTown/scripts.pory"

# 670 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 671 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 672 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 673 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 674 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 675 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 676 "data/maps/LittlerootTown/scripts.pory"

# 677 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 678 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 679 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 681 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 682 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 683 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 684 "data/maps/LittlerootTown/scripts.pory"

# 685 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 686 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 687 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 688 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 689 "data/maps/LittlerootTown/scripts.pory"

# 690 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 691 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 692 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 693 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 694 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 695 "data/maps/LittlerootTown/scripts.pory"

# 696 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 697 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 698 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 699 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 700 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 701 "data/maps/LittlerootTown/scripts.pory"

# 702 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 704 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 705 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 706 "data/maps/LittlerootTown/scripts.pory"

# 707 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 708 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 709 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 710 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 711 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 712 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 713 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 714 "data/maps/LittlerootTown/scripts.pory"

# 715 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 716 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 717 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 718 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 719 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 720 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 721 "data/maps/LittlerootTown/scripts.pory"

# 722 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 723 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 724 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 725 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 726 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 728 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 729 "data/maps/LittlerootTown/scripts.pory"

# 730 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 731 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 736 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 737 "data/maps/LittlerootTown/scripts.pory"

# 738 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 744 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 745 "data/maps/LittlerootTown/scripts.pory"

# 746 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 753 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 754 "data/maps/LittlerootTown/scripts.pory"

# 755 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 759 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 760 "data/maps/LittlerootTown/scripts.pory"

# 761 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 766 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 767 "data/maps/LittlerootTown/scripts.pory"

# 768 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 773 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 774 "data/maps/LittlerootTown/scripts.pory"

# 775 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 779 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 780 "data/maps/LittlerootTown/scripts.pory"

# 781 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 788 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 789 "data/maps/LittlerootTown/scripts.pory"

# 790 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 791 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 796 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 797 "data/maps/LittlerootTown/scripts.pory"

# 798 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 800 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 801 "data/maps/LittlerootTown/scripts.pory"

# 802 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 803 "data/maps/LittlerootTown/scripts.pory"
	lock
# 804 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 805 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 806 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 807 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 808 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 809 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 810 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 811 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 812 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 813 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 814 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 815 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 816 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 817 "data/maps/LittlerootTown/scripts.pory"
	end
# 818 "data/maps/LittlerootTown/scripts.pory"

# 819 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 820 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 821 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 822 "data/maps/LittlerootTown/scripts.pory"
	release
# 823 "data/maps/LittlerootTown/scripts.pory"
	end
# 824 "data/maps/LittlerootTown/scripts.pory"

# 825 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 826 "data/maps/LittlerootTown/scripts.pory"
	giveitem(ITEM_MACH_BIKE)
# 827 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 828 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 829 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 830 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 831 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 832 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 833 "data/maps/LittlerootTown/scripts.pory"
	savebgm MUS_DUMMY
# 834 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 835 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 836 "data/maps/LittlerootTown/scripts.pory"
	return
# 837 "data/maps/LittlerootTown/scripts.pory"

# 838 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 839 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 840 "data/maps/LittlerootTown/scripts.pory"
	.string "Sorry, I forgot you\n"
# 841 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 842 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 843 "data/maps/LittlerootTown/scripts.pory"
	.string "You probably will never be here\l"
# 844 "data/maps/LittlerootTown/scripts.pory"
	.string "so I'll enjoy the house alone.\p"
# 845 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\p"
# 846 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, you forgot these \n"
# 847 "data/maps/LittlerootTown/scripts.pory"
	.string "old running shoes.\p"
# 848 "data/maps/LittlerootTown/scripts.pory"
	.string "Just hold B to run!\p"
# 849 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 850 "data/maps/LittlerootTown/scripts.pory"

# 851 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 852 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 853 "data/maps/LittlerootTown/scripts.pory"

# 854 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 855 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 856 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. LEE?\p"
# 857 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 858 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. LEE. How nice!\p"
# 859 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 860 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 861 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 862 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, take this bike.\p"
# 863 "data/maps/LittlerootTown/scripts.pory"
	.string "And don't forget to wear a helmet!$"
# 864 "data/maps/LittlerootTown/scripts.pory"

# 865 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 866 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} recieved the\n"
# 867 "data/maps/LittlerootTown/scripts.pory"
	.string "MACH BIKE.$"
# 868 "data/maps/LittlerootTown/scripts.pory"

# 869 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 870 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, don't forget these\n"
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 872 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the Y Button after registering\n"
# 873 "data/maps/LittlerootTown/scripts.pory"
	.string "MACH to equip it!\p"
# 874 "data/maps/LittlerootTown/scripts.pory"
	.string "“Gotta go fast!$"
# 875 "data/maps/LittlerootTown/scripts.pory"

# 876 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 877 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 878 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 879 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 880 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 881 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 882 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, I can help.\p"
# 883 "data/maps/LittlerootTown/scripts.pory"
	.string "I know a good place to bury them!$"
# 884 "data/maps/LittlerootTown/scripts.pory"

# 885 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 886 "data/maps/LittlerootTown/scripts.pory"
	.string "Splish, Splash\n"
# 887 "data/maps/LittlerootTown/scripts.pory"
	.string "Splish, Splash.\p"
# 888 "data/maps/LittlerootTown/scripts.pory"
	.string "I love the rain!$"
# 889 "data/maps/LittlerootTown/scripts.pory"

# 890 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 891 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. LEE spends days in his LAB\n"
# 892 "data/maps/LittlerootTown/scripts.pory"
	.string "alone, then he'll suddenly go out in\l"
# 893 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 894 "data/maps/LittlerootTown/scripts.pory"
	.string "He loves to go and\n"
# 895 "data/maps/LittlerootTown/scripts.pory"
	.string "bird watch.$"
# 896 "data/maps/LittlerootTown/scripts.pory"

# 897 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 898 "data/maps/LittlerootTown/scripts.pory"
	.string "Chill out!\p"
# 899 "data/maps/LittlerootTown/scripts.pory"
	.string "Go to LEE's house first.$"
# 900 "data/maps/LittlerootTown/scripts.pory"

# 901 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 902 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 903 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 904 "data/maps/LittlerootTown/scripts.pory"

# 905 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 906 "data/maps/LittlerootTown/scripts.pory"
	.string "Gamer!\p"
# 907 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 908 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 909 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 910 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 911 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 912 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 913 "data/maps/LittlerootTown/scripts.pory"

# 914 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 915 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. LEE!\n"
# 916 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 917 "data/maps/LittlerootTown/scripts.pory"

# 918 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 921 "data/maps/LittlerootTown/scripts.pory"

# 922 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 923 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "“It's a town, I guess.”$"
# 925 "data/maps/LittlerootTown/scripts.pory"

# 926 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 927 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. LEE'S POKéMON LAB$"
# 928 "data/maps/LittlerootTown/scripts.pory"

# 929 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 930 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE\l"
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "Formerly Jane's Meth House.$"
# 932 "data/maps/LittlerootTown/scripts.pory"

# 933 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. LEE'S HOUSE$"
# 935 "data/maps/LittlerootTown/scripts.pory"

# 936 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. LEE: Well, well, {PLAYER}{KUN}!\n"
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 942 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_Gymsign::
# 949 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 950 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Gymsign_Text_0
# 951 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_Text_normando::
# 955 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 956 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_normando_Text_0
# 957 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_Gymsign_Text_0:
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "Free Starter Pokemon!$"

LittlerootTown_Text_normando_Text_0:
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "DAD: Come back when you have a pokemon for another starter!$"
