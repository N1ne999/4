all:	main

main:	src/main.o src/sort.o
	gcc src/main.o src/sort.o -Wall -o main

src/main.o:	src/main.c
	gcc -c src/main.c -Wall -o src/main.o 

src/sort.o:	src/sort.c 
	gcc -c src/sort.c -Wall -o src/sort.o

.PHONY:	clean
clean:
	rm -rf src/*.o main 
