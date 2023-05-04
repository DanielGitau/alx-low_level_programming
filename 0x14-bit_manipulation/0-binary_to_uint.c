#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts from binary to unsigned int
 * @b: String containing binary number
 *
 * Return: Returns the base 10 number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;
	int j = 0;

	if (b == NULL)
		return (0);

	while (b[j])
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[j] - '0');
		j++;
	}
	return (decimal_val);
}
