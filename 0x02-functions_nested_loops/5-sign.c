#include "main.h"
/**
 * print_sign - return 1 if n is positive 0 if n is zero and -1 if n is negative
 *
 * @n: value of the number
 *
 * Return: 1 when n is positive, -1 when n is negative and 0 when n is zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(43);
		return (-1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (1);
	}
	_putchar('\n');
}
