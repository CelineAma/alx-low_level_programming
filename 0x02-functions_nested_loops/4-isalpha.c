#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Program to print the alphabetic character
 *
 * @c: character to read
 *
 * Return: 0 or 1
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
