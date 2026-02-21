/*
 * E89 Pedagogical & Technical Lab
 * project: coords.h
 * created on: 2026-02-14
 * 1st author: sacha.juillard
 * description: header that stores the coords
 */

#ifndef COORDS_H_
#define COORDS_H_

struct coords_2i {
    int x;
    int y;
};

enum cardinal_direction {
    NORTH,
    SOUTH,
    EAST,
    WEST,
    NORTH_EAST,
    NORTH_WEST,
    SOUTH_EAST,
    SOUTH_WEST
};

void move_towards(struct coords_2i *pos,
                  enum cardinal_direction direction,
                  int distance);

#endif
