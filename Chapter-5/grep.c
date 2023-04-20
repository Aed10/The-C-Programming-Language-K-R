#include "main.h"
#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int main(argc, argv) /* find pattern from first argument */
int argc;
char *argv[];
{
  char line[MAXLINE];

  if (argc != 2)
    printf("Usage: find pattern\n");
  else
    while (getline(line, MAXLINE) > 0)
      if (index(line, argv[1]) >= 0)
        printf("%s", line);
  return 0;
}
