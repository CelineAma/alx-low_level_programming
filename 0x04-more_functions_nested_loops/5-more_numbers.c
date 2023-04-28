#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Entry point
 * Description: Program to print 0 to 14 ten times
 *
 * Return: numbers
*/

void more_numbers(void)
{
	char i;
	int j;

	for (j = 1; j <= 10; j++) /*the counter*/
	{
		for  (i = 0; i <= 14; i++)
		{
		if (i / 10 > 0)
		{
		_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
		}

	_putchar('\n');
	}
}
