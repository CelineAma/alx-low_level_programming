#include "main.h"
/**
 * print_rev - Program pointer that prints string in reverse
 * @s: string pointer
 *
 * Return: void
*/
void print_rev(char *s)
{
	int len = 0;
	int i;

	/*find the length of the string to the last character*/

	while (*s != '\0')
	{
		len++;
		++s;
	}
		s--;

	/* reverse string and print */

	for (i = len; i > 0; i--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
