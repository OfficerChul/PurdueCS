#include "header.h"
#include <stdio.h>
#include <stdlib.h>

char *memnote[];

void x() {

  printf("---------------------------------------------------------------------"
         "------\n");
  printf("jsh Terminated. Thank you for using.\n");
  printf("\n");
  printf("          ---             ---         \n");
  printf("       ---   ---       ---   ---      \n");
  printf("     --         --- ---         --    \n");
  printf("       --                     --      \n");
  printf("        --                   --       \n");
  printf("         --                 --        \n");
  printf("          --               --         \n");
  printf("           ---           ---          \n");
  printf("              ---     ---             \n");
  printf("                --- ---               \n");
  printf("                  ---                 \n");
  printf("                   -                  \n");
  printf("\n");
  printf("\n");
  printf("   ____  / /_     ____ ___  __  __     __ _____/ /_      \n");
  printf("  / __ \\/ __ \\   / __ `__ \\/ / / /    / // ___/ __ \\ \n");
  printf(" / /_/ / / / /  / / / / / / /_/ /  _ / /(__  ) / / /     \n");
  printf(" \\____/_/ /_/  /_/ /_/ /_/\\__, /  / / / ____/_/ /_/    \n");
  printf("                         /____/  /___/                   \n");
  printf(" \n");
  printf("jsh stands for a shell that is made by Kyochul Jang\n");
  printf(" \n");
  printf("Last Update: 07/23/2021\n");
  printf("Feedback: gcj1234567890@gmail.com\n");
  printf(" \n");
  printf("                        Thank you for using jsh. I am always "
         "welcoming you.\n");
  printf("---------------------------------------------------------------------"
         "------\n");

  for (int i = 0; i < 10; i++) {
    free(*(memnote + i));
  }

  exit(0);
}