#include "main.h"

/**
 * reverse_array - Program to reverse the content of an array of integers
 * @n: number of elements of the array
 * @a: character pointer
 *
 * Return: 0 on success
*/
void reverse_array(int *a, int n)
{
	int tmp, beg = 0;
	int end = n - 1; /* omit null terminator in length */

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
}
