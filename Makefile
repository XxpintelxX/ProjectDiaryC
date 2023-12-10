CC = gcc

CFLAGS = -Wall -Wextra

SRC1 = src/mains/main1.c src/appointment.c src/cell.c src/complementary.c src/timer.c

SRC2 = src/mains/main2.c src/appointment.c src/cell.c src/complementary.c src/timer.c

SRC3 = src/mains/main3.c src/appointment.c src/cell.c src/complementary.c src/timer.c

OBJS1 = $(SRC1:.c=.o)

OBJS2 = $(SRC2:.c=.o)

OBJS3 = $(SRC3:.c=.o)

NAME1 = diary1

NAME2 = diary2

NAME3 = diary3

all: $(NAME3)

$(NAME1): $(OBJS1)
	$(CC) $(CFLAGS) $^ -o $@
	rm -rf $(OBJS1)

$(NAME2): $(OBJS2)
	$(CC) $(CFLAGS) $^ -o $@
	rm -rf $(OBJS2)

$(NAME3): $(OBJS3)
	$(CC) $(CFLAGS) $^ -o $@
	rm -rf $(OBJS3)

clean:
	rm -f $(NAME1) $(NAME2) $(NAME3)
	rm -rf $(OBJS1) $(OBJS2) $(OBJS3)
	rm -rf a.out

re: clean all

.PHONY: all clean re
