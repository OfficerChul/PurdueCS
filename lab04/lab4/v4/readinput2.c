#include "mycpp.h"
#include "myglobal.h"
#include "header.h"

int readinput2()
{
    // Check if N is valid.
    char n;
    char stemp[2];

    int temp0 = 0;
    while ((n = fgetc(stdin)) != '\n')
    {
        stemp[temp0] = n;
        temp0++;
    }

    N = atoi(stemp);

    if (N > DATASIZE)
    {

        printf("Value of N cannot be greater than 15\n");
        exit(1);
    }

    // Check if N exceeds 15.
    if (N > DATASIZE)
    {
        printf("Error: the number of N exceeds 15.");
        return -1;
    }

    // Read input

    char x, y;

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

    // Check if user doesn't type 0 or 1. Also, check if X and Y have different number of bits from value of N.
    int countX = 0;
    for (int i = 0; i < temp1; i++)
    {
        if (X[i] == 1 || X[i] == 0)
        {
            countX++;
        }
    }

    int countY = 0;
    for (int i = 0; i < temp2; i++)
    {
        if (Y[i] == 1 || Y[i] == 0)
        {
            countY++;
        }
    }

    if (countX == N && countY == N)
    {
        return 0;
    }
    else
    {
        printf("Error: the number of x and number of y is not the same or you input not proper inputs.\n");
        return -1;
    }

    return 0;
}
