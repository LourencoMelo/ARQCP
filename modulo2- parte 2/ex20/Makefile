#Makefile

main: main.o check_num.o
	gcc -Wall -g main.o check_num.o -o main

main.o: main.c check_num.h
	gcc -Wall -g -c main.c
		
check_num.o: check_num.s
	gcc -Wall -g -c check_num.s
	
run: main
	./main
	
clean:
	rm *.o main
