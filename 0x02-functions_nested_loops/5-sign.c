#include "main.h"
/**
 * print_sign -Prints sign of a number
 * @n: The number to be checked
 * Description: Write a function that prints the sign of a number.
 * Returns: 1 for positive num, -1 for negative and 0 for anything else
*/
int print_sign(int n)
{
if (n >  0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
