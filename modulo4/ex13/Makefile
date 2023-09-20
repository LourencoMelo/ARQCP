#Makefile

ex13: main.o activate_bits.o activate_bits.o
	gcc -m32 main.o activate_bits.o activate_bits.o -o ex13

activate_bits: activate_bits
	gcc -m32 -Wall -g -c activate_bits.c -o activate_bits.o
	
activate_bits.o: activate_bits.c activate_bits.h
	gcc -m32 -Wall -g -c activate_bits.c -o activate_bits.o

main.o: main.c activate_bits.h
	gcc -m32 -Wall -g -c main.c
	
run: ex13
	./ex13
	
clean: 
	rm -f * .o ex13 
