#include <stdio.h>
#include "header.h"

int calchamm(int N, int *X, int *Y)
{

    // Calculate the hamming distance.

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (X[i] != Y[i])
        {
            count++;
        }
    }

    return count;
}
