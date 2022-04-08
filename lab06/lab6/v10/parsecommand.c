#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int parsecommand(void) {

  int EOSIndex; // 22
  int countSpace = 0;

  // ex) vim main.c
  // Space at buf[3]
  // Index of the EOS: buf[10]

  // ex) mv test1.dat test2.dat
  // Space at buf[2], buf[12]
  // Index of the EOS: buf[22]

  // Count Space and Get the length of the string
  for (int i = 0; i < 100; i++) {
    if (buf[i] == ' ') {
      countSpace++;
    }
    if (buf[i] == '\0') {
      EOSIndex = i;
      break;
    }
  }
  EOSIndex++;
  // Allocate the memory for *commandcomp
  commandcomp = malloc((countSpace + 2) * sizeof(char *));

  // Allocate the memory for **commandcomp according to the size
  int i = 0;
  int space = 0;
  int size = 0;

  int spaceCheck = 1;
  while (buf[i] != '\0') {

    if (buf[i] == ' ') {

      // Check if the first char of the input is white space, return -1
      if (spaceCheck == 0 || i == 0) {
        return -1;
      }
      commandcomp[space] = malloc(sizeof(char) * (size + 1));  // ex) a b c
      commandcomp[space][size] = '\0';
      
      size = -1;
      space++;

      // `spaceCheck` is the flag to check if there are consecutive white spaces or \tab in the input
      spaceCheck = 1;
      if (buf[i + 1] == ' ' || buf[i + 1] == '\t') {
        spaceCheck = 0;
      } else {
        spaceCheck = 1;
      }
    }
    i++;
    size++;
  }
  // Allocate the size of last char of the certain token and put '\0' to make it a string
  commandcomp[space] = malloc(sizeof(char) * (size + 1));
  commandcomp[space][size] = '\0';

  // Put a char from the input
  int argvCount = 0;
  int argvCharCount = 0;

  for (int i = 0; i < EOSIndex; i++) {
    if (buf[i] != ' ') {
      commandcomp[argvCount][argvCharCount] = buf[i];

      argvCharCount++;
    } else if (buf[i] == ' ') {

      argvCount++;

      argvCharCount = 0;
      continue;
    }
  }

  // Put NULL to the very last element of the commandcomp
  commandcomp[argvCount + 1] = NULL;

  return 0;
}