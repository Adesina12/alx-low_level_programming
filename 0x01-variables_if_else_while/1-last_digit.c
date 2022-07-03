#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry mode
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l = (n % 10);
	printf("Last digit of %d is ", n);
	if(l > 5)
		printf("%d and is greater than 5\n", n);
	if(l == 0)
		printf("%d and is 0\n", n);
	if(l < 6 && l != 0)
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
}
