#makefile
all: work2.o
	gcc -o program work2.o

work2.o: work2.c
	gcc -c work2.c

run:
	./program

clean:
	rm *.o
	rm *~
