#include "main.h"

/**
 * print_line - print a straught line
 *
 * @n: is the number of times the _ charachter should be printed
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
