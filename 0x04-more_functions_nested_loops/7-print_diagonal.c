#include "main.h"
/**
 * print_diagonal - Entry mode
 * @n: an integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int a = 0;
	int b;

	if (n > 0)
	{
		while (a < n)
		{
			b = 0;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
