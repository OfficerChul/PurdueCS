/*
This function is calculator function.
This function can do addtion, substraction, multiplication and division.
The command for using this function is:
`calculator 13 + 14`
※Do not put 0 as the input, it will cause the error.
※You already know the answer without using calculator if you do some operation
with 0.
*/

#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculator(char *buf) {
  // Input example: calculator 13 + 14
  // Space at 10, 13, 15 start from `0`
  char operator;
  char *firstNumChar;
  int firstNum;
  char *secondNumChar;
  int secondNum;

  int spaceIndexArr[3];

  int index = 0;
  for (int i = 0; i < strlen(buf); i++) {
    if (buf[i] == ' ') {
      spaceIndexArr[index] = i;
      index++;
    }
  }
  int firstSpaceIndex = spaceIndexArr[0];  // 10
  int secondSpaceIndex = spaceIndexArr[1]; // 13
  int thirdSpaceIndex = spaceIndexArr[2];  // 15

  // Allocate memory for the numChars
  firstNumChar =
      (char *)malloc((secondSpaceIndex - firstSpaceIndex - 1) * sizeof(char));
  secondNumChar =
      (char *)malloc((strlen(buf) - thirdSpaceIndex - 1) * sizeof(char));

  // Parse buf
  // Parse first number
  int fsiCount = 0;
  for (int i = firstSpaceIndex + 1; i < secondSpaceIndex; i++) {
    firstNumChar[fsiCount] = buf[i];
    fsiCount++;
  }
  firstNum = atoi(firstNumChar);

  // Parse second number
  int ssiCount = 0;
  for (int i = thirdSpaceIndex + 1; i < strlen(buf); i++) {
    secondNumChar[ssiCount] = buf[i];
    ssiCount++;
  }
  secondNum = atoi(secondNumChar);

  // Parse operator
  operator= buf[secondSpaceIndex + 1];

  if (operator== '+') {
    printf("%d + %d = %d\n", firstNum, secondNum, firstNum + secondNum);
  } else if (operator== '-') {
    printf("%d - %d = %d\n", firstNum, secondNum, firstNum - secondNum);
  } else if (operator== '*') {
    printf("%d * %d = %d\n", firstNum, secondNum, firstNum * secondNum);
  } else if (operator== '/') {
    printf("%d / %d = %d\n", firstNum, secondNum, firstNum / secondNum);
  }
  free(firstNumChar);
  free(secondNumChar);
}