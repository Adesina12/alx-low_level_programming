#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry mode
 * Return: Always 0;
 */
int main(void)
{
	int a = 3;
	printf("1 2 ");
	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
		a++;
	}
	return (0);
}
