mysh: main.o cprompt.o mem.o d.o x.o calculator.o
	gcc -o mysh main.o cprompt.o mem.o d.o x.o calculator.o
main.o: main.c header.h
	gcc -c main.c
cprompt.o: cprompt.c header.h
	gcc -c cprompt.c
mem.o: mem.c header.h
	gcc -c mem.c
d.o: d.c header.h
	gcc -c d.c
x.o: x.c header.h
	gcc -c x.c
calculator.o: calculator.c header.h
	gcc -c calculator.c
