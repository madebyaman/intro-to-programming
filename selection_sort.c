#include <stdio.h>

void selectionSort(int arr[], int n)
{
  int i, j, min;
  for (i = 0; i < n - 1; i++)
  {
    min = i;

    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }

    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}

int main()
{
  int arr[5] = {5, 4, 3, 2, 1};
  selectionSort(arr, 5);
  for (int i = 0; i < 5; i++)
  {
    printf("%d\t", arr[i]);
  }
  return 0;
}
