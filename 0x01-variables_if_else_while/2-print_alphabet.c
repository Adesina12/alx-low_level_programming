#include <stdio.h>
#include <stdlib.h>
/*
 * main - entry mode
 * Return: Always 0 (Success)
 */
int main(void)
{	
	char a;
	char b;
	b = '\n';
	
	for(a = 'a'; a <= 'z'; a++)
		putchar(a);
		putchar(b);
	return (0);
}
