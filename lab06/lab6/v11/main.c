#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

patient_t *head, *patientrecord;
char *input;
char *filename = "patientlist.dat";

int main()
{

  

  while (1)
  {
    readpatientrec(filename);
    printf("> ");
    
    readinput();

    if (input[0] == 'a')
    {
      long age;
      char *ptr;
      if ((age = strtol((input + 1), &ptr, 10)) == 0) {
        printf("Please input the proper input.\n");
        continue;
      }
      

      agematch(age);
    }
    else if (input[0] == 'p')
    {
      boolean allumni;
      allumni = atoi(&input[2]);
      if (allumni != 0 && allumni != 1) {
        printf("Please input the proper input.\n");
      }
      purduematch(allumni);
    }
    else if (input[0] == 'm' || input[0] == 'M')
    {
      minmaxagematch(input[0]);
    } 
    else if (input[0] == 'q') {
      printf("Thank you!\n");
      exit(1);
    }
    else if (input[0] == 'c')  {
      addPatient(input);
    }
    else if (input[0] == 'P') {
      // printf("wtu\n");
      // removeOthers();
    }
    else if (input[1] != ' ') {
      printf("Please input the proper input.\n");
    }
    else {
      printf("Please input the proper input.\n");
    }
  }

  


return 0;
}