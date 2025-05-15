Route135_Pokemart_MapScripts::
	.byte 0

Route135_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Route135_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Route135_Mart_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_SUPER_REPEL
	pokemartlistend

Route135_Mart_EventScript_Girl::
	msgbox Route135_Mart_Text_StockUpOnItems, MSGBOX_NPC
	end

Route135_Mart_Text_StockUpOnItems:
	.string "This is the only mart\n"
	.string "where you can ride a bike!$"
