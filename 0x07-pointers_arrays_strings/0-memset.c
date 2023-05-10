#include "main.h"

/**
 * *_memset - Program that fills memory with a constant byte
 * @s: the memory area
 * @b: the constant byte
 * @n: first byte of the memory area
 * Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
