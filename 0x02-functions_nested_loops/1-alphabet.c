#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Program to print the alphabets in lowercase
 *
 * Return: 0
*/

void print_alphabet(void)
{
	char letter;

	letter  = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
