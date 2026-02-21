/*
 *  E89 Pedagogical & Technical Lab
 *  project: operandor.h
 *  created on:  2025-11-19 - 10:39 +0100
 *  1st author:  sacha.juillard
 *  description: header for the operandor function and main
 */

#ifndef OPERANDOR_H_
#define OPERANDOR_H_

struct operandor {
    int x;
    int y;
    char c;
};

struct operandor *operandor_create(int x, int y, char c);
int operandor_init(struct operandor *val, int x, int y, char c);
int operandor_compute(struct operandor *val);

#endif /* OPERANDOR_H_ */

