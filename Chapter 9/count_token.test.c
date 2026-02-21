/*
 * E89 Pedagogical & Technical Lab
 * project: count_token.test.c
 * created on:  2026-02-15 - 12:02 +0100
 * 1st author:  sacha.juillard
 * description: criterion test file for count_token
 */

#include <criterion/criterion.h>
#include "count_token.h"

Test(count_token, no_token)
{
    cr_assert_eq(count_token("hello", '0'), 0);
}

Test(count_token, multiple_tokens)
{
    cr_assert_eq(count_token("hello0world0", '0'), 2);
}

Test(count_token, only_tokens)
{
    cr_assert_eq(count_token("0000", '0'), 4);
}

Test(count_token, empty_string)
{
    cr_assert_eq(count_token("", '0'), 0);
}
