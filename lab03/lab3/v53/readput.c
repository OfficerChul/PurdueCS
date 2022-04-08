#include <stdio.h>

int readinput(int *N, int *X, int *Y)
{

    // Check if N exceeds 15.
    if (N[0] > 15)
    {
        return -1;
    }

    // Check if user doesn't type 0 or 1. Also, check if X and Y have different number of bits from value of N.
    int countX = 0;
    for (int i = 0; i < N[0]; i++)
    {
        if (X[i] == 1 || X[i] == 0)
        {
            countX++;
        }
    }

    int countY = 0;
    for (int i = 0; i < N[0]; i++)
    {
        if (Y[i] == 1 || Y[i] == 0)
        {

            countY++;
        }
    }

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
