#include "main.h"

/**
 * print_number - Program that prints an integer
 * @n: number to print
 *
 * Return: voidchar *r3(char *s)
*/
void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double t_beg = 1;

	if (n == 0)
		putchar('0');

	else
	{
		if (n < 0)
		{
			positive = n * -1;
			putchar('-');
		}

		while (t_beg <= positive)
			t_beg *= 10;
		tens = t_beg / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
