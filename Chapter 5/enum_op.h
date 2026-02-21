/* -
*  E89 Pedagogical & Technical Lab
*  project: enum_op.h
*  created on:  2025-11-23 - 12:51 +0100
*  1st author:  sacha.juillard
*  description: header defining enum e_operation and function enum_op
*/

#ifndef ENUM_OP_H_
#define ENUM_OP_H_

enum e_operation {
    OP_ADD,
    OP_SUB,
    OP_MUL,
    OP_DIV,
    OP_MOD,
};

int enum_op(enum e_operation op, int a, int b);

#endif
