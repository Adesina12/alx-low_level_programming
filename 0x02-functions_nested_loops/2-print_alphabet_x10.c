#include "main.h"
/**
 * print_alphabet_x10 - Entry mode
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int a;
	int w = 0;

	while (w < 10)
	{
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
	w++;
	}
}
