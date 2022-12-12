#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: program that prints all single digit of base 10 staring from 0
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int start = 0;

	while (start < 10)
	{
		printf("%d", start);
		start++;
	}

	putchar('\n');
	return (0);
}
