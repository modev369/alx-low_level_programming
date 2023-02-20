#include <stdio.h>
/**
 * main - prints alphabet
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
{
	putchar(num + '0');	/*print the current digit*/

	if (num < 9)
{
	putchar(',');
	putchar(' ');
}

}
	putchar('\n');	/*print a newline character at the end*/

	return (0);
}
