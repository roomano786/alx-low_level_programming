#include "main.h"

/**
  * _abs - func that computes absolute value of an integer
  *
  * @n: int param for the func
  *
  * Return: abs @n
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
