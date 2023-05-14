#include "main.h"

/**
 * _print_rev_recursion - Program that prints a string in reverse
 *
 * @s: the string pointer
 *
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}
