/*
 * E89 Pedagogical & Technical Lab
 * project: sublen.test.c
 * created on: 2026-02-15
 * 1st author: sacha.juillard
 * description: test file for the sublen function
 */

#include <criterion/criterion.h>
#include <stdlib.h>
#include "sublen.h"

Test(sublen, normal)
{
    unsigned int *result;

    result = sublen("abc;def;ghi", ';');
    cr_assert_not_null(result);

    cr_assert_eq(result[0], 3);
    cr_assert_eq(result[1], 3);
    cr_assert_eq(result[2], 3);

    free(result);
}

Test(sublen, empty_between_tokens)
{
    unsigned int *result;

    result = sublen("abc;;def", ';');
    cr_assert_not_null(result);

    cr_assert_eq(result[0], 3);
    cr_assert_eq(result[1], 0);
    cr_assert_eq(result[2], 3);

    free(result);
}

Test(sublen, token_at_end)
{
    unsigned int *result;

    result = sublen("abc;def;", ';');
    cr_assert_not_null(result);

    cr_assert_eq(result[0], 3);
    cr_assert_eq(result[1], 3);
    cr_assert_eq(result[2], 0);

    free(result);
}
