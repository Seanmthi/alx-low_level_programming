#include "main.h"
/**
 * times_table - 9 times table
 * 
 * Retrn: No return
 */
void times_table(void)
{
	int a, b, m;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			m = a * b;
			_putchar(m + 48);
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
