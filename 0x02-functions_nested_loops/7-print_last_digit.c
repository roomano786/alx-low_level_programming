#include "main.h"

/**
  * print_last_digit -  prints the last digit of a number
  *
  * @n: int param for the func
  *
  * Return: int, the value of the last digit
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastfigit = -1 * (n % 10);
	}
	else
	{
		lastdigit = n % 10;
	}

	_putchar(lastgit + '0');
	return (lastdigit);
}
