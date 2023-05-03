#include "main.h"
/**
 * _strlen - Program pointer to return length of string
 * @s: string pointer
 *
 * Return: void
*/
int _strlen(char *s)
{
int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
