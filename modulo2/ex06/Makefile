#Makefile

main: main.o concatBytes.o
	gcc -Wall -g main.o concatBytes.o -o main

main.o: main.c concatBytes.h
	gcc -Wall -g -c main.c
		
concatBytes.o: concatBytes.s
	gcc -Wall -g -c concatBytes.s
	
run: main
	./main
	
clean:
	rm *.o main
