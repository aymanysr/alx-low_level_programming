#include "main.h"
/**
 *times_table - Prints the 9 times table
 *
 *Example Table
 *0, 0, 0, 0, ..
 *0, 1, 2, 3, ..
 *0, 2, 4, 6, ..
 *0, 3, 6, 9, ..
 */

void times_table(void)
{
int num, multi, prod;

for (num = 0; num <= 9; num++)
{
_putchar(48);
for (multi = 1; multi <= 9; multi++)
{
_putchar(',');
_putchar(' ');

prod = num * multi;
/*
 *put space if product is a single number
 *place the first digit if its two numbers
 */
if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + 48); /* get the first digit */
_putchar((prod % 10) + 48); /*get the second digit */
}
_putchar('\n');
}
}
