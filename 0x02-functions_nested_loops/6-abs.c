#include <stdio.h>
#include "main.h"

/**
 * _abs - Program to print the absolute number
 *
 * @n: the integer
 *
 * Return: absolute value
*/

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
