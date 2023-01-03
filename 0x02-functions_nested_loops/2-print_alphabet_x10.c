#include "main.h"

/**
  * print_alphabet: function
  * Description: func that prints the alphabet in 10 times
  * Return
 */

void print_alphabet_x10(void)
{
	int times, letter;

	for (times = 0; times <= 9; times++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
