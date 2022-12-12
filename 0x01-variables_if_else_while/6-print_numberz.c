#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: print numbers using putch from 0 to 9
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)
{
	int number;

	while (number < 10)
	{
		putchar(number + '0');

		number++;
	}

	putchar('\n');
	return (0);
}
