#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

patient_t *curr, *patientrecord, *tail;



void readpatientrec(char *filename)
{

  // temporary buffer
  unsigned short tempage;
  char tempfirst[21];
  char templast[21];
  int tempfeet;
  int tempinches;
  unsigned int tempweight;
  int temppurduegraduate;

  FILE *fp = fopen(filename, "r+");  

  if (fp == NULL)
  {
    printf("no such file exists.\n");
    exit(1);
  }

  patientrecord = NULL;
  int order = 1;

  // Create a Linked list
  while (fscanf(fp, "%hd %s %s %d %d %d %d", &tempage, tempfirst, templast,
                &tempfeet, &tempinches, &tempweight,
                &temppurduegraduate) != EOF)
  {

    curr = (patient_t *)malloc(sizeof(patient_t));
    curr->pname.first = (char *)malloc(21);
    curr->pname.last = (char *)malloc(21);

    curr->age = tempage;
    strcpy(curr->pname.first, tempfirst);
    strcpy(curr->pname.last, templast);
    curr->pheight.feet = tempfeet;
    curr->pheight.inches = tempinches;
    curr->weight = tempweight;
    curr->purduegraduate = temppurduegraduate;

    if (patientrecord == NULL)
    {
      patientrecord = curr;
    }
    else
    {
      tail->next = curr;
    }
    tail = curr;
  }

  tail->next = NULL;


}