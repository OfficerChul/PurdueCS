#include <stdio.h>
#include <stdlib.h>

int readinput(int *N, int **X, int **Y)
{

    //fscanf(stdin, "%d", &N[0]);

    char x, y;

    // Allocate the memory for array X and Y

    *X = (int *)malloc(N[0] * sizeof(int));
    *Y = (int *)malloc(N[0] * sizeof(int));

    // Check if malloc() failed
    if (X == NULL || Y == NULL)
    {
        printf("Memory not allocated.\n");
        return -1;
    }

    for (int i = 0; i < N[0]; i++)
    {
        (*X)[i] = 3;
        (*Y)[i] = 3;
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

            (*X)[temp1] = x - '0';

            temp1++;
        }
    }

    int temp2 = 0;
    while ((y = fgetc(stdin)) != '\n')
    {

        if (y == ' ')
        {
            continue;
        }
        else if (y == '1' || y == '0')
        {

            (*Y)[temp2] = y - '0';

            temp2++;
        }
    }

    // Check if user doesn't type 0 or 1. Also, check if X and Y have different number of bits from value of N.
    int countX = 0;
    for (int i = 0; i < N[0]; i++)
    {
        if ((*X)[i] == 1 || (*X)[i] == 0)
        {
            countX++;
        }
    }

    int countY = 0;
    for (int i = 0; i < N[0]; i++)
    {
        if ((*Y)[i] == 1 || (*Y)[i] == 0)
        {
            countY++;
        }
    }

    // printf("This is the counter for X and Y: %d and %d\n", countX, countY);
    // printf("This is N[0]: %d\n", N[0]);
    if (countX == N[0] && countY == N[0])
    {
        return 0;
    }
    else
    {
        return -1;
    }

    return 0;
}
