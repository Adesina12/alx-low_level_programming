#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Entry mode
 * @c: character
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
