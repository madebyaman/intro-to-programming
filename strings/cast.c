// For a numeric string stored in a string variable, this code converts that and stores it into an integer variable
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  printf("Enter the length of the string (number of digits in the numeric string): ");
  scanf("%d", &n);
  char str[n];
  printf("Enter the numeric string: ");
  scanf("%s", str);

  // Write your code here
  int num = atoi(str); // Convert string to integer
  printf("Converted integer: %d\n", num);
  return 0;
}
