#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */


int main(void)
{
	int number1;
	int number2 = 0;

	while (number2 < 10)
	{
		number1 = 0;
		while (number1 < 10)
		{
			if (number2 != number1 && number2 < number1)
			{
				putchar('0' + number2);
				putchar('0' + number1);

				if (number1 + number2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			number1++;
		}
		number2++;
	}
	putchar('\n');
	return (0);
}
