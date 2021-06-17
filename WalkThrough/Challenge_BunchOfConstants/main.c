#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("=============== Bunch Of Constants ===============");
  const int moonLanding = 1969;
  const float speedOfLight = 299792458;
  const double pi = 3.142;
  const int hexaDead = 0xDEAD;
  const int hexaSecret = 51966;

  printf("\nmoonLanding\n");
  printf("%10d\n", moonLanding);
  printf("%010d\n", moonLanding);

  printf("\nspeedOfLight\n");
  printf("%10.0f\n", speedOfLight);
  printf("%10.3e\n", speedOfLight);

  printf("\npi\n");
  printf("%10.2f\n", pi);
  printf("%+10.1e\n", pi);

  printf("\nhexaDead\n");
  printf("%#10X\n", hexaDead);
  printf("%6u\n", hexaDead);

  printf("\nhexaSecret\n");
  printf("%10x\n", hexaSecret);
  return EXIT_SUCCESS;
}
