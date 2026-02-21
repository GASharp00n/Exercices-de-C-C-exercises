/*
 * E89 Pedagogical & Technical Lab
 * project: strcmp.c
 * created on:  2025-11-03 - 18:17 +0100
 * 1st author:  sacha.juillard
 * description: function that compares 2 strings of characters,
 */

int stu_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i = i + 1;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0;
    } else {
        return 1;
    }
}
