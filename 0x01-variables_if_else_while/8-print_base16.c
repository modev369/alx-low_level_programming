#include <stdio.h>
/**
 * main - prints alphabet
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
	putchar(i + '0');    /*print digits 0-9*/
}

	for (i = 0; i < 6; i++)
{
	putchar(i + 'a');	/*print letters a-f*/
}
	putchar('\n');	/*print newline character*/

	return (0);
}
