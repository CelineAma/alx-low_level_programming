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

	int len = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for ( ; n < len ; n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
