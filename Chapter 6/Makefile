CC = clang
CFLAGS = -Wall -Wextra -Werror -Iinclude

SRCS = src/atoi.c \
	   src/fact.c \
	   src/has_opt.c \
	   src/puts.c \
	   src/strcat.c \
	   src/strchr.c \
	   src/strcmp.c \
	   src/strcpy.c \
	   src/strdup.c \
	   src/strlen.c \
	   src/putchar.c \
	   src/pow.c \
	   src/print_base10.c \
	   src/has_opt_value.c

OBJS = $(SRCS:.c=.o)

SRCS_TEST = test/atoi.c \
			test/has_opt.c \
			test/has_opt_value.c \
			test/print_base10.c \
			test/puts.c \
			test/pow.c \
			test/strcat.c \
			test/strchr.c \
			test/strcmp.c \
			test/strcpy.c \
			test/strdup.c \
			test/strlen.c

OBJS_TEST = $(SRCS_TEST:.c=.o)

.PHONY: all clean fclean re

all: libstu.a

libstu.a: $(OBJS)
	ar rc libstu.a $(OBJS)

ut.out: $(OBJS) $(OBJS_TEST)
	$(CC) $(OBJS) $(OBJS_TEST) -lcriterion -o ut.out

clean:
	rm -f $(OBJS) $(OBJS_TEST) *.o

fclean: clean
	rm -f libstu.a ut.out

re: fclean all

