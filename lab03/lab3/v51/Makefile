chkformatpw: main.o checklowercase.o checkuppercase.o checknumerical.o checkspecialc.o
	gcc -o chkformatpw main.o checklowercase.o checkuppercase.o checknumerical.o checkspecialc.o
main.o: main.c header.h
	gcc -c main.c
checklowercase.o: checklowercase.c header.h
	gcc -c checklowercase.c
checkuppercase.o: checkuppercase.c header.h
	gcc -c checkuppercase.c
checknumerical.o: checknumerical.c header.h
	gcc -c checknumerical.c
checkspecialc.o: checkspecialc.c header.h
	gcc -c checkspecialc.c
