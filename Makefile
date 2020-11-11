
CC=gcc
AR=ar
FLAGS= -Wall -g

all:mains maind mymaths mymathd
main.o:main.c myMath.h
	$(CC) $(FLAGS) -c main.c
power.o:power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o:basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
mymathd:power.o basicMath.o
	$(CC) -o libmyMath.so -shared power.o basicMath.o
mymaths:basicMath.o power.o
	$(AR) -rcs libmyMath.a basicMath.o power.o
maind:main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
mains:mymaths main.o
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

.PHONY: clean all

clean:
	rm -f*.o*.a*.so mains maind