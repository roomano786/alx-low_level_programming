#include "main.h"

/**
 * times_table -  fucn that prints 9 times table from 0
 *
 * Description - a
 *
 * Return -  void
 */

void times_table(void)
{
	int row, table, mult = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mult = (row * col);
			if (mult < 10)
			{

				_putchar(mult + '0');

				if (col < 9)
				{
					_putchar(',');
					_putchar(' ');
				}

				if (col == 9)
				{
					_putchar('$');
				}
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar(mult % 10) + '0');
				
				if (col < 9)
				{
					_putchar(',');
					_puthcar(' ');
				}

				if (col == 9)
				{
					_putchar('$');
				}
			}
		}
	}
}
