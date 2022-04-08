// Use functions changev1() and changev2() to illustrate
// passing by value vs. reference. 

#include <stdio.h>

void changev1(int);
void changev2(int *);
void changev3(void);

int x;

int main()
{

  x = 7;

  changev1(x);
  printf("%d\n",x);

  changev2(&x);
  printf("%d\n",x);
  
  changev3();
  printf("%d\n",x);
}


void changev1(int b)
{
  b = 2;
}


void changev2(int *b)
{
  b = 2;
}

void changev3(void)
{
 x = 5;
}

