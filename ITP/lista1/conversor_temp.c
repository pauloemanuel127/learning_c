#include <stdio.h>

int main() {

  float temp, k, f, c;
  char tUnit;

  scanf("%f %c", &temp, &tUnit);

  switch (tUnit) {

  case 'C':

    c = temp;
    k = c + 273.15;
    f = c * 1.8 + 32;

    break;

  case 'F':

    f = temp;
    c = (f - 32) / 1.8;
    k = c + 273.15;

    break;

  case 'K':

    k = temp;
    c = k - 273.15;
    f = c * 1.8 + 32;

    break;
  }

  printf("Celsius: %.2f\n", c);
  printf("Farenheit: %.2f\n", f);
  printf("Kelvin: %.2f\n", k);

  return 0;
}
