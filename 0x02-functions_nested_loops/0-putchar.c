#include "main.h"

/**
  * main - Entry Point
  *
  * Desctiption: prints _putchar and a new line
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
