#include "main.h"
/**
 * print_line - Entry mode
 * @n: an integer
 * Return: Always 0
 */
void print_line(int n)
{
	int a = 0;

	while (a <= n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
