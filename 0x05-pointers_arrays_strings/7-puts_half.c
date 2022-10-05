#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Entry mode
 * @str: a pointer
 * Return: Always 0
 */

void puts_half(char *str)
{
	int n = strlen(str);
	int i;
	if ((n % 2) == 1)
	{
		for (i = (n - 1) / 2; i >=0; i--)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	 {
		 for (i = n/2; i >=0; i--)
			 _putchar(str[i]);
		 _putchar('\n');
	 }
}
