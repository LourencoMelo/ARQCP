# A simple Makefile

ex22c: functions.o main.o
	gcc functions.o main.o -o ex22c
        
functions.o: functions.c
	gcc -g -Wall -c functions.c -o functions.o
        
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
        
clean:
	rm -f *.o ex22c
        
run: ex22c
	./ex22c
