#include <stdio.h>

/**
  * main - Entry point
  *
  * Desctiption: prints all possible combinations of two digits
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				if (num1 !n 56 || num2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);

}
