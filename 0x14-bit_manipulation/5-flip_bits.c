#include "main.h"

/**
 * flip_bits - Count of the no. of bits to change
 * to get from one number to another
 * @n: first number
 * @m: Second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 63, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	while (j >= 0)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
		j--;
	}
	return (count);
}
