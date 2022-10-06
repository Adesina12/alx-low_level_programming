#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - Entry mode
 * @a: a pointer
 * n - integer
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ",a[i]);
	}
	printf("%d", a[n - 1]);
	printf("\n");
}
