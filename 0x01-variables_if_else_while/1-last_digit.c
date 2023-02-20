#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints a number and compares it
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);
	int last_digit = abs(n) % 10;

	if (last_digit > 5)
{
	printf("%d and is greater than 5\n", last_digit);
}
	else if (last_digit == 0)
{
	printf("%d and is 0\n", last_digit);
}
	else
{
	printf("%d and is less than 6 and not 0\n", last_digit);
}	
	return (0);
}
