#include <stdio.h>
#include <stdlib.h>

typedef enum {
  THRUST_NONE,
  THRUST_LOW = 5,
  THRUST_MEDIUM = 9,
  THRUST_HIGH = 12,
  THRUST_MAXIMUM = 20,
} ThrustLevel;

int main() {
  printf("=============Spaceship Thrust=============\n");
  ThrustLevel thrust;

  thrust = THRUST_NONE;
  printf("level: ready                   thrust: %d\n", thrust);
  thrust = THRUST_MAXIMUM;
  printf("level: take off                thrust: %d\n", thrust);
  thrust = THRUST_MEDIUM;
  printf("level: entering ionosphere     thrust: %d\n", thrust);
  thrust = THRUST_LOW;
  printf("level: traveling to deep space thrust: %d\n", thrust);

  return EXIT_SUCCESS;
}
