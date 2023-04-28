#include <stdio.h>
#include "main.h"
/**
 * _isupper - Entry point
 * Description: Program to check for uppercase with char c
 *
 * @c: character to check
 *
 * Return: 1 or 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
