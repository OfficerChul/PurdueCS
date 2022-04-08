// Pointers and arrays.

#include <stdio.h>
#define MYDEBUG

int main()
{
int *abc;

int def;
 
#ifndef MYDEBUG
abc = &def;
#endif

#ifndef MYDEBUG
  *abc = 100;
#endif
 
#ifndef MYDEBUG
  *(abc+1) = 200;
#endif

#ifdef MYDEBUG
  *(abc+2) = 300;
#endif


#ifdef MYDEBUG
  printf("%d\n",*abc);
#endif

#ifdef MYDEBUG
  printf("%d\n",*(abc+1));
#endif

#ifdef MYDEBUG
  printf("%d\n",*(abc+2));
#endif

}
