#include "main.h"

/**
 * *_memcpy - Program that fills memory with a constant byte
 * @dest: the memory area
 * @src: the memory area
 * @n: first byte of the memory area
 * Return: pointer to memory area dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		dest[i] = src[i];
	}

	return (dest);
}
