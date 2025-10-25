CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -g

all: calc

calc: main.o calc.o
	$(CC) $(CFLAGS) main.o calc.o -o calc

main.o: main.c calc.h
	$(CC) $(CFLAGS) -c main.c

calc.o: calc.c calc.h
	$(CC) $(CFLAGS) -c calc.c

run: calc
	./calc

clean:
	rm -f *.o calc
