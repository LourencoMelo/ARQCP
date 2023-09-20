#Makefile

main: main.o calculate.o
	gcc -Wall -g main.o calculate.o -o main

main.o: main.c calculate.h
	gcc -Wall -g -c main.c
		
calculate.o: calculate.s
	gcc -Wall -g -c calculate.s
	
run: main
	./main
	
clean:
	rm *.o main
