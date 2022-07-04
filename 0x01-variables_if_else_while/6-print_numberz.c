#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry mode
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	for (; num <= '9'; num++)
	       putchar(num);
	putchar('\n');
	return (0);
}
