#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void readinput() {
    size_t size = 5;
    
    int len;
    
    input = malloc(sizeof(char) * size);

    len = getline(&input, &size, stdin);
    

    if (len == -1) {
        printf("Please input the proper command.");
    }
    input[strlen(input) - 1] = '\0';
    
    
    
}