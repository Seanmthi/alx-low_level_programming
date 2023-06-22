#include "main.h"

/**
 * print_line - prints straight line n times.
 *
 * @n: times straight line is printed.
 *
 * Return: no return.
 */
void print_line(int n)
{
	int i = 0;

	for (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
