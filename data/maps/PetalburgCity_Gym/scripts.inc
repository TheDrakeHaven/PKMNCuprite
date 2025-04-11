# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 1
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 10
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 11
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"

# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"

# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"

# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"

# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"

# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"

# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"

# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"

# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"

# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"

# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"

# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"

# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
    goto  PetalburgCity_Gym_EventScript_GiveEevee
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"

# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"

# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanDown
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"

# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"

# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"

# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"

# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"

# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"

# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"

# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"

# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"

# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"

# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"

# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"

# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"

# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"

# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"

# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"

# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"

# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"

# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"

# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"

# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"

# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"

# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"

# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"

# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"

# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"

# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"

# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"

# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"

# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"

# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"

# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_ENIGMA_BERRY_E_READER
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"

# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanDown::
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanDef MSGBOX_DEFAULT
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Grayson::
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_GRAYSON, PetalburgCity_Gym_Text_NormanDefeat
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_SAM
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_SAM
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"

# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_TM_DRAIN_PUNCH
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_MUSCLE_BAND
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_EXPERT_BELT
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_FOCUS_BAND
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_FOCUS_SASH
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"

# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"

# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"

# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"

# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"

# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"

# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"

# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"

# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"

# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"

# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"

# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"

# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"

# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"

# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"

# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"

# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
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
	step_end
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"

# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"

# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"

# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"

# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"

# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"

# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"

# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"

# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
		walk_up
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"

# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"

# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"

# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"

# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"

# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"

# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"

# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"

# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
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
	walk_right
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"

# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"

# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"

# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"

# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"

# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"

# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"

# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"

# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"

# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"

# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"

# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"

# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"

# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"

# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"

# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"

# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"

# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"

# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"

# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"

# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"

# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"

# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"

# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"

# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"

# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"

# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"

# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"

# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"

# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"

# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"

# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"

# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"

# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"

# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"

# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"

# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"

# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"

# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"

# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"

# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm?\p"
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your POKéMON.\p"
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a POKéMON, please…$"
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? You're… Uh… Oh, right.\n"
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're SAMUEL, right?$"
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "SAMUEL:I want to battle the first gym\n"
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "but I need to catch another POKEMON.\p"
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You want me to show you how?$"
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I see.$"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\n"
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with SAMUEL and make sure that he\n"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "catches a POKéMON.$"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, I'll loan you my POKéBALL.$"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string " $"
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'm gonna stun spore\n"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "everyone with it.\p"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! The gym leader is waiting for me,\n"
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Now…\p"
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong TRAINER, here's my advice.\p"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for RUSTBORO CITY beyond this\n"
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER, ALEC.\p"
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After him, go on to other POKéMON\n"
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYMS and defeat their LEADERS.\p"
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect BADGES from them,\n"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a GYM LEADER, too.\n"
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger."
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
    .string "Until then, here is an Eevee.$"
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? Aren't you going to the\n"
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four GYM BADGES, okay?$"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I see… So, you've beaten\n"
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named GARRETT.\p"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: Hm…\n"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four GYM BADGES.\p"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry I beat your DAD,\l"
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a battle with his child.\p"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the new GYM LEADER to win.\p"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You've surpassed your DAD!\n"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDef:
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm sorry {PLAYER},\n"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost my title as leader to GRAYSON.\p"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "His FIGHTING-type POKeMON were\l"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "super effective against me.\p"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hopefully you can beat him.$"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the FISTING BADGE\n"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from GRAYSON!$"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: With that BADGE, the DEFENSE\n"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of all your POKéMON will increase.\p"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON that know the HM move SURF\n"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: TM65 contains DRAIN PUNCH.\p"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You punch the life out of the enemy\n"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "like I did to your father.$"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: As the GYM LEADER, I can't\n"
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as new leader, it makes me both\n"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON, you don't mind, do you?\p"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow {PLAYER}{KUN} for\n"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\n"
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\p"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The TRAINERS of PETALBURG GYM\n"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father's rival!\p"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your POKéMON!$"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our former LEADER's kid.\p"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father was really is strong.\n"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with his rival!$"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad lost as the LEADER,\n"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "former LEADER's kid!$"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father's rival, is waiting!$"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their POKéMON.$"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON'S CERTIFIED TRAINERS:\n"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"

PetalburgCity_Gym_EventScript_GiveEevee::
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_LEAF_STONE
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_WATER_STONE
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_FIRE_STONE
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_ICE_STONE
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_THUNDER_STONE
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_SUN_STONE
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_MOON_STONE
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_SOOTHE_BELL, , , , , , , , , , , , , , , , , MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_COVET, MOVE_SAND_ATTACK
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_1
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_2
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidemonpic
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_2
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end

PetalburgCity_Gym_EventScript_GiveEevee_1:
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_0
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject 3
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknamePartyMon
	return

PetalburgCity_Gym_EventScript_GiveEevee_2:
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_1
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject 3
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknameBoxMon
	return


PetalburgCity_Gym_EventScript_GiveEevee_Text_0:
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Recieved Eevee and its stones$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_1:
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Recieved Eevee$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_2:
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No More Room$"
