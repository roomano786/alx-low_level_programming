#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: print alphabet in reverse lower case
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
