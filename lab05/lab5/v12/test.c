#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

char *memnote[];
int memCounter;

void mem(char *buf)
{
    int memRemainder = 0;
    if (strlen(buf) == 3)
    {
        printf("memCounter inside the if: %d\n", memCounter);
        if (memCounter > 9)
        {

            memRemainder = memCounter % 10;
            for (int i = memRemainder; i > -1; i--)
            {
                printf("%s", memnote[i]);
                printf(", ");
            }
            for (int i = 9; i > 9 - memRemainder + 1; i--)
            {
                printf("%s", memnote[i]);
                if (i != 9 - memRemainder)
                {
                    printf(", ");
                }
            }
        }
        else
        {
            for (int i = 9; i > -1; i--)
            {
                printf("%s", memnote[i]);
                if (i != 9)
                {
                    printf(", ");
                }
            }
            printf("\n");
        }
    }
}
else
{
    int memoSize = strlen(buf) - 4;                                    // Get the length of the memo( `full String` - `mem` )
    *(memnote + memCounter) = (char *)malloc(memoSize * sizeof(char)); // Allocate the size of the memo to the new element of String array

    if (memCounter > 9)
    {
        memCounter = memCounter % 10;
    }

    for (int j = 0; j < memoSize; j++)
    {
        memnote[memCounter][j] = buf[4 + j];
    }
    memCounter++;
    printf("memCounter: %d\n", memCounter);
}
}