// Simple shell example using fork() and execlp().

#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

char originalPrompt[] = "$ ";
char *memnote[10];
int memCounter = 0;
int counter = 0;
int delayflag = 0;
int memRemainder = 0;
int firstArr = 0;

int main() {
  pid_t k;
  char buf[100];
  int status;
  int len;

  while (1) {
    // print prompt
    fprintf(stdout, originalPrompt, getpid());

    // read user command
    fgets(buf, 100, stdin);

    len = strlen(buf);
    if (len == 1) // only ENTER/RET key pressed
      continue;
    buf[len - 1] = '\0'; // shift EOS to where '\n' is stored

    char cpromptArr[] = "cprompt";
    char memArr[] = "mem";
    char calculatorArr[] = "calculator";
    char dArr[] = "d";
    char xArr[] = "x";

    // Check which function to run
    int selector = 0;
    for (int i = 0; i < strlen(buf); i++) {
      if (buf[i] == cpromptArr[i]) {
        selector++; // selector is 7
      } else if (buf[i] == memArr[i]) {
        selector++; // selector is 3
        if (i == 2) {
          break;
        }
      } else if (buf[i] == dArr[i]) {
        selector++; // selector is 1
        if (i == 0) {
          break;
        }
      } else if (buf[i] == xArr[i]) {
        selector++; // selector is 1
      } else if (buf[i] == calculatorArr[i]) {
        selector++;
        if (i == 9) {
          break;
        }
      }
    }

    if (selector == 7) {
      // Pound sign, #, is my sign for the option 3
      cprompt(buf);
    } else if (selector == 3) {
      // Run mem function
      mem(buf);
    } else if (selector == 1) {

      if (buf[0] == 'd') {
        // Run d function
        delayflag = 1;
        if (delayflag == 1) {
          d(buf, delayflag);
        }
      } else if (buf[0] == 'x') {
        // Run x function

        x();
      }
    } else if (selector == 10) {
      // Run calculator function

      calculator(buf);
    }

    // create worker bee
    k = fork();

    if (k == 0) { // child code
      if (execlp(buf, buf, NULL) ==
          -1) // loader can fail: if so terminate worker process
        exit(1);
    } else { // parent code
      waitpid(k, &status, 0);
    }
  }
}
