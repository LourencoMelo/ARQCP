#Makefile

teste: subsidio_ferias.o subsidio.o main.o
	gcc -g -Wall subsidio_ferias.o subsidio.o main.o -o teste

subsidio_ferias.o: subsidio_ferias.s
	gcc -g -Wall -c subsidio_ferias.s -o subsidio_ferias.o

subsidio.o: subsidio.s
	gcc -g -Wall -c subsidio.s -o subsidio.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o teste

run: teste
	./teste
