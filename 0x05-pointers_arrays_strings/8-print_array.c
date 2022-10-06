#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - Entry mode
 * @a: a pointer
 * n: integer
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
