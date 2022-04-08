#include <stdio.h>
#include <stdlib.h>

int main()
{

    char filename[20], c;
    FILE *fp, *rfp, *zfp;

    // Get the input of filename
    int temp1 = 0;
    while ((c = getchar()) != '\n')
    {
        filename[temp1] = c;
        temp1++;
    }
    filename[temp1] = '\0';

    fp = fopen(filename, "r+");

    if (fp == NULL)
    {
        printf("The file doesn't exist.\n");
        exit(1);
    }

    int i = 0;
    char num[8] = {'0', '1', '2', '3', '4', '5', '6', '7'};

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (filename[i] == '.' && filename[i + 1] == 'P' && filename[i + 2] == num[j])
            {
                filename[i] = '\0';
                break;
            }
        }
    }

    rfp = fopen(filename, "w+");

    int temp = 0;

    while ((c = fgetc(fp)) != EOF)
    {

        int binaryArr[8] = {0, 0, 0, 0, 0, 0, 0, 0};
        char charArr[8];

        for (int i = 7; i > -1; i--)
        {

            binaryArr[i] = c % 2;
            c = c / 2;

            if (c == 0)
            {
                break;
            }
        }

        for (int i = 0; i < 8; i++)
        {
            charArr[i] = binaryArr[i] + '0';
            fputc(charArr[i], rfp);
        }
    }

    return 0;
}
