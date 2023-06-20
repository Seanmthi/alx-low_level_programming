#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lower case 10 times
 *
 * return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
