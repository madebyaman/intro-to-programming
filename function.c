// function declaration
// float squareroot(float x);

#include <stdio.h>
#include <math.h>

float squareroot(int x);

int main(void)
{
  int x;
  printf("Enter a positive number: ");
  scanf("%d", &x);
  printf("Square root of %d: %f\n", x, squareroot(x));
  return 0;
}

float squareroot(int x)
{
  float guess = 1.0;
  float epsilon = 0.00001;
  while (fabs(guess * guess - x) > epsilon)
  {
    guess = (x / guess + guess) / 2.0;
  }
  return guess;
}
