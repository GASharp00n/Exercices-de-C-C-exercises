/*
 * E89 Pedagogical & Technical Lab
 * project: add.c
 * created on:  2025-11-23 - 12:58 +0100
 * 1st author:  sacha.juillard
 * description: function that adds x on y and makes result equals to
 * this operation
 */

#include "add.h"

void stu_add(struct add *add)
{
    add->result = add->x + add->y;
}
