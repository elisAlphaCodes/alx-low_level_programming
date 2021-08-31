#include "holberton.h"

/**
 * main - Entry point
 * Return:0
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
