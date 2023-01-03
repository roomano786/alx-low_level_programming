#include "main.h"

/**
  * _islower - func that chacks for lower case chars
  *
  *@c: checks input of function
  *
  * Return: 0 Success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
