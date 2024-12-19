CC = gcc
CFLAGS = -Wall -pedantic -std=c99 -lm

all:
	gcc -Wall --pedantic src/*.c -o bin/gauss

run:
	bin/gauss dane/A1.txt dane/b1.txt

test: all
	bin/gauss dane/A dane/b
