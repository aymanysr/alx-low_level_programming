#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *		followed by a new line only using _putchar twice
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int n = 0;

	do {
		_putchar(n + 48);
		n++;
	} while (n >= 0 && n <= 9);
	_putchar('\n');
}
