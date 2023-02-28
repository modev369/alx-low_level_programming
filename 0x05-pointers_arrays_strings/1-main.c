#include "main.h"
#include <stdio.h>

int main(void)
{
	int a = 10;

	int b = 20;

	printf("Before Swapping: a = %d, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("After Swapping: a = %d, b = %d\n", a, b);

	return (0);
}
