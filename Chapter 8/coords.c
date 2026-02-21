/*
 * E89 Pedagogical & Technical Lab
 * project: coords.c
 * created on:  2026-02-14 - 19:23 +0100
 * 1st author:  sacha.juillard
 * description: program that takes coordinates and directions
 * and remove or adds x/y depending on movement
 */

#include "coords.h"

struct move_row {
    enum cardinal_direction direction;
    void (*fptr)(struct coords_2i *pos, int distance);
};

static void move_north(struct coords_2i *pos, int distance)
{
    pos->y -= distance;
}

static void move_south(struct coords_2i *pos, int distance)
{
    pos->y += distance;
}

static void move_east(struct coords_2i *pos, int distance)
{
    pos->x += distance;
}

static void move_west(struct coords_2i *pos, int distance)
{
    pos->x -= distance;
}

static void move_north_east(struct coords_2i *pos, int distance)
{
    pos->x += distance;
    pos->y -= distance;
}

static void move_north_west(struct coords_2i *pos, int distance)
{
    pos->x -= distance;
    pos->y -= distance;
}

static void move_south_east(struct coords_2i *pos, int distance)
{
    pos->x += distance;
    pos->y += distance;
}

static void move_south_west(struct coords_2i *pos, int distance)
{
    pos->x -= distance;
    pos->y += distance;
}

static const struct move_row MOVE_TABLE[] = {
    {NORTH, move_north},
    {SOUTH, move_south},
    {EAST, move_east},
    {WEST, move_west},
    {NORTH_EAST, move_north_east},
    {NORTH_WEST, move_north_west},
    {SOUTH_EAST, move_south_east},
    {SOUTH_WEST, move_south_west}
};

static const unsigned int MOVE_TABLE_LEN =
    sizeof(MOVE_TABLE) / sizeof(struct move_row);

void move_towards(struct coords_2i *pos,
                  enum cardinal_direction direction,
                  int distance)
{
    unsigned int i;

    for (i = 0; i < MOVE_TABLE_LEN; i++) {
        if (MOVE_TABLE[i].direction == direction) {
            MOVE_TABLE[i].fptr(pos, distance);
            return;
        }
    }
}
