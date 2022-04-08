#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int N[1];
    int X[15];
    int Y[15];


    	char n, x, y;
	char stemp[2];

	int temp0 = 0;
	while((n = fgetc(stdin)) != '\n'){
		stemp[temp0] = n;
		temp0++;
	}

	N[0] = atoi(stemp);

	if (N[0] > 15) {
	
		printf("Value of N cannot be greater than 15\n");
		exit(1);
	}

    int temp1 = 0;
    while ((x = fgetc(stdin)) != '\n')
    {
        if (x == ' ')
        {
            continue;
        }
        else if (x == '1' || x == '0')
        {
            X[temp1] = x - '0';
            temp1++;
        }
    }
	
	fflush(stdin);

    int temp2 = 0;
    while ((y = fgetc(stdin)) != '\n')
    {
        if (y == ' ')
        {
            continue;
        }
        else if (y == '1' || y == '0')
        {
            Y[temp2] = y - '0';
            temp2++;
        }
    }

	

    // Run readinput()
    if (readinput(N, X, Y) == -1)
    {
        printf("Error!!!\n");
        exit(1);
    }
    // Run calchamm() and writeoutput()
    writeoutput(calchamm(N[0], X, Y));

    return 0;
}
