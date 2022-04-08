// Testing

#include <stdio.h>
#include <string.h>

int main()
{
char a[6];

  a[0] = 'N';
  a[1] = 'O';
  a[2] = 'T';
  a[3] = 'O';
  a[4] = '0';
  a[5] = 'G';
  printf("This is the empty element: %c", a[2]);
  printf("strlen(a = {N, O, T}): %ld %s\n", strlen(a), a);
}
