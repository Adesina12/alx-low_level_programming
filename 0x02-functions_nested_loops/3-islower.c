#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry mode
 * @c: this is an integer
 * Return: Always 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
