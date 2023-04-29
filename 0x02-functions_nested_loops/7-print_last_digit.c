#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Program to print the absolute number
 *
 * @n: the integer
 *
 * Return: lastdigit value
*/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		{
		_putchar(-l + 48);
	return (-l);
		}
	else
	{
	_putchar(l + 48);
	return (l);
	}
}
