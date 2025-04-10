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

# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Grayson::
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN, PetalburgCity_Gym_Text_NormanDefeat
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_SAM
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_SAM
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"

# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_TM_DRAIN_PUNCH
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_MUSCLE_BAND
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_EXPERT_BELT
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_FOCUS_BAND
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_FOCUS_SASH
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"

# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"

# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"

# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"

# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"

# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"

# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"

# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"

# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"

# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"

# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"

# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"

# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"

# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"

# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
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
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"

# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"

# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"

# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"

# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"

# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"

# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"

# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"

# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
		walk_up
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"

# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"

# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"

# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"

# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"

# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"

# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"

# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"

# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"

# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"

# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"

# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"

# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"

# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"

# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"

# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"

# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"

# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"

# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"

# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"

# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"

# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"

# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"

# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"

# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"

# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"

# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"

# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"

# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"

# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"

# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"

# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"

# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"

# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"

# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"

# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"

# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"

# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"

# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"

# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"

# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"

# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"

# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"

# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"

# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"

# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"

# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"

# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm?\p"
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your POKéMON.\p"
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a POKéMON, please…$"
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? You're… Uh… Oh, right.\n"
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're SAMUEL, right?$"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "SAMUEL:I want to battle the first gym\n"
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "but I need to catch another POKEMON.\p"
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You want me to show you how?$"
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I see.$"
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\n"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with SAMUEL and make sure that he\n"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "catches a POKéMON.$"
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, I'll loan you my POKéBALL.$"
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string " $"
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'm gonna stun spore\n"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "everyone with it.\p"
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! The gym leader is waiting for me,\n"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Now…\p"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong TRAINER, here's my advice.\p"
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for RUSTBORO CITY beyond this\n"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER, ALEC.\p"
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After him, go on to other POKéMON\n"
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYMS and defeat their LEADERS.\p"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect BADGES from them,\n"
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a GYM LEADER, too.\n"
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger."
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
    .string "Until then, here is an Eevee.$"
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? Aren't you going to the\n"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four GYM BADGES, okay?$"
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I see… So, you've beaten\n"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named GARRETT.\p"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: Hm…\n"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four GYM BADGES.\p"
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry I beat your DAD,\l"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a battle with his child.\p"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the new GYM LEADER to win.\p"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You've surpassed your DAD!\n"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDef:
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm sorry {PLAYER},\n"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost my title as leader to GRAYSON.\p"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "His FIGHTING-type POKeMON were\l"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "super effective against me.\p"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hopefully you can beat him.$"
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the FISTING BADGE\n"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from GRAYSON!$"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: With that BADGE, the DEFENSE\n"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of all your POKéMON will increase.\p"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON that know the HM move SURF\n"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: TM65 contains DRAIN PUNCH.\p"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You punch the life out of the enemy\n"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "like I did to your father.$"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON: As the GYM LEADER, I can't\n"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as new leader, it makes me both\n"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON, you don't mind, do you?\p"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow {PLAYER}{KUN} for\n"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\n"
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\p"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The TRAINERS of PETALBURG GYM\n"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father's rival!\p"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your POKéMON!$"
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our former LEADER's kid.\p"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father was really is strong.\n"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with his rival!$"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad lost as the LEADER,\n"
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "former LEADER's kid!$"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father's rival, is waiting!$"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their POKéMON.$"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GRAYSON'S CERTIFIED TRAINERS:\n"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"

PetalburgCity_Gym_EventScript_GiveEevee::
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_LEAF_STONE
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_WATER_STONE
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_FIRE_STONE
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_ICE_STONE
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_THUNDER_STONE
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_SUN_STONE
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	additem ITEM_MOON_STONE
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_SOOTHE_BELL, , , , , , , , , , , , , , , , , MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_COVET, MOVE_SAND_ATTACK
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_1
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEevee_2
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidemonpic
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_2
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end

PetalburgCity_Gym_EventScript_GiveEevee_1:
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_0
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject 3
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknamePartyMon
	return

PetalburgCity_Gym_EventScript_GiveEevee_2:
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_1
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject 3
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknameBoxMon
	return


PetalburgCity_Gym_EventScript_GiveEevee_Text_0:
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Recieved Eevee and its stones$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_1:
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Recieved Eevee$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_2:
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No More Room$"
