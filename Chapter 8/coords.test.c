#include <criterion/criterion.h>
#include <criterion/assert.h>
#include "coords.h"

Test(move_towards, north)
{
    struct coords_2i pos = {0, 0};
    move_towards(&pos, NORTH, 5);
    cr_assert_eq(pos.x, 0);
    cr_assert_eq(pos.y, -5);
}

Test(move_towards, south)
{
    struct coords_2i pos = {0, 0};
    move_towards(&pos, SOUTH, 3);
    cr_assert_eq(pos.x, 0);
    cr_assert_eq(pos.y, 3);
}

Test(move_towards, east)
{
    struct coords_2i pos = {1, 2};
    move_towards(&pos, EAST, 4);
    cr_assert_eq(pos.x, 5);
    cr_assert_eq(pos.y, 2);
}

Test(move_towards, west)
{
    struct coords_2i pos = {5, 2};
    move_towards(&pos, WEST, 3);
    cr_assert_eq(pos.x, 2);
    cr_assert_eq(pos.y, 2);
}

Test(move_towards, north_east)
{
    struct coords_2i pos = {0, 0};
    move_towards(&pos, NORTH_EAST, 2);
    cr_assert_eq(pos.x, 2);
    cr_assert_eq(pos.y, -2);
}

Test(move_towards, north_west)
{
    struct coords_2i pos = {0, 0};
    move_towards(&pos, NORTH_WEST, 2);
    cr_assert_eq(pos.x, -2);
    cr_assert_eq(pos.y, -2);
}

Test(move_towards, south_east)
{
    struct coords_2i pos = {0, 0};
    move_towards(&pos, SOUTH_EAST, 2);
    cr_assert_eq(pos.x, 2);
    cr_assert_eq(pos.y, 2);
}

Test(move_towards, south_west)
{
    struct coords_2i pos = {0, 0};
    move_towards(&pos, SOUTH_WEST, 2);
    cr_assert_eq(pos.x, -2);
    cr_assert_eq(pos.y, 2);
}

Test(move_towards, distance_zero)
{
    struct coords_2i pos = {10, -7};
    move_towards(&pos, NORTH, 0);
    cr_assert_eq(pos.x, 10);
    cr_assert_eq(pos.y, -7);
}

Test(move_towards, non_zero_start_position)
{
    struct coords_2i pos = {3, 4};
    move_towards(&pos, SOUTH_WEST, 5);
    cr_assert_eq(pos.x, -2);
    cr_assert_eq(pos.y, 9);
}
