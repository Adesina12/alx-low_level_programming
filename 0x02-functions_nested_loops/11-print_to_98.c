#include "main.h"
/**
 * print_to_98 - Entry mode
 * @n: an integer
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n < '98')
	{
		for (n = n; n <= '98'; n++)
		{
			_putchar(n + '0');
			_putchar(' ');
			_putchar(',');
	}
	else 
	{
		for (n = n; n >= '98'; n--)
		{
			_putchar(n + '0');
			_putchar(' ');
			_putchar(',');
		}
	}
	}
}
