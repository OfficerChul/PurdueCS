#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void agematch(unsigned short x) {
    patient_t *temp;
    temp = patientrecord;

    int check = 0;

    while (temp != NULL) {
        
        if (temp->age == x) {
            printf("%d %s %s %d %d %d %d\n", temp->age, temp->pname.first, temp->pname.last, temp->pheight.feet, 
            temp->pheight.inches, temp->weight, temp->purduegraduate);
            check++;
        }
        temp = temp->next;
    }
    if (check == 0) {
        printf("There is no patient of such age.\n");
    }
}