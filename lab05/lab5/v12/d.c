#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void d(char *buf, int delayflag) {
  pid_t k;

  int second = buf[2] - '0';
  char *binexec;
  int len = strlen(buf);
  binexec = malloc((len + 1) * sizeof(char));
  binexec[len] = '\0';
  int status;

  for (int i = 0; i < len; i++) {
    binexec[i] = buf[4 + i];
  }

  // Let the game start
  k = fork();
  if (k == 0) {
    sleep(second);
    execlp(binexec, binexec, NULL);
    exit(1);
  }
  free(binexec);
}