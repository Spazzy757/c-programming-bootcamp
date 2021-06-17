#include <stdio.h>

int main(void) {
  printf("===================\n");
  printf("Welcome to decimal to Hex converter\n");
  printf("Enter a number:\n");

  int the_number; // decalres variable of type int
  scanf("%d", &the_number); // accquires user input

  printf("Decimal representation:     %9d\n", the_number); // prints out formatted as decimal
  printf("Hexidecimal representation: %9X\n", the_number); // prints out formatted as hex
  printf("===================\n");
  return 0;
}
