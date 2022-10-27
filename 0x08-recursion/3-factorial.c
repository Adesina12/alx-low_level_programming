#include "main.h"

/**
 * int factorial - Entry mode
 * @n: an integer
 * Return: n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
