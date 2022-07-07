#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry mode
 * @c: int c
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
