#include "main.h"
/**
 * more_numbers - Entry mode
 * Return: Always 0
 */
void more_numbers(void)
{
	int a = 0;
	int b;
	int c;

	while (a < 10)
	{
		for (b = '0'; b <= '9'; b++)
			_putchar(b);
		for (c = 10; c <= 14; c++)
			_putchar(c + '0');
		a++;
	}
	_putchar('\n');
}
