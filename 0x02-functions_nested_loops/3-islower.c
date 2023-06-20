#include "main.h"
/**
 * _islower - shows 1 if character c is lower case and 0 otherwise
 *
 * Return: 1 if lower case  or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
