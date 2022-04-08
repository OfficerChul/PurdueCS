mysh: main.o readcommand.o parsecommand.o
	gcc -o mysh main.o readcommand.o parsecommand.o
main.o: main.c header.h
	gcc -c main.c
readcommand.o: readcommand.c header.h
	gcc -c readcommand.c
parsecommand.o: parsecommand.c header.h
	gcc -c parsecommand.c