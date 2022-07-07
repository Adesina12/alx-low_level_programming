#include "main.h"
#include <ctype.h>
/**
 * _islower(int c) - Entry mode
 * Return: Always 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
