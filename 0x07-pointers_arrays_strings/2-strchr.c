#include "main.h"

/**
 * *_strchr - Program that locates a character in a string
 * @s: the string
 * @c: first character
 * Return: pointer s or null
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}
