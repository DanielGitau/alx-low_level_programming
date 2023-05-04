#include "main.h"
#include <limits.h>

/**
 * print_binary - Converts from decimal to binary
 * @n: decimal number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	int count;
	unsigned long int msk = 1UL << 31;

	for (count = 0; count < 32; count++)
	{
		if (n & msk)
			_putchar('1');
		else
			_putchar('0');
		n <<= 1;
	}
}
