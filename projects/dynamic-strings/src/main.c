#include "dynamicstrfunctions.h"

int main()
{
  char *hello;
  hello = malloc(6);
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
