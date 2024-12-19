CC = gcc
CFLAGS = -Wall -pedantic -std=c99 -lm

all:
	gcc -Wall --pedantic src/*.c -o bin/gauss

run:
	bin/gauss dane/A1.txt dane/b1.txt

test: all
	@echo "Test 0:"
	bin/gauss dane/A dane/b
	@echo "Test 1:"
	./bin/gauss dane/A1.txt dane/b1.txt
	@echo "Test 2:"
	./bin/gauss dane/A2.txt dane/b2.txt
