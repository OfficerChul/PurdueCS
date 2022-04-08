#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void addPatient(char *input) {
    char *newPatient;
    newPatient = malloc(sizeof(char) * (strlen(input)));

    FILE *pfp = fopen(filename, "a+");

    for (int i = 1; i < strlen(input); i++) {
        newPatient[i] = input[i + 1];
    }
    newPatient[0] = '\n';
    
    fprintf(pfp, "%s", newPatient);
    
    fclose(pfp);

}