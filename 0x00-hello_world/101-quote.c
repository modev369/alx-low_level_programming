#include <unistd.h>
/**
 * main - a void fn that prints a sentence
 * Return: 1
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(str);
	write(STDERR-FILENO, str, len);
	return (1);
}
