/* -
*  E89 Pedagogical & Technical Lab
*  project: stu.h
*  created on:  2026-02-04 - 11:16 +0100
*  1st author:  sacha.juillard
*  description: header for all functions
*/

#ifndef STU_H_
#define STU_H_

unsigned int stu_strlen(const char *s);
char *stu_strcpy(char *dest, const char *src);
char *stu_strcat(char *dest, const char *src);
int stu_strcmp(const char *s1, const char *s2);
char *stu_strdup(const char *src);
char *stu_strchr(const char *s, char c);
int stu_atoi(const char *str);
int print_base10(int nb);
int stu_puts(const char *s);
int has_opt(int ac, char **av, char opt);
char *has_opt_value(int ac, char **av, char opt);
void tc_putchar(char c);
int stu_pow(int nb, int power);
int fact(int nb);

#endif
