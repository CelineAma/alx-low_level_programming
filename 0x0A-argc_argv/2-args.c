#include "main.h"

/**
 * main - entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success always
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
