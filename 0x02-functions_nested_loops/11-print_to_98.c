#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n--);
		printf("%d, ", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d, ", n);
	}
}
