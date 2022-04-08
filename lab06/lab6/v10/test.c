#include <stdio.h>
#include <stdlib.h>

int main() {

  char *a;
  a = malloc(sizeof(char) * 4);
  for (int i = 0; i < 3; i++) {

    a[i] = 'q';
  }

  a[3] = '\0';
  printf("a: %s", a);

  return 0;
}