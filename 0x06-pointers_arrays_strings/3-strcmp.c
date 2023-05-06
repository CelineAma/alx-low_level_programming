#include "main.h"

/**
 * *_strcmp - Program to compare two strings
 * @s1: character to compare
 * @s2: character to compare
 *
 * Return: 0 on success
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
