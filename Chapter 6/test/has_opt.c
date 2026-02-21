/*
 * E89 Pedagogical & Technical Lab
 * project: has_opt.c
 * created on:  2026-02-04 - 11:18 +0100
 * 1st author:  sacha.juillard
 * description: test file for the has_opt function
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(has_opt, found)
{
    char *argv[] = {"prog", "-abc", NULL};

    cr_assert(eq(chr, has_opt(2, argv, 'a'), 1));
    cr_assert(eq(chr, has_opt(2, argv, 'b'), 1));
    cr_assert(eq(chr, has_opt(2, argv, 'c'), 1));
}

Test(has_opt, not_found)
{
    char *argv[] = {"prog", "-abc", NULL};

    cr_assert(eq(chr, has_opt(2, argv, 'z'), 0));
}

Test(has_opt, no_dash)
{
    char *argv[] = {"prog", "abc", NULL};

    cr_assert(eq(chr, has_opt(2, argv, 'a'), 0));
    cr_assert(eq(chr, has_opt(2, argv, 'b'), 0));
    cr_assert(eq(chr, has_opt(2, argv, 'c'), 0));
}
Test(has_opt, extra_arg)
{
    char *argv[] = {"prog", "-abc","-wawa", NULL};

    cr_assert(eq(chr, has_opt(3, argv, 'a'), 1));
    cr_assert(eq(chr, has_opt(3, argv, 'b'), 1));
    cr_assert(eq(chr, has_opt(3, argv, 'c'), 1));
    cr_assert(eq(chr, has_opt(3, argv, 'w'), 1));
    cr_assert(eq(chr, has_opt(3, argv, 'a'), 1));
    cr_assert(eq(chr, has_opt(3, argv, 'w'), 1));
    cr_assert(eq(chr, has_opt(3, argv, 'a'), 1));
}
