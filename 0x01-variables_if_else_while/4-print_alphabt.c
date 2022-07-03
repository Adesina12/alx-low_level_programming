#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry mode
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'q' || alph == 'e')
		{
			continue;
		}
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
