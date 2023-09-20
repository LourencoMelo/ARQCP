#Makefile

main: main.o vec_search.o
	gcc -Wall -g main.o vec_search.o -o main

main.o: main.c vec_search.h
	gcc -Wall -g -c main.c
		
vec_search.o: vec_search.s
	gcc -Wall -g -c vec_search.s
	
run: main
	./main
	
clean:
	rm *.o main
