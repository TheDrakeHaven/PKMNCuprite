.set LOCALID_NURSE, 1

NewMap1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
	.byte 0

Route135_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_ROUTE_135
	end

Route135_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

Route135_Center_EventScript_Girl::
	msgbox Route135_Center_Text_StockUpOnItems, MSGBOX_NPC
	end

Route135_Center_Text_StockUpOnItems:
	.string "I can ride my bike with\n"
	.string "no handlebars!$"

