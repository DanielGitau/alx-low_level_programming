#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - Writes character to the standard output
 * @s: Character to be printed
 * Return: 1 on success
 *
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}
