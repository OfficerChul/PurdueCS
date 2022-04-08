#include <stdio.h>
#include "header.h"

 void purduematch(boolean x) {
     patient_t *temp;
     temp = patientrecord;

    if (x != 1 && x != 0) {
        printf("Please put 1 or 0.\n");
    }

     while (temp != NULL) {
         if (temp->purduegraduate == x) {
             printf("%d %s %s %d %d %d %d\n", temp->age, temp->pname.first, temp->pname.last, temp->pheight.feet, 
            temp->pheight.inches, temp->weight, temp->purduegraduate);
         }
         temp = temp->next;
     }
 }