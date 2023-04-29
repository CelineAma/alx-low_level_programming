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
	if (n < 0)
		n = -n;

	_putchar('0' + (n % 10));

	return (n % 10);
}
