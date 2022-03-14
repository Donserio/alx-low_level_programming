#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always return 0
 * A program that prints the alphabet in lowercase, and then in uppercase
 */

int main(void)
{	
	char c;
	char d;


	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
