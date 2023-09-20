#Makefile

main: main.o encrypt.o
	gcc -Wall -g main.o encrypt.o -o main

main.o: main.c encrypt.h
	gcc -Wall -g -c main.c
		
encrypt.o: encrypt.s
	gcc -Wall -g -c encrypt.s
	
run: main
	./main
	
clean:
	rm *.o main
