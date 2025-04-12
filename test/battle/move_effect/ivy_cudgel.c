#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_IVY_CUDGEL) == EFFECT_IVY_CUDGEL);
}

SINGLE_BATTLE_TEST("Ivy Cudgel changes the move type depending on the form of Ogerpon")
{
    u16 species;
    u16 ogerpon;
    u16 item;

