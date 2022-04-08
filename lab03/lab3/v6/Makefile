main.bin: main.o abc.o xyz.o
	gcc -o main.bin main.o abc.o xyz.o
main.o: main.c myapp.h
	gcc -c main.c
abc.o: abc.c myapp.h
	gcc -c abc.c
xyz.o: xyz.c
	gcc -c xyz.c
