#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lower case 10 times
 *
 * return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	while (j < 10)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		i = 97;
		j++;
	}
}
