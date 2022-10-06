#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - entry mode
 * @dest: destinstion
 * @src: source
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
