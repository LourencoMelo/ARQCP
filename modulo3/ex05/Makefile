#Makefile

main: main.o vec_sum.o
	gcc -Wall -g main.o vec_sum.o -o main

main.o: main.c vec_sum.h
	gcc -Wall -g -c main.c
		
vec_sum.o: vec_sum.s
	gcc -Wall -g -c vec_sum.s
	
run: main
	./main
	
clean:
	rm *.o main
