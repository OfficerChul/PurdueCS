#include "mycpp.h"
#include "myglobal.h"
#include "header.h"

void calcdiff(void)
{
    for (int i = 0; i < N; i++)
    {
        if (X[i] == Y[i])
        {
            Z[i] = 0;
        }
        else
        {
            Z[i] = 1;
        }
    }
}