// Simple shell example using fork() and execlp().

#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

char buf[100];
char **commandcomp;

int main() {
  pid_t k;

  int status;
  int len;

  while (1) {

    // print prompt
    fprintf(stdout, "%d %% ", getpid());

    readcommand();

    len = strlen(buf);
    if (len == 1) // only ENTER/RET key pressed
      continue;
    buf[len - 1] = '\0'; // shift EOS to where '\n' is stored

    if (parsecommand() == -1) {
      printf("White space should be located between the input. Please only enter one whitespace between the argument.\n");
    }

    // printf("argv[0]: %s\n", commandcomp[0]);
    // printf("argv[1]: %s\n", commandcomp[1]);
    // printf("argv[2]: %s\n", commandcomp[2]);

    // create worker bee
    k = fork();

    if (k == 0) { // child code
      // loader can fail: if so terminate worker process
      if (execvp(commandcomp[0], commandcomp) == -1) // Check if execvp() failed
      printf("Failed to execute execvp. Please call TA.\n");
        exit(1);
    } if (k < 0) {
      printf("Failed to load the Child Process. Please contact TA.\n");
    } else { // parent code
      waitpid(k, &status, 0);
    }
  }
}
