#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always return 0
 * A program that prints all single digit numbers of base 10 starting from 0
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
