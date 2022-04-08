#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void removeOthers()
{
    patient_t *temp, *curr, *print;
    temp = patientrecord;
    curr = patientrecord;
    print = patientrecord;
    
    
    while (curr != NULL) {
        if (temp->purduegraduate == 0) {
                
                temp = curr->next;
                curr->next = temp;
                
                printf("temp name: %s\n", temp->pname.last);
                free(curr);
                
                curr = temp;
                printf("curr name: %s\n", curr->pname.last);
            } 
        else {
                temp = curr->next;
                curr = temp;
        }
    }
}
