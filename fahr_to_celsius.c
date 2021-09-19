#include <stdio.h>

int main()
{
  int fahr;

  int const STEP = 20;
  int const LOWER = 0;
  int const UPPER = 300;

  for (fahr = LOWER; fahr <= UPPER ; fahr = fahr + STEP) {
    printf("%1d\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
  }
  return 0;
}
