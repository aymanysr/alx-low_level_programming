#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Print all the alphabet letters except q and e
 *
 *Return: Always 0 (success)
 */

int main(void)
{
int digit  = 48;

while (digit <= 102)
{
putchar(digit);
if (digit == 57)
digit += 39;
digit++;
}
putchar('\n');
return (0);
}
