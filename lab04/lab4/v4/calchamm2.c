#include "mycpp.h"
#include "myglobal.h"
#include "header.h"

int calchamm2()
{

    // Calculate the hamming distance.

    int hammingDistance = 0;

    for (int i = 0; i < N; i++)
    {
        if (X[i] != Y[i])
        {

            hammingDistance++;
        }
    }

    return hammingDistance;
}