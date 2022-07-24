#include "main.h"
/**
 * largest_number - Entry mode
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */
void largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	printf("%d", largest);
}
