#include <stdio.h>

int main()
{
  int a[2][2] = {{1, 2}, {3, 4}};
  int b[2] = {9, 8};
  int result[2] = {0, 0};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      int sum = a[i][j] * b[i];
      printf("Sum: %d", sum);
      result[i] += sum;
    }
  }

  // Print result
  printf("Result:\n");
  for (int i = 0; i < 2; ++i)
  {
    printf("%d\t", result[i]);
  }

  printf("\n");
  return 0;
}
