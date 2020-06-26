#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
  if (argc < 2) {
    printf("Incorect usage of program!");
    exit(EXIT_FAILURE);
  }
  printf("Hello %s", argv[1]);
  return 0;
}
