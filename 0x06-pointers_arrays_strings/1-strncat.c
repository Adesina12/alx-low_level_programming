#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - entry mode
 * @dest: destination
 * @src: source
 * @n: an integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
