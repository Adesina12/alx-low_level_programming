#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry mode
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	int a;
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
