#include <stdio.h>
#include <math.h>

int main()
{
  int firstSide, secondSide;
  double thirdSide;
  printf("Enter the length of first side of triangle\n");
  scanf("%d", &firstSide);
  printf("Enter the length of second side of triangle\n");
  scanf("%d", &secondSide);
  thirdSide = sqrt(firstSide * firstSide + secondSide * secondSide);
  printf("The hyoptenuse of the triangle is %lf\n", thirdSide);

  return 0;
}
