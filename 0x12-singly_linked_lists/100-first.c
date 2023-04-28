#include "lists.h"

void printBeforemain(void) __attribute__ ((constructor));

/**
 * printBeforemain - Prints a sentence before the main
 * function is executed
 */

void printBeforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
