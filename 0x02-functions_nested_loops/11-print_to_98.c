#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers starting from n to 98
 *
 * Description - prints all natural numbers form n to 98
 *
 * @n - int param
 *
 * Return - void
 */

void print_to_98(int n)
{
	int count;

	if (n < 98)
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
