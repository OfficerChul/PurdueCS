#include <stdio.h>
#include <stdlib.h>
#define FILENAME 16
#define FILENAME2 15
#include "header.h"

extern char filename[];
extern char numpos;

int main()
{
    FILE *rfp;
    int temp;
    char stream;
    unsigned int decpos;

    char c;
    char E[] = ".E2";
    char outfile[FILENAME + 3];

    inputcheck();

    // Convert char numpos to integer and check if the integer is between 0 to 7
    decpos = numpos - '0';
    if (decpos < 0 || decpos > 7)
    {
        printf("The number must be a single digit -- either 0, 1, ..., 7 or please put the digit you want to flip.\n");
        exit(1);
    }

    for (int i = 0; i < FILENAME2; i++)
    {
        outfile[i] = filename[i];
    }

    FILE *fp = fopen(filename, "r+");

    if (fp == NULL)
    {
        printf("File doesn't exist.\n");
        exit(1);
    }

    temp = 0; // Counter for checking
    for (int i = 0; i < 19; i++)
    {
        if (outfile[i] == '.' && outfile[i + 1] == 'E' && outfile[i + 2] == '2' && outfile[i + 3] == '\0')
        {
            temp++;
            outfile[i] = '\0';
        }
    }

    if (temp == 0)
    {
        sprintf(outfile, "%s%s", filename, E);
    }

    rfp = fopen(outfile, "w+");

    unsigned int mask;
    // Set all bits of mask to 1
    mask = ~0;

    mask = ~(mask << decpos + 1);
    mask = mask >> decpos;
    mask = mask << decpos;

    // Encrypt
    while ((stream = fgetc(fp)) != EOF)
    {
        // Set the certain bit to 1
        stream = stream ^ mask;

        fputc(stream, rfp);
    }
    remove(filename);

    fclose(fp);
    fclose(rfp);

    return 0;
}
