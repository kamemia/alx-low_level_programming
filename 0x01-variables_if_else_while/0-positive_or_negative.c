#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point for random number checker
 *
 *Return Always 0 (succcess)
 *
 */

int main (void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(n < 0)
{
printf("%d is negative\n", n);
}
else if(n > 0)
{
printf("%d is positive\n", n);
}
else
{
  printf("%d is zero\n", n);
}
return (0);
}