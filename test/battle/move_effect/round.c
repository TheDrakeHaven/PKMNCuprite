#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_ROUND) == EFFECT_ROUND);
}

DOUBLE_BATTLE_TEST("Round usages beyond the first one has double base power")
{
    s16 damage[2];
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {
            MOVE(opponentLeft, MOVE_ROUND, target: playerLeft);
            MOVE(opponentRight, MOVE_ROUND, target: playerLeft);
        }
    } SCENE {
        HP_BAR(playerLeft, captureDamage: &damage[0]);
        HP_BAR(playerLeft, captureDamage: &damage[1]);
    } THEN {
        EXPECT_MUL_EQ(damage[0], Q_4_12(2.0), damage[1]);
    }
}

DOUBLE_BATTLE_TEST("Round still preserves the turn order outside of the other Round users moving immediately")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {
            MOVE(opponentLeft, MOVE_ROUND, target: playerLeft);
            MOVE(playerRight, MOVE_CELEBRATE);
            MOVE(playerLeft, MOVE_CELEBRATE);
            MOVE(opponentRight, MOVE_ROUND, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROUND, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROUND, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerLeft);
    }
}
DOUBLE_BATTLE_TEST("Round still preserves the turn order outside of the other Round users moving immediately with switch")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {
            SWITCH(playerRight, 2);
            MOVE(opponentLeft, MOVE_ROUND, target: playerLeft);
            MOVE(playerLeft, MOVE_CELEBRATE);
            MOVE(opponentRight, MOVE_ROUND, target: playerLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROUND, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROUND, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerLeft);
    }
}

