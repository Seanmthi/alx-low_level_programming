#include <stdio.h>
#include "main.h"
/**
 * _putchar - prints the character
 *
 * return: Always 0
 */
int _putchar(char i)
{
	return(write(1, &i, 1));
}
