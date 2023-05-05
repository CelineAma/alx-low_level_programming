#include "main.h"
/**
 * puts_half - Program pointer that prints half of a string
 * the function will print last n if the character number is odd,
 * where n = (length_of_the_string - 1) / 2
 * @str: string pointer
 *
 * Return: void
*/
void puts_half(char *str)
{

	int c, a;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
	}
	if (c % 2 == 0)
	{
		for ((a = c / 2); str[a] != 0; a++)
		{
			l = str[a];
			putchar(l);
		}
	}
	else
	{
		for ((a = (c - 1) / 2); str[a] != 0; a++)
		{
			l = str[a];
		putchar(l);
		}
	}
		putchar('\n');
}
