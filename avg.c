#include <stdio.h>

int main() {
  float a, b, c, avg;
  printf("Enter values for a, b and c:\n");
  scanf("%f %f %f", &a, &b, &c);

  avg = (a + b + c) / 3;
  printf("The average of %f, %f, and %f = %f", a, b, c, avg);

  return 0;
}
