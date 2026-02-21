/*
 * E89 Pedagogical & Technical Lab
 * project: has_opt_value
 * created on:  2026-02-04 - 11:18 +0100
 * 1st author:  sacha.juillard
 * description: test file for the has_opt_value function
 */
#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(has_opt_value, found)
{
    char *argv[] = {"prog", "-f", "file.txt", 0};

    cr_assert(eq(str, has_opt_value(3, argv, 'f'), "file.txt"));
}
Test(has_opt_value, not_found)
{
    char *argv[] = {"prog", "-x", "file.txt", 0};

    cr_assert(eq(ptr, has_opt_value(3, argv, 'f'), 0));
}
Test(has_opt_value, no_dash)
{
    char *argv[] = {"prog", "f", "file.txt", 0};

    cr_assert(eq(ptr, has_opt_value(3, argv, 'f'), 0));
}
Test(has_opt_value, no_value)
{
    char *argv[] = {"prog", "-f", 0};

    cr_assert(eq(ptr, has_opt_value(2, argv, 'f'), 0));
}
Test(has_opt_value, found_2)
{
    char *argv[] = {"prog", "-af", "file.txt", 0};

    cr_assert(eq(str, has_opt_value(3, argv, 'f'), "file.txt"));
}
