CC = gcc
CFLAGS = -Wall -Wextra -O2

all: main

main: main.c mean.c median.c mode.c stats.h
	$(CC) $(CFLAGS) main.c mean.c median.c mode.c -o main

clean:
	rm -f main
