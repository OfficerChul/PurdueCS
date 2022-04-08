#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void minmaxagematch(char c) {
    patient_t *temp;
    temp = patientrecord;

    int minAge = temp->age;
    int maxAge = temp->age;
    
    
    while (temp->next != NULL) {
        if (minAge > temp->next->age) {
            minAge = temp->next->age;
        }
        if (maxAge < temp->next->age) {
            maxAge = temp->next->age;
        }

        temp = temp->next;
    }
    
    if (c == 'm') {
        printf("The minimum age: %d\n", minAge);
    } else if (c == 'M') {
        printf("The maximum age: %d\n", maxAge);
    } else {
        printf("Please only type 'm' or 'M'.");
    }
    
}