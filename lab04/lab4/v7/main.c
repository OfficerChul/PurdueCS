#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[16];
    char resultFilename[20];
    char c, countPaddingChar;
    int countPaddingNum = 0;
    FILE *fp, *rfp, *pfp;

    char rawdat[9];

    // Get the input of filename
    int temp = 0;
    while ((c = getchar()) != '\n')
    {
        filename[temp] = c;
        temp++;
    }
    filename[temp] = '\0';

    fp = fopen(filename, "r+");

    if (fp == NULL)
    {
        printf("The file doesn't exist.\n");
        exit(1);
    }

    // Make a output filename by putting '.P' + 'num'
    pfp = fopen(filename, "r");
    while ((countPaddingChar = fgetc(pfp)) != EOF)
    {
        countPaddingNum++;
    }
	countPaddingNum--;
    countPaddingNum = 8 - (countPaddingNum % 8);
    if (countPaddingNum == 8)
    {
        countPaddingNum = 0;
    }

    char P[] = ".P";
    sprintf(resultFilename, "%s%s%d", filename, P, countPaddingNum);

    rfp = fopen(resultFilename, "w+");

    // Read textfiles

    int digitNum;

    int count = 0;
    while (fgets(rawdat, 9, fp) != NULL)
    {

        int result = 0;

        for (int i = 0; i < 8; i++)
        {

            digitNum = rawdat[i] - '0';

            if (digitNum == 1)
            {
                int power = 7 - i;
                result = result + (digitNum << power);
            }
        }
        count++;

        fputc(result, rfp);
    }

    fclose(fp);
    fclose(rfp);

    return 0;
}
