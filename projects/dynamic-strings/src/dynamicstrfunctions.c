#include "dynamicstrfunctions.h"

char *dynamicCp(char *__restrict__ __dest, const char *__restrict__ __src)
{
  if ((__src == NULL) || (__dest == NULL))
  {
    fprintf(stderr, "NULL pointer passed as argument\n");
    exit(-1);
  }
  __dest = realloc(__dest, strlen(__src) + 1);
  strcpy(__dest, __src);
}
