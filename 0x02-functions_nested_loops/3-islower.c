#include <stdio.h>
#include "main.h"

/**
 * _islower - Program to print the lower alphabet
 *
 * @c: character to read
 *
 * Return: 0 or 1
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
