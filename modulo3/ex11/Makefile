#Makefile

main: main.o vec_greater20.o
	gcc -Wall -g main.o vec_greater20.o -o main

main.o: main.c vec_greater20.h
	gcc -Wall -g -c main.c
		
vec_greater20.o: vec_greater20.s
	gcc -Wall -g -c vec_greater20.s
	
run: main
	./main
	
clean:
	rm *.o main
