#Makefile

main: main.o decrypt.o
	gcc -Wall -g main.o decrypt.o -o main

main.o: main.c decrypt.h
	gcc -Wall -g -c main.c
		
decrypt.o: decrypt.s
	gcc -Wall -g -c decrypt.s
	
run: main
	./main
	
clean:
	rm *.o main
