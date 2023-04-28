#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry point
 * Description: Program to check for digit btw 0 and 9 with char c
 *
 * @c: character to check
 *
 * Return: 1 or 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
