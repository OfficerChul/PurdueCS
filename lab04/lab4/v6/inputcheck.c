#include <stdio.h>
#include <stdlib.h>
#define FILENAME2 15
#define FILENAME 16
#include "header.h"

char filename[FILENAME];
char numpos;

void inputcheck(void)
{

    // Get the input from the user
    int temp1 = 0;
    char c;
    while ((c = getchar()) != '\n')
    {

        if (c == ' ' || c == '\t')
        {
            c = getchar();
            numpos = c;
            break;
        }
        filename[temp1] = c;
        temp1++;
    }

    // Add '\0' to the filename
    filename[temp1] = '\0';

    // Get the length of String
    int countFilename = 0;
    while (filename[countFilename] != '\0')
    {
        countFilename++;
    }
    if (countFilename > FILENAME2)
    {
        printf("The length of filename cannot exceed 15.\n");
        exit(1);
    }

    for (int i = 0; i < FILENAME2; i++)
    {
        if (filename[i] == ' ')
        {
            printf("Do not include white space.\n");
            exit(1);
        }
    }
}