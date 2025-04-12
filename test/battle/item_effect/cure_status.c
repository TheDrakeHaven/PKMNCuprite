#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Full Heal heals a battler from any primary status")
{
    u16 status;
    PARAMETRIZE { status = STATUS1_SLEEP; }
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_BURN; }
    PARAMETRIZE { status = STATUS1_FREEZE; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_FROSTBITE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_FULL_HEAL].battleUsage == EFFECT_ITEM_CURE_STATUS);
        PLAYER(SPECIES_WOBBUFFET) { Status1(status); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_FULL_HEAL, partyIndex: 0); }
    } SCENE {
        MESSAGE("Wobbuffet had its status healed!");
    } THEN {
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}

SINGLE_BATTLE_TEST("Lava Cookies heals a battler from any primary status")
{
    u16 status;
    PARAMETRIZE { status = STATUS1_SLEEP; }
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_BURN; }
    PARAMETRIZE { status = STATUS1_FREEZE; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_FROSTBITE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LAVA_COOKIE].battleUsage == EFFECT_ITEM_CURE_STATUS);
        PLAYER(SPECIES_WOBBUFFET) { Status1(status); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_LAVA_COOKIE, partyIndex: 0); }
    } SCENE {
        MESSAGE("Wobbuffet had its status healed!");
    } THEN {
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}

SINGLE_BATTLE_TEST("Full Heal, Heal Powder and Local Specialties heal a battler from being confused")
{
    u16 item;
    PARAMETRIZE { item = ITEM_FULL_HEAL; }
    PARAMETRIZE { item = ITEM_LAVA_COOKIE; }
    GIVEN {
        ASSUME(gItemsInfo[item].battleUsage == EFFECT_ITEM_CURE_STATUS);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_GENGAR);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CONFUSE_RAY); }
        TURN { USE_ITEM(player, item, partyIndex: 0); }
    } SCENE {
        MESSAGE("Wobbuffet had its status healed!");
    } THEN {
        EXPECT_EQ(player->status2, STATUS1_NONE); // because we dont have STATUS2_NONE
    }
}
