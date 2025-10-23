CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -g

all: main

main: main.c
	$(CC) $(CFLAGS) main.c -o main

run: main
	./main

valgrind: main
	valgrind --leak-check=full --track-origins=yes ./main

clean:
	rm -f main
