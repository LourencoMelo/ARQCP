#Makefile

main: main.o even_tests.o
	gcc -Wall -g main.o even_tests.o -o main

main.o: main.c even_tests.h
	gcc -Wall -g -c main.c
		
even_tests.o: even_tests.s
	gcc -Wall -g -c even_tests.s
	
run: main
	./main
	
clean:
	rm *.o main
