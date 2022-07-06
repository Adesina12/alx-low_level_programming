#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry mode
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
}
