#include <stdio.h>
#define PI 3.14159

int main()
{
  double radius, circumference, area;
  printf("Enter the radius\n");
  scanf("%lf", &radius);
  circumference = 2 * PI * radius;
  area = PI * radius * radius;
  printf("The circumference of the circle is %lf\n", circumference);
  printf("The area of the circle is %lf\n", area);
  return 0;
}
