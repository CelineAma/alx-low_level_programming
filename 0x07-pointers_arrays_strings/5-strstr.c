#include "main.h"

/**
 * _strstr - Program that locates a substring
 * @haystack: the string pointer
 * @needle: the substring
 * Return: pointer:wq to the begining of located needle or null
*/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);

}
