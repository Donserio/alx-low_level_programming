#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0
 * A program that prints all possible combinations of single-digit numbers
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i % 10 + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
