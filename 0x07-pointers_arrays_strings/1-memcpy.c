#include "main.h"
#include <string.h>

/**
 * _memcpy - Entry mode
 * @dest: a pointer
 * @src: another pointer
 * @n: an integer
 * Return: an integer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
