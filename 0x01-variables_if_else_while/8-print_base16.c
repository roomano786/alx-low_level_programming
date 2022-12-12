#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: print base16 numbers:
  *	0123456789abcdef
  *
  * Return: Always 0 (Success);
  */

int main(void)
{
	/**
	  *the char '0' on the ASCII table is
	  *represented by the number 48(d) and the 'f' by 102(d)
	  *so we need the sequence 0123456789abcdef
	  */
	int char_value = 48; /* number 0 */

	while (char_value <= 102)
	{
		putchar(char_value);

		if (char_value == 57)
			char_value += 39;

		char_value++;
	}
	putchar('\n');
	return (0);
}
