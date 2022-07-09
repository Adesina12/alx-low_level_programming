#include "main.h"
/**
 * print_last_digit - Entry mode
 * @n: an integer
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int s;
	int j;

	s = n % 10;
	j = n % 10;
	_putchar(s);
	_putchar(j);
	return (0);
}
