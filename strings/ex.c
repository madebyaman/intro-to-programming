#include <stdio.h>
int main()
{
  int i = 0;
  while (i <= 4)
  {
    if (!i)
    {
      i += 2;
      continue;
    }
    else
      i--;
    i += 3;
    printf("Loopin\'\n");
  }

  return 0;
}
