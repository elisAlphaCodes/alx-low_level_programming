#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;


	for (number = 0; number < 10; number++)
	{
		putchar (number % 10)
	}
	putchar ('\n');
	return (0);
}

