#include "main.h"

/**
 * set_string - Program that sets the value of a pointer to a char.
 *
 * @s: the string pointer to pointer
 * @to: pointing to
 * Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
