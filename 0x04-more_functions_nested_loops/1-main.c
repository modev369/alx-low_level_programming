#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    if (_isdigit(c))
      _putchar('1');
    else
      _putchar('0');
    _putchar('\n');

    c = 'a';
    if (_isdigit(c))
      _putchar('1');
    else
      _putchar('0');
    _putchar('\n');

    return (0);
}
