#include "main.h"

/**
 * print_diagonal - prints diaginal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
	_putchar(92);
	if (i < (n - i))
		_putchar('\n');
}
_putchar('\n');
