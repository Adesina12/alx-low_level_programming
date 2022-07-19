#include "main.h"
/**
 * print_square - Entry mode
 * @size: an integer
 * Return: Always 0
 */
void print_square(int size)
{
	int a = 0;
	int b;

	if (size > 0)
	{
		while (a < size)
		{
			b = 0;
			while (b < size - 1)
			{
				_putchar('#');
				b++;
			}
			_putchar('#');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
