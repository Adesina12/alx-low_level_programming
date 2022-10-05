#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Entry mode
 * @s : a pointer
 * Return: always 0
 */

void rev_string(char *s)
{
	int n = strlen(s);
	int i;

	for (i = n - 1; n > 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
