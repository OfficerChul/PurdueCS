#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int N[1];
    int *X;
    int *Y;
    char n;
    char stemp[5];

    int temp0 = 0;
    while ((n = fgetc(stdin)) != '\n')
    {
        stemp[temp0] = n;
        temp0++;
    }

    N[0] = atoi(stemp);

    // Run readinput()
    if (readinput(N, &X, &Y) == -1)
    {
        printf("Error!!!\n");
        exit(1);
    }

    // Run calchamm() and writeoutput()
    writeoutput(calchamm(N[0], X, Y));

    return 0;
}
