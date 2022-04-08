#include "mycpp.h"
#include "myglobal.h"
#include "header.h"

void write1Darray(int num, int *data1d)
{
    printf("Hamming Distance: %d\n", num);
    printf("Array of Z = [");
    for (int i = 0; i < N; i++)
    {
        printf("%d", data1d[i]);
        if (i != N - 1)
        {
            printf(",");
        }
    }
    printf("]\n");
}