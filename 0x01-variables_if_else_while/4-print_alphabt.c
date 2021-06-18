#inlcude <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 *
 */
int main(void)
{
  int letter;

  for (letter - 'a'; letter <= 'z'; letter++)
    {
      if (letter == 'e' || letter == 'q')
	continue;
      else
	putchar(letter);
    }
  putchar('\n');
  return (0);
}
