#include "main.h"

/**
 * main - entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success always
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
