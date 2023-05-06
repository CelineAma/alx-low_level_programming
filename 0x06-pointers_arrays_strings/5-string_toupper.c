#include "main.h"

/**
 * *string_toupper - Program that changes all lowercase letters
 * of a string to uppercase
 * @s: Pointer
 *
 * Return: 0 on success
*/
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
