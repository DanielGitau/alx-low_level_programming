#include "main.h"

/**
 * binary_to_unit - Converts from binary to unsigned int
 * @b: String containing binary number
 *
 * Return: Returns the base 10 number
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int decimal_val = 0;
	int j;

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
