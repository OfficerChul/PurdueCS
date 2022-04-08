#include <stdio.h>

int main()
{
    FILE *rfp;
    int temp, stream;
    char filename[11]; //changed
    char E[] = ".E";
    char outfile[13];

    scanf("%[^\n]", filename);
    
    // Get the length of String
    
    int countFilename = 0;
    while (filename[countFilename] != '\0') {
        countFilename++;
    }
    if (countFilename > 11) {
        printf("The length of filename cannot exceed 10.\n");
        return -1;
    }
    
    for (int i = 0; i < 13; i++)
    {
        outfile[i] = filename[i];
    }

    FILE *fp = fopen(filename, "r+");
    
    for (int i = 0; i < 11; i++)
    {
        if (filename[i] == ' ')
        {
            printf("Do not include white space.\n");
            return -1;
        }
    }
    
    if (fp == NULL)
    {
        printf("File doesn't exist.\n");
        return -1;
    }

    temp = 0; // Counter for checking
    for (int i = 0; i < 13; i++)
    {
        if (outfile[i] == '.' && outfile[i + 1] == 'E' && outfile[i + 2] == '\0')
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

    // Encrypt
    if (fp)
    {
        while ((stream = fgetc(fp)) != EOF)
        {
            stream = 255 - stream;
            fputc(stream, rfp);
        }
        remove(filename);
    }

    fclose(fp);
    fclose(rfp);
    
    return 0;
}
