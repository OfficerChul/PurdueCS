readinput: main.o calchamm.o readput.o writeoutput.o
	gcc -o calchamming main.o calchamm.o readput.o writeoutput.o
main.o: main.c header.h
	gcc -c main.c
calchamm.o: calchamm.c header.h
	gcc -c calchamm.c
readput.o: readput.c header.h
	gcc -c readput.c
writeoutput.o: writeoutput.c header.h
	gcc -c writeoutput.c
