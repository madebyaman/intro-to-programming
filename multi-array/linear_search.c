#include <stdio.h>

int main()
{
  int n, m, key;
  printf("Enter the size of the array: ");
  scanf("%d %d", &n, &m);
  int arr[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("Enter the value of arr[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Enter the key to search: ");
  scanf("%d", &key);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == key)
      {
        printf("item found\n");
        return 0;
      }
      else
      {
        printf("current: %d, searching: %d\n", arr[i][j], key);
      }
    }
  }
  printf("not found\n");
  return 0;
}
