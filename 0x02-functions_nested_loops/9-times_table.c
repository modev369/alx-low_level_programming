#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row < 10; row++)
{
	for (col = 0; col < 10; col++)
{
	result = row * col;

	if (result > 9)
{
	_putchar((result / 10) + '0');
}
	else if (col != 0)
{
	_putchar(' ');
}

	_putchar((result % 10) + '0');

	if (col != 9)
{
		_putchar(',');
		_putchar(' ');
}
}

	_putchar('\n');
}
}
