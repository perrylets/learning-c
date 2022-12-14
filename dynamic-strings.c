#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
  char *hello;
  hello = malloc(6 * sizeof(char));
  strcpy(hello, "Hello");
  hello = realloc(hello, 7 * sizeof(char));
  char world[] = "World!\n";
  strcat(hello, " ");
  printf("%s%s", hello, world);
  free(hello);
  return 0;
}
