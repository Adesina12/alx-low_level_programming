#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long ll;
	float f;
	
	printf("Size of a char: %ln.\n", (unsigned) sizeof(c));
	printf("Size of an int: %ln.\n", (unsigned) sizeof(i));
	printf("Size of a long int: %ln.\n", (unsigned long) sizeof(li));
	printf("Size of a long long: %ln.\n", (unsigned long) sizeof(ll));
	printf("Size of a float: %ln.\n", (unsigned) sizeof(f));
	return (0);
}
