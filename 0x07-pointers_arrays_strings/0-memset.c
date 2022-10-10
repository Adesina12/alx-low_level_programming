#include "main.h"
#include <string.h>

/**
 * _memset - Entry mode
 * @s: pointer 1
 * @b: pointer 2
 * @n: an integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
