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
			printf("%d", b);
		_putchar('\n');
		a++;
	}
}
