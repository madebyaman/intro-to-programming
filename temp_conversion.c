#include <stdio.h>

int main() {
  float celsius, fahrenheit;
  printf("Enter the temperature in celsius scale\n");
  scanf("%f", &celsius);

  fahrenheit = celsius * 1.8 + 32;
  printf("The temperature in fahrenheit is %f", fahrenheit);

  return 0;
}
