#include <stdio.h>

void abc(const int *);

int main() {
int x, y;

  x = 5;
  abc(&x);
  printf("%d\n", *x);

}


void abc(const int *a) {

  *a = 9;

}
