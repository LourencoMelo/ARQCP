#Makefile

main: main.o crossSumBytes.o
	gcc -Wall -g main.o crossSumBytes.o -o main

main.o: main.c crossSumBytes.h
	gcc -Wall -g -c main.c
		
crossSumBytes.o: crossSumBytes.s
	gcc -Wall -g -c crossSumBytes.s
	
run: main
	./main
	
clean:
	rm *.o main
