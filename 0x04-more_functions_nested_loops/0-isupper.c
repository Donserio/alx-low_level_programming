#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: the character to be checked
 *
 * Return: return 1 for TRUE and 0 for FALSE
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

