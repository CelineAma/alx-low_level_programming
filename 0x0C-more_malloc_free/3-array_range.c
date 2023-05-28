#include "main.h"

/**
 * array_range - Program that create array of integers
 *
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: NULL
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max) /* validate input */
		return (NULL);

	/* malloc and check for error */
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);

	/* set values */
	for (i = 0; i < n; i++)
		ptr[i] = min++;

	return (ptr);
}
