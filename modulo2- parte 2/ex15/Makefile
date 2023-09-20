#Makefile

main: main.o compute.o
	gcc -Wall -g main.o compute.o -o main

main.o: main.c compute.h
	gcc -Wall -g -c main.c
		
compute.o: compute.s
	gcc -Wall -g -c compute.s
	
run: main
	./main
	
clean:
	rm *.o main
