// More useful malloc() example.

#include <stdio.h>
#include <stdlib.h>

int main() {

FILE *fp;
int vecsize;
int *vector;
int i;

  fp = fopen("test.bob","r");
  if(fp == NULL) {
	fprintf(stderr,"file test.bob does not exist\n");
	exit(1);
  }

  fscanf(fp,"%d",&vecsize);

  vector = (int *) malloc(vecsize * sizeof(int));
  if(vector == NULL) {
	fprintf(stderr,"malloc failed\n");
	exit(1);
  }

  for(i=0; i<vecsize; i++)
	fscanf(fp,"%d",&vector[i]);

  for(i=0; i<vecsize; i++)
	fprintf(stdout,"%d\n",vector[i]);

  free(vector);

}
