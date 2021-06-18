#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Alwasy 0 (success)
 *
 */

int main(void)
{
  int n;
  int last;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  last = n % 10;
  if(last == 0)
    {
      printf("Last digit is %d and %d and is 0\n", n, last);
    }
  else if (last > 5)
    {
      printf("Last digit is %d and %d and is greater than 5\n", n, last);
    }
  else
    {
      printf("Last digit is %d and %d and is less than 5\n", n, last);
    }
  return (0);
}