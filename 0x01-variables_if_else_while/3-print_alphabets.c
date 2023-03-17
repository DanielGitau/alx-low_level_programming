#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char low;
	char UPP;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (UPP = 'A'; UPP <= 'Z'; UPP++)
	putchar(UPP);
	putchar('\n');

	return (0);
}
