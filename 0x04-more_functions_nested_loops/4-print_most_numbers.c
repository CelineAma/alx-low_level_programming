#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 * Description: Program to print 0 to 9
 * excluding 2 and 4
 *
 * Return: numbers
*/

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
		_putchar(i);
		}
	}
	_putchar('\n');

}
