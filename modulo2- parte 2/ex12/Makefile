#Makefile

main: main.o isMultiple.o
	gcc -Wall -g main.o isMultiple.o -o main

main.o: main.c isMultiple.h
	gcc -Wall -g -c main.c
		
sum_v2.o: isMultiple.s
	gcc -Wall -g -c isMultiple.s
	
run: main
	./main
	
clean:
	rm *.o main
