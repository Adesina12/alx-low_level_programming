#include "main.h"
/**
 * print_square - Entry mode
 * @size: an integer
 * Return: Always 0
 */
void print_square(int size)
{
	int a, b;
	
	if (size > 0)
	{
		a = 0;
		while (a < size)
		{
			b = 0;
			while (b < size)
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
