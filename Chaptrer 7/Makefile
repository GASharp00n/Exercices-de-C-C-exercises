CC = clang
CFLAGS = -Wall -Wextra -Werror -I../libstu/include

SRCS = src/main.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: c7

c7: $(OBJS) libstu.a
	$(CC) $(OBJS) libstu.a -o c7

libstu.a:
	$(MAKE) -C ../libstu
	cp ../libstu/libstu.a libstu.a

clean:
	rm -f $(OBJS)
	$(MAKE) -C ../libstu clean

fclean: clean
	rm -f c7 libstu.a
	$(MAKE) -C ../libstu fclean

re: fclean all

