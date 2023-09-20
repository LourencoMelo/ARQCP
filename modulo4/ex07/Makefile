#Makefile

main: main.o count_even.o
	gcc -Wall -g main.o count_even.o -o main

main.o: main.c count_even.h
	gcc -Wall -g -c main.c
		
count_even.o: count_even.s
	gcc -Wall -g -c count_even.s
	
run: main
	./main
	
clean:
	rm *.o main
