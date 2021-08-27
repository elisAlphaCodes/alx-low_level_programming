#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;
	char upper;

	for (lowe = 'a'; lower <= 'z'; lower++)
	{
		putchar (lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar (upper);
	}
	putchar ('\n');
	return (0);
}
