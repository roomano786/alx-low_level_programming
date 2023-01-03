#include "main.h"

/**
  * Description: print_alphabet - prints the alphabet in lower case followed by
  * new line
  * Return: void
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
