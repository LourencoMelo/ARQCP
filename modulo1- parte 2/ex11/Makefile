# A simple Makefile

ex11: palindrome.o main.o

	gcc -g -Wall -lm palindrome.o main.o -o ex11
palindrome.o: palindrome.c

	gcc -g -Wall -lm -c palindrome.c -o palindrome.o
main.o: main.c

	gcc -g -Wall -lm -c main.c -o main.o
clean:

	rm -f *.o ex11
run: ex11

	./ex11
