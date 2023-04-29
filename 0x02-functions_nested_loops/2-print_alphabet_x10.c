#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Program to print the alphabets ten times
 *
 * Return: 0
*/

void print_alphabet_x10(void)
{
	char letter;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
