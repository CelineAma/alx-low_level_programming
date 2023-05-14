#include "main.h"

/**
 * _strlen_recursion - Program that prints the length of a string
 *
 * @s: the string pointer
 *
 * Return: string len
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}
