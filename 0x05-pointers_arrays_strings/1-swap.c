#include "main.h"
/**
 * swap_int - Program to swap pointers a and b
 * @a: character to read to pointer
 * @b: character to read to pointer
 *
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
