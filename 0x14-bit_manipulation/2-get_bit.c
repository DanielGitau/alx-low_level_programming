#include "main.h"
#include <limits.h>

/**
 * get_bit - Returns the value of a bit
 * in a decimal number
 * @n: No. to search
 * @index: Index of the bit
 *
 * Return: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
