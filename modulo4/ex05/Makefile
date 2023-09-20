#Makefile

main: main.o inc_and_square.o
	gcc -Wall -g main.o inc_and_square.o -o main

main.o: main.c inc_and_square.h
	gcc -Wall -g -c main.c
		
inc_and_square.o: inc_and_square.s
	gcc -Wall -g -c inc_and_square.s
	
run: main
	./main
	
clean:
	rm *.o main
