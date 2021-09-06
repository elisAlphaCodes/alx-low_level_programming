#include "holberton.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: char array string type
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i, j;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
