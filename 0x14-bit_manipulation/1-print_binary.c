#include "main.h"
#include <limits.h>
#include <stddef.h>

/**
 * print_binary - Converts from decimal to binary
 * @n: decimal number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	int count, flg = 0;
	unsigned long int msk = 1UL << 63;

	for (count = 0; count < 64; count++)
	{
		if (n & msk)
		{
			_putchar('1');
			flg = 1;
		}
		else
		{
			if (flg)
			{
				_putchar('0');
			}
		}
		n <<= 1;
	}
	if (!flg)
	{
		_putchar('0');
	}
}
