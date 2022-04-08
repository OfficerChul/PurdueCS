/* 	This is a bonus problem.
	This code is for getting the minimum of its two float arguments
	to the caller. */
#include <stdio.h>

float mintwo(float, float);

int main()
{
float x, y, z;

// read input
	scanf("%f %f",&x,&y);

// get the minumum number
	z = mintwo(x,y);

// print the result
	printf("The minimum number between %f and %f is %f\n", x, y, z);

}
