#include "main.h"

/**
 * find_root - find square root of n, starting from the smallest possible, 0
 * @n: n
 * @root: test this root
 * Return: natural square root, or -1 if not natural root
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}


/**
 * _sqrt_recursion - Program that prints the square root of a number
 *
 * @n: the integer
 *
 * Return: int or -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
