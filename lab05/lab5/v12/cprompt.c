#include "header.h"
#include <stdio.h>
#include <stdlib.h>

char originalPrompt[3];

void cprompt(char *buf) {

  if ((buf[8] - '0') == 0) {
    originalPrompt[0] = '$';
    originalPrompt[1] = ' ';
    originalPrompt[2] = '\0';
  }
  if ((buf[8] - '0') == 1) {
    originalPrompt[0] = '>';
    originalPrompt[1] = ' ';
    originalPrompt[2] = '\0';
  }
  if ((buf[8] - '0') == 2) {

    originalPrompt[0] = '%';
    originalPrompt[1] = 'd';
    originalPrompt[2] = ' ';
    originalPrompt[3] = '\0';
  }
  if ((buf[8] - '0') == 3) {
    originalPrompt[0] = '#'; // This is my own prompt.
    originalPrompt[1] = ' ';
    originalPrompt[2] = '\0';
  }
}