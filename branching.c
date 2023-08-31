#include <stdio.h>

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    // beginning spaces
    for (int j = 1; j <= num - 1 - i; j++)
    {
      printf(" ");
    }
    // First half of the numbers
    for (int k = i; k < i + i; k++)
    {
      printf("%d", k);
    }
    // Second half of the numbers
    for (int k = i + i - 2; k >= i; k--)
    {
      printf("%d", k);
    }
    // ending spaces
    for (int j = 1; j <= num - 1 - i; j++)
    {
      printf(" ");
    }
    printf("\n");
  }

  return 0;
}
