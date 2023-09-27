#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int b, c;
  b = arr[1]++;
  c = arr[2]++;
  printf("%d %d", b, c);
  return 0;
}
