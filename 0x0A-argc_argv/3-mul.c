#include "main.h"

/**
 * main - entry point, program to multiply args
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success always
*/
int main(int argc, char *argv[])
{
	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* mulitply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
