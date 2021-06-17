#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double decimalDigits = 1.23456789;

  double worldPopulation = 7.801E9;

  double plankConstant = 6.626E-34;

  printf("%12.1f | 1 decimal digit \n", decimalDigits);
  printf("%12.3f | 3 decimal digit \n", decimalDigits);
  printf("%12.1f | world population, decimal, 1 digit of precision \n",
         worldPopulation);
  printf("%12.1e | world population, scientific, 1 digit of precision \n",
         worldPopulation);
  printf("%12.1E | planks constant, decimal, 1 digit of precision \n",
         plankConstant);
  printf("%12.3E | planks constant, scientific, 1 digit of precision \n",
         plankConstant);
}
