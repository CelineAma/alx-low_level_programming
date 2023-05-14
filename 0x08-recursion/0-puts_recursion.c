#include "main.h"

/**
 * _puts_recursion - Program that prints a string followed by a newline
 *
 * @s: the string pointer
 *
 * Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
