#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char c = 'A';

  printf("char c: %d\n", c);
  printf("char c: %c\n", c);

  c = 66;

  printf("char c: %d\n", c);
  printf("char c: %c\n", c);

  printf("input a character: ");

  c = getchar();

  printf("You entered %c\n", c);

  c = getchar();

  printf("You entered %c\n", c);

  return EXIT_SUCCESS;
}
