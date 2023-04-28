#include "main.h"

/**
 * print_diagonal - print character '\' n times
 *
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int j; /*to draw the line*/
	int k; /*empty space*/

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k < j; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
