#include <stdio.h>
#include <stdlib.h>

typedef enum {
  TEA,
  COFFEE,
  BEER,
} Menu;

int main() {

  Menu mario = COFFEE;
  Menu andrea = BEER;

  printf("Mario:  %d\n", mario);
  printf("Andrea: %d\n", andrea);

  return EXIT_SUCCESS;
}
