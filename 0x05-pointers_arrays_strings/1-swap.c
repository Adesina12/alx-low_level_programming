#include "main.h"
/**
 * swap_int - Entry mode
 * @a: a pointer
 * @b: another pointer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int g = *a;

	*a = *b;
	*b = g;
}
