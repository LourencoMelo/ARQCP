#Makefile

main: main.o sum_v3.o
	gcc -Wall -g main.o sum_v3.o -o main

main.o: main.c sum_v3.h
	gcc -Wall -g -c main.c
		
sum_v3.o: sum_v3.s
	gcc -Wall -g -c sum_v3.s
	
run: main
	./main
	
clean:
	rm *.o main
