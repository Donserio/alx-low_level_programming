#include "main.h"

/**
 * print_line - draw a straight line
 * @n: determines the lenght of the line
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		while (x <= n)
		{
			_putchar('_');
			x++;
		}
	}
	_putchar('\n');
}
