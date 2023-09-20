#Makefile

ex11: main.o rotate_right.o rotate_left.o
	gcc -m32 main.o rotate_right.o rotate_left.o -o ex11

rotate_left: rotate_left
	gcc -m32 -Wall -g -c rotate_left.c -o rotate_left.o
	
rotate_right.o: rotate_right.c rotate_left.h
	gcc -m32 -Wall -g -c rotate_right.c -o rotate_right.o

main.o: main.c rotate_right.h
	gcc -m32 -Wall -g -c main.c
	
run: ex11
	./ex11
	
clean: 
	rm -f * .o ex11 
