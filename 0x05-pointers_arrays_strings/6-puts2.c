#include "main.h"
/**
 * puts2 - Program pointer that prints string in reverse
 * @str: string pointer
 *
 * Return: void
*/
void puts2(char *str)
{

	int len = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (z = 0 ; z <= l ; z++)
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
	}
	putchar('\n');
}
