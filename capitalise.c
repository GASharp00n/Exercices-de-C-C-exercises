/*
 * E89 Pedagogical & Technical Lab
 * project:     capitalise.c
 * created on:  2025-10-17 - 19:16 +0200
 * 1st author:  sacha.juillard
 * description: returns the capitalised version of a letter;
 *              if not lowercase, returns the input as is
 */

#include <stdio.h>

char stu_capitalise(char letter)
{
    if (letter >= 'a' && letter <= 'z') {
        letter = letter - 32;
    }
    return (letter);
}
