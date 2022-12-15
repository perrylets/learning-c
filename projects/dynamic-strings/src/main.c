#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dynamicstrfunctions.h"

int main()
{
  char *hello;
  hello = calloc(6, sizeof(char));
  if (hello == NULL)
  {
    exit(-1);
  }
  strcpy(hello, "Hello");
  char world[] = "World!\n";
  dynamicCp(hello, "Hello ");
  printf("%s%s", hello, world);
  free(hello);
  return 0;
}
