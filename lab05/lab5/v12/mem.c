#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *memnote[];
int memCounter;
int memRemainder;
int firstArr;

void mem(char *buf) {

  if (strlen(buf) == 3) {
    memRemainder = memCounter % 10;

    for (int i = memRemainder - 1; i > -1; i--) {
      if (memnote[i] == NULL) {
        continue;
      } else {
        printf(" %s ||", memnote[i]);
      }
    }
    for (int i = 9; i > memRemainder - 1; i--) {
      if (memnote[i] == NULL) {
        continue;
      } else {
        printf(" %s ||", memnote[i]);
      }
    }
    printf("\n");
  } else {
    int memoSize = strlen(buf) - 4;
    // Allocate the size of the memo to the new, element of String array
    *(memnote + memCounter) = (char *)malloc(memoSize * sizeof(char));

    firstArr = memCounter % 10;

    char *word;
    word = malloc(memoSize * sizeof(char));
    for (int i = 0; i < memoSize; i++) {
      word[i] = buf[4 + i];
    }

    strcpy(memnote[memCounter % 10], word);
    free(word);
    memCounter++;
  }
}