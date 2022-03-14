#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always return 0
 * A program that prints the alphabet in lowercase
 */

int main(void)
{
	char a;

	a = 'a';

	do {
		if (a == 'q' || a == 'e')
		{
			/* skip this iteration */
			a++;
			continue;
		}

		putchar(a);
		a++;
	} while (a <= 'z');

	putchar('\n');
	return (0);
}
