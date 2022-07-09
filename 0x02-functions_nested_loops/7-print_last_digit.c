#include "main.h"
/**
 * print_last_digit - Entry mode
 * @n: an integer
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int s;

	s = n % 10;
	if (n < 0)
		s = s * -1;
	_putchar(s + '0');
	return (s);
}
