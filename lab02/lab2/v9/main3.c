// Pointers, program memory, and silent run-time errors.
// Good programming practice.

#include <stdio.h>
#define MAXARRAYSIZE 5

int main()
{
int abc[5];
int k;

  for(k=0; k<MAXARRAYSIZE; k++)
	abc[k] = k;

  for(k=0; k<MAXARRAYSIZE; k++)
  	printf("%d\n",*(abc+k));

  for(k=0; k<MAXARRAYSIZE; k++)
	abc[k] = k;

  for(k=0; k<MAXARRAYSIZE; k++)
	printf("%d\n",*(abc+k));

}
