# A simple Makefile

ex06: power_ref.o main.o

	gcc -lm power_ref.o main.o -o ex06
sum_even.o: power_ref.c

	gcc -g -Wall -lm -c power_ref.c -o power_ref.o
main.o: main.c

	gcc -g -Wall -lm -c main.c -o main.o
clean:

	rm -f *.o ex06
run: ex06

	./ex06
