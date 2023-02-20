#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print a random number and defines it's type
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);
	if (n == 0)
{
	printf("is zero\n");
}
	else if (n > 0)
{
	printf("is positive\n");
}
	else
{
	printf("is negative\n");
}
	return (0);
}
