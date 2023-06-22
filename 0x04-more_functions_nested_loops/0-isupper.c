#include "main.h"
/**
 * _isupper - checks if the characer is a lower case
 *
 * @c: character input
 *
 * Return: 1 is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
