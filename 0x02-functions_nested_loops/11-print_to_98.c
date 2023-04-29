#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Program to add print numbers from n to 98
 *
 * @n: the integer
 *
 * Return: void
*/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d, ", n);

	printf("\n");
}
