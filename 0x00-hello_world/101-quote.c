#include <unistd.h>
/**
 *main - prints a quote "and that piece of art is beautiful"
 *followed with a new line, to standard error
 *
 */
int main(void)
{
  write(2,
	  "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	   59);
  
return(1);
}
	
