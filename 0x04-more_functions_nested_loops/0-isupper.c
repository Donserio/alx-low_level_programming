#include "main.h"
#include <stdio.h>

/**
 * main - check if char is upercase.
 *
 * Return: Always 1 for TRUE and 0 for FALSE.
 */
int _isupper(int c)
{
	if(c >= 65 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
