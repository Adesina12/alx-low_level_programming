#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry mode
 * Return: Always 0 (Success)
 */
void print_alphabet()
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
}
int main(void)
{
	void print_alphabet();
	return (0);
}
