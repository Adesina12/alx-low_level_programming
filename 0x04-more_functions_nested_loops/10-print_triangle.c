#include "main.h";
/**
 * print_triangle - Entry mode
 * @size: an integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 1; b < (size - a); b++)
			putchar(' ');
		for (b--; b < size; b++);
		putchar(35);
		if (a < (size - 1))
			putchar('\n');
	}
	putchar('\n');
	return (0);
}
