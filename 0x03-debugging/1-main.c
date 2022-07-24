#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry main
 * Return: Always 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		/* This is a while
		 * loop
		 * comment
		 */
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
