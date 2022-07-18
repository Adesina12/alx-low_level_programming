#include "main.h"
/**
 * more_numbers - Entry mode
 * Return: always 0
 */
void more_numbers(void)
{
	int a, b, c;
	a = 0;

	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			c = b;
			if (b > 9)
			{
				_putchar('1');
				c = b % 10;
			}
			_putchar(c + 48);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
