#include "main.h"
/**
 * malloc_checked - Program that allocates memory using malloc
 * @b: Integer
 *
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
