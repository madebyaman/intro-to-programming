// Finds if the second string is a substring of the first
#include <stdio.h>

int main(void)
{
  int n, m;
  printf("Enter the length of the first string: ");
  scanf("%d", &n);
  printf("Enter the length of the second string: ");
  scanf("%d", &m);
  if (m > n)
  {
    printf("The second string cannot be a substring of the first string.");
    return 0;
  }
  char str1[n], str2[m];
  printf("Enter the first string: ");
  scanf("%s", str1);
  printf("Enter the second string: ");
  scanf("%s", str2);

  int found = 0;
  // Write your code here
  int i, j;
  for (j = 0; j < n; j++)
  {
    if (str2[i] == str1[j])
    {
      i++;
      j++;
    }
    else if (i > 0)
    {
      i = 0;
    }
  }

  if (found == 1)
  {
    printf("The second string is a substring of the first string.");
  }
  else
  {
    printf("The second string is not a substring of the first string.");
  }
}
