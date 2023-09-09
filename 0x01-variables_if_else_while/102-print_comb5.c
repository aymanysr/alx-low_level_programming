#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: prints all possible combinations of single-digit numbers.
 *
 *Return: Always 0 (success)
 */

int main(void)
{
int digit1  = 0, digit2;

while (digit1 <= 99)
{
digit2 = digit1;
while (digit2 <= 99)
{
if (digit1 != digit2)
{
putchar((digit1 / 10) + 48);
putchar((digit1 % 10) + 48);
putchar(' ');
putchar((digit2 / 10) + 48);
putchar((digit2 % 10) + 48);
if (digit1 != 98 && digit2 != 99)
{
putchar(',');
putchar(' ');
}
}
digit2++;
}
digit1++;
}
putchar('\n');
return (0);
}
