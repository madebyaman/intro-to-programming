#include <stdio.h>

int main()
{
  int a[2][3] = {1, 2, 3, 4, 5, 6};
  int b[3][5] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10, 11, 12, 13, 14, 15};
  int result[2][5];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      result[i][j] = 1;
      for (int k = 0; k < 3; k++)
      {
        result[i][j] *= a[i][k] + b[k][j];
      }
    }
  }

  // Print result
  printf("Result:\n");
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 5; ++j)
    {
      printf("%d\t", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
