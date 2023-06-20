#include "main.h"
/**
 * _isalpha - - return  1 if c is a letter, lower or upper case
 *
 * @c: The chareter in ASCll code
 *
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
