#include "main.h"
#include <stdio.h>

/**
 * leet - entry mode
 * @x: a pointer
 * Return: a string
 */

char *leet(char *x)
{
	int i, j;
	char mymy[5] = {'A', 'E', 'O', 'T', 'L'};
	char ade[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; x[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (x[i] == mymy[j] || x[i] - 32 == mymy[j])
				x[i] == ade[j];
		}
	}
	return (x);
}
