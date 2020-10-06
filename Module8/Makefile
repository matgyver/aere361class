# A demo of a make file
# AerE 361
# Matthew E. Nelson

all: main.o help.o sub.o add.o libmymath.a
	gcc -o demo main.o help.o libmymath.a

sub.o: sub.c mymath.h
	gcc -c sub.c

add.o: add.c mymath.h
	gcc -c add.c

libmymath.a: 
	ar rs libmymath.a add.o sub.o

main.o: main.c help.h
	gcc -I . -c main.c
help.o: help.c help.h
	gcc -c help.c

clean:
	rm demo *.o *.a
