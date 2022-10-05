#include "main.h"
#include <string.h>
/**
 * puts2 - an entry
 * @str: a pointer
 * Return: alwaus 0
 */

void puts2(char *str)
{
	int n = strlen(str);
	int i;

	for (i = 0; i <= n - 1; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
