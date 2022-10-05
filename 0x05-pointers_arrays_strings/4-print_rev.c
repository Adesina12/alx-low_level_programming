#include "main.h"
#include <stdio.h>
#include <string.h>
/** 
 * print_rev - Entry mode
 * @s: a pointer
 * Return: Always 0
 */
void print_rev(char *s)
{
	int n;
	int i;

	n = strlen(s);

	for (i = n - 1; i < 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
