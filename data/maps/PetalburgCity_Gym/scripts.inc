# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 1
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_GRAYSON, 5
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 10
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 11
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"

# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"

# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"

# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"

# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"

# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"

# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"

# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"

# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"

# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"

# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"

# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"

# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
    goto PetalburgCity_Gym_EventScript_GiveEevee
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"

# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"

# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanDown
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"

# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"

# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"

# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"

# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"

# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"

# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"

# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"

# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"

# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"

# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"

# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"

# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"

# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"

# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"

# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"

# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"

# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"

# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"

# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"

# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"

# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"

# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"

# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"

# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"

# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"

# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"

# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"

# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanDown::
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_UNUSED_0x2B0, PetalburgCity_Gym_EventScript_NormanDownnout
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, LOCALID_NORMAN
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanDef MSGBOX_DEFAULT
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_UNUSED_0x2B0
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"

# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanDownnout::
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Gogetem, MSGBOX_DEFAULT
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"

# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Grayson::
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgGraysonbeat
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_UNUSED_0x265
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_GRAYSON, PetalburgCity_Gym_Text_NormanDefeat
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_SAM
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_SAM
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_UNUSED_0x265
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, LOCALID_GRAYSON
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"

# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_DRAIN_PUNCH
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_LUNGE
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_EXPERT_BELT
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgGraysonbeat::
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgGraysonRematch
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"

# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgGraysonRematch::
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_GRAYSON_REMATCH, PetalburgCity_Gym_Text_NormanIntro, PetalburgCity_Gym_Text_NormanDefeat, GymRematch_Text_NotEnoughPokemon
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_UNUSED_0x265
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"

# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"

# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"

# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"

# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"

# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"

# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"

# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"

# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"

# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"

# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"

# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"

# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"

# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"

# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"

# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"

# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"

# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"

# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"

# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"

# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"

# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"

# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"

# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"

# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"

# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
		walk_up
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"

# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"

# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"

# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"

# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"

# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"

# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"

# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"

# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"

# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"

# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"

# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"

# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"

# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"

# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"

# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"

# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"

# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"

# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"

# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"

# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"

# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"

# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"

# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"

# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"

# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"

# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"

# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"

# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"

# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"

# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"

# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"

# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"

# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"

# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"

# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"

# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"

# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"

# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"

# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"

# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"

# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"

# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"

# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm?\p"
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your POKéMON.\p"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a POKéMON, please…$"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? You're… Uh… Oh, right.\n"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're SAMUEL, right?$"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "SAMUEL:I want to battle the first gym\n"
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "but I need to catch another POKEMON.\p"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You want me to show {PLAYER} how to?$"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I think that's a good idea SAMUEL.$"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\n"
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with SAMUEL and make sure that he\n"
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "catches a POKéMON.$"
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, I'll loan you my POKéBALL.$"
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Nice catch SAMUEL!$"
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "SAMUEL:{PLAYER}, thank you for \n"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "coming along with me.\p"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'm gonna stun spore\n"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "everyone with it.\p"
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! The gym leader is waiting for me,\n"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_Gogetem:
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What are you waiting for?\p"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go get 'em {PLAYER}!\n"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You've already surpassed me.$"
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Now…\p"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong TRAINER, here's my advice.\p"
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for RUSTBORO CITY beyond this\n"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER, ALEC.\p"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After him, go on to other POKéMON\n"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYMS and defeat their LEADERS.\p"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect BADGES from them,\n"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a GYM LEADER, too.\n"
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "To help you out, here are some \n"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weather effect TMs. \p"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
    .string "Also, pick an EEVEE evolution stone.$"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? Aren't you going to the\n"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four GYM BADGES, okay?$"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I see… So, you've beaten\n"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named GARRETT.\p"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: Hm…\n"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four GYM BADGES.\p"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry I beat your DAD,\l"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a battle with his child.\p"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the new GYM LEADER to win.\p"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You've surpassed your DAD!\n"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDef:
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm sorry {PLAYER},\n"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost my title as leader to GRAYSON.\p"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "His FIGHTING-type POKeMON were\l"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "super effective against me.\p"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hopefully you can beat him.$"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the FISTING BADGE\n"
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from GRAYSON!$"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: With that BADGE, the DEFENSE\n"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of all your POKéMON will increase.\p"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON that know the HM move SURF\n"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: TM65 contains DRAIN PUNCH.\p"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You punch the life out of the enemy\n"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "like I did to your father.$"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: As the GYM LEADER, I can't\n"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as new leader, it makes me both\n"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON, you don't mind, do you?\p"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow {PLAYER}{KUN} for\n"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\n"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to GRAYSON!$"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\p"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The TRAINERS of PETALBURG GYM\n"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father's rival!\p"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your POKéMON!$"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our former LEADER's kid.\p"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father was really is strong.\n"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with his rival!$"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad lost as the LEADER,\n"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "former LEADER's kid!$"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father's rival, is waiting!$"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their POKéMON.$"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON'S CERTIFIED TRAINERS:\n"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"

PetalburgCity_Gym_EventScript_GiveEevee::
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_TM_SANDSTORM
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_TM_RAIN_DANCE
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_TM_SUNNY_DAY
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_TM_HAIL
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_TM_ELECTRIC_TERRAIN
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_TM_MISTY_TERRAIN
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_TM_PSYCHIC_TERRAIN
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_TM_GRASSY_TERRAIN
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	multichoice 0, 96, MULTI_EEVEE_STONE, 0
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_2
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_3
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_4
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_5
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_6
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_7
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_8
PetalburgCity_Gym_EventScript_GiveEevee_1:
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_SOOTHE_BELL, , , , , , , , , , , , , , , , , MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_COVET, MOVE_SAND_ATTACK
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_16
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_17
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidemonpic
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_2
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end

PetalburgCity_Gym_EventScript_GiveEevee_2:
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_FIRE_STONE
	goto PetalburgCity_Gym_EventScript_GiveEevee_1

PetalburgCity_Gym_EventScript_GiveEevee_3:
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_WATER_STONE
	goto PetalburgCity_Gym_EventScript_GiveEevee_1

PetalburgCity_Gym_EventScript_GiveEevee_4:
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_THUNDER_STONE
	goto PetalburgCity_Gym_EventScript_GiveEevee_1

PetalburgCity_Gym_EventScript_GiveEevee_5:
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_SUN_STONE
	goto PetalburgCity_Gym_EventScript_GiveEevee_1

PetalburgCity_Gym_EventScript_GiveEevee_6:
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_MOON_STONE
	goto PetalburgCity_Gym_EventScript_GiveEevee_1

PetalburgCity_Gym_EventScript_GiveEevee_7:
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_LEAF_STONE
	goto PetalburgCity_Gym_EventScript_GiveEevee_1

PetalburgCity_Gym_EventScript_GiveEevee_8:
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ICE_STONE
	goto PetalburgCity_Gym_EventScript_GiveEevee_1

PetalburgCity_Gym_EventScript_GiveEevee_16:
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_0
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject 3
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknamePartyMon
	return

PetalburgCity_Gym_EventScript_GiveEevee_17:
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_1
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject 3
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknameBoxMon
	return


PetalburgCity_Gym_EventScript_GiveEevee_Text_0:
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Recieved Eevee and a stone$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_1:
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Recieved Eevee$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_2:
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No More Room$"
