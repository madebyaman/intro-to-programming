#include <stdio.h>

struct student
{
  char name[20];
  int marks[2];
} s1, s2;

int main()
{
  printf("Enter student 1 name:");
  scanf("%s", s1.name);
  printf("\n Student 1: %s %c\n", s1.name, s1.name[0]);
  s1.marks[0] = 95;
  s2.marks[1] = 90;
  s2 = s1;
  printf("\n Student 2: %s %d\n", s2.name, s2.marks[0]);
  return 0;
}
