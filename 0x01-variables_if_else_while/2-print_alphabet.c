#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always retun 0
 * A program that prints the alphabet in lowercase
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
