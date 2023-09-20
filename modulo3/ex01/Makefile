#Makefile

main: main.o count_zeros.o
	gcc -Wall -g main.o count_zeros.o -o main
	
main.o: main.c count_zeros.h
	gcc -Wall -g -c main.c
	
count_zeros.o: count_zeros.s
	gcc -Wall -g -c count_zeros.s

run: main
	./main

clean:
	rm *.o main
