#include <stdio.h>
#include <stdlib.h>

enum menu {
  TEA = 10,
  COFFEE = 20,
  JUICE = 100,
  BEER,
};

enum months {
  JAN = 1,
  FEB,
  MAR,
  APR,
  MAY,
  JUN,
  JUL,
  AUG,
  SEP,
  OCT,
  NOV,
  DEC,
};

int main() {
  enum menu mario = COFFEE;
  enum menu andrea = BEER;

  printf("Mario ordered:    %d\n", mario);
  printf("Andrea ordered:   %d\n", andrea);

  enum months myFavouriteMonth = JUL;
  enum months myWorstMonth = NOV;

  printf("Andrea's favourite month:   %d\n", myFavouriteMonth);
  printf("Andrea's worst month:       %d\n", myWorstMonth);

  return EXIT_SUCCESS;
}
