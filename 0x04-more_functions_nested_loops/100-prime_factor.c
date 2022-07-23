#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry mode
 * Return: Always 0
 */
int main(void)
{
	int val, num, c;

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
	printf("%d\n", num);
	return (0);
}
