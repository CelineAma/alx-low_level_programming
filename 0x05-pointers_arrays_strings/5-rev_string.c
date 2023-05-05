#include "main.h"
/**
 * rev_string - Program pointer that prints string in reverse
 * @s: string pointer
 *
 * Return: void
*/
void rev_string(char *s)
{

	/*find the length of the string to the last character*/

	int f, r_s;
	char character;

	for (f = '\0'; s[f] != 0; f++)
	{
	}
	r_s = 0;
	for (f = f - 1; r_s < f; r_s++)
	{
		character = s[f];
		s[f] = s[r_s];
		s[r_s] = character;
		f--;
	}
}
