#include "main.h"
#include <string.h>

/**
 * _strncpy - Entry mode
 * @dest: destination
 * @src: source
 * @n: integer
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
