#Makefile

main: main.o keep_positives.o
	gcc -Wall -g main.o keep_positives.o -o main

main.o: main.c keep_positives.h
	gcc -Wall -g -c main.c
		
keep_positives.o: keep_positives.s
	gcc -Wall -g -c keep_positives.s
	
run: main
	./main
	
clean:
	rm *.o main
