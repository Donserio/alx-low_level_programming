#include <stdio.h>

/**
 * main
 * Return: Always returns 0
 * A program that prints all the numbers of base 16 in lowercase
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
