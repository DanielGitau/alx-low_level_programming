#include "main.h"
#include <limits.h>

/**
 * print_binary - Converts from decimal to binary
 * @n: decimal number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	int count;
	unsigned int max, i, sum;
	unsigned int arr[32];

	max = 2147483648;
	arr[0] = n / max;

	for (i = 1; i < 32; i++)
	{
		max /= 2;
		arr[i] = (n / max) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += arr[i];
		if (sum || i == 31)
		{
			_putchar('0' + arr[i]);
			count++;
		}
	}
}
