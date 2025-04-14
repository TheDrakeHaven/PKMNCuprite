.set LOCALID_NURSE, 1
.set LOCALID_ATTENDANT, 2

AeroBase_Lobby_MapScripts::
	.byte 0

TrainerHill_Entrance_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	setrespawn HEAL_LOCATION_AEROBASE
	release
	end

TrainerHill_Entrance_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart TrainerHill_Entrance_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
TrainerHill_Entrance_Pokemart_Basic:
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_GREAT_BALL
	pokemartlistend

TrainerHill_Entrance_EventScript_Elevators::
	lock
	faceplayer
	msgbox Aeroclerk 
	waitmessage
	release
	end

Aeroclerk:
	.string "Elevator is broken,\n"
	.string "so take the stairs.$"
