#include "main.h"
/**
 * _puts - Program pointer that prints string followed by newline
 * @str: string pointer
 *
 * Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
		putchar(*str++);

	putchar('\n');
}
