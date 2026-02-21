/*
 * E89 Pedagogical & Technical Lab
 * project: strdup_token.test.c
 * created on:  2026-02-14 - 19:53 +0100
 * 1st author:  sacha.juillard
 * description: strdup_token test file
 */

#include <criterion/criterion.h>
#include "strdup_token.h"
#include "strlen_token.h"

Test(stu_strdup_token, normal)
{
    char *str;
    char *dup;

    str = "hello0world";
    dup = stu_strdup_token(str, '0');
    cr_assert_str_eq(dup, "hello");
    free(dup);
}

Test(stu_strdup_token, no_token)
{
    char *str;
    char *dup;

    str = "hello world";
    dup = stu_strdup_token(str, '0');
    cr_assert_str_eq(dup, "hello world");
    free(dup);
}

Test(stu_strdup_token, empty_string)
{
    char *str;
    char *dup;

    str = "";
    dup = stu_strdup_token(str, '0');
    cr_assert_str_eq(dup, "");
    free(dup);
}

Test(stu_strdup_token, token_at_start)
{
    char *str;
    char *dup;

    str = "0hello world";
    dup = stu_strdup_token(str, '0');
    cr_assert_str_eq(dup, "");
    free(dup);
}

Test(stu_strdup_token, token_at_end)
{
    char *str;
    char *dup;

    str = "hello0";
    dup = stu_strdup_token(str, '0');
    cr_assert_str_eq(dup, "hello");
    free(dup);
}

Test(stu_strdup_token, consecutive_tokens)
{
    char *str;
    char *dup;

    str = "hello00world";
    dup = stu_strdup_token(str, '0');
    cr_assert_str_eq(dup, "hello");
    free(dup);
}
