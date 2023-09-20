#Makefile

main: main.o functions.o
	gcc -Wall -g main.o functions.o -o main

main.o: main.c functions.h
	gcc -Wall -g -c main.c
		
functions.o: functions.s
	gcc -Wall -g -c functions.s
	
run: main
	./main
	
clean:
	rm *.o main
