CC=gcc

CFLAGS=-std=c11 

all: grade

fatorial: fatorial.c test.c
	$(CC) -o fatorial fatorial.c test.c

grade: fatorial
	./fatorial

clean:
	rm -rf *.o fatorial
