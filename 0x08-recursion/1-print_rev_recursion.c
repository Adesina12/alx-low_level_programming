#include "main.h"

/**
 * _print_rev_recursion - Entry mode
 * @s: a pointer
 * Return: none
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	else
		_putchar('\n');
}
