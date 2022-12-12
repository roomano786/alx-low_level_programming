#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: print alphabet except 'q' & 'e'
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
			letter++;

		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
