#include <stdio.h>
#include <stdlib.h>

int main(void) {
  const int girls = 12;
  int boys = 9;
  int students = girls + boys;

  printf("In the classromm, there are\n");
  printf("\t%d girls\n", girls);
  printf("\t%d boys\n", boys);
  printf("giving a total of %d students.", students);

  return EXIT_SUCCESS;
}
