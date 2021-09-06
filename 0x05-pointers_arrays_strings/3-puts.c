#include "holberton.h"

/**
 * _puts - swaps integers with pointers
 * 
 * @str: is a pointer to a char
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		_puts(*(str + i));
		i++;

	}
	_puts('\n');
}
