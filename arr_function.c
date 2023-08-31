#include <stdio.h>

#define SIZE 9
int avg(int n, int list[]);

int main()
{
  int list[SIZE], average;
  for (int i = 0; i < SIZE; i++)
  {
    list[i] = i;
    printf("%d\n", list[i]);
  }

  average = avg(SIZE, list);
  printf("Average: %d\n", average);

  printf("After calling avg..\n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d\n", list[i]);
  }
  return 0;
}

int avg(int n, int list[])
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    list[i] *= 2;
    sum += list[i];
  }
  return sum / n;
}
