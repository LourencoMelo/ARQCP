# A simple Makefile

ex13: where_is.o main.o

	gcc -g -Wall -lm where_is.o main.o -o ex13
where_is.o: where_is.c

	gcc -g -Wall -lm -c where_is.c -o where_is.o
main.o: main.c

	gcc -g -Wall -lm -c main.c -o main.o
clean:

	rm -f *.o ex13
run: ex13

	./ex13
