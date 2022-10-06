#include "main.h"
#include <string>

/**
 * reverse_array - Entry mode
 * @a: an integer
 * @n: another integer
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = (n - 1); i >= 0; i--)
		_putchar(a[i]);
}
