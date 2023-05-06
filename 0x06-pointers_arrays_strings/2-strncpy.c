#include "main.h"

/**
 * *_strncpy - Program to concatenates two strings
 * @dest: character to append
 * @src: character to append
 * @n: the integer
 *
 * Return: dest pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
