#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry mode
 * Return: Always 0
 */
int main(void)
{
	long int val, num, c;

	val = 612852475143;
	for (num = 2; num <= val; num++)
	{
		c = val % num;
		if (c == 0)
		{
			val = val / num;
			num = num - 1;
		}
	}
	printf("%ld\n", num);
	return (0);
}
