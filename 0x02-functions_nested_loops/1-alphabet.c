#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry mode
 * Return: Always 0 (Success)
 */
int print_alphabet()
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
int main(void)
{
	print_alphabet();
	return(0);
}
