#include "holberton"

/**
 * main - prints Holberton, flowwed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[10] = "Holberton";
	int i = 0;
	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
