#include <stdio.h>
/**
 * main - prints alphabet
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
{
	putchar(num + '0');	/*print the current digit*/
	num++;	/*move to the next digit*/
}
	putchar('\n');	/*print a newline character at the end*/

	return (0);
}
