#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry mode
 * @n: an integer
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
}
