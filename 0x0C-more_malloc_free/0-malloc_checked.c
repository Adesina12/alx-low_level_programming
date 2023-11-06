#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: an unsigned integer
 * Return: Nothing to return
 */
void *malloc_checked(unsigned int b)
{
	if (b == NULL)
	{
		exit (98);
	}
	malloc(b);
}
