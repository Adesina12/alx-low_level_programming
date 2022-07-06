#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry mode
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return(0);
}
