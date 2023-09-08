#include <stdio.h>

/**
 *main - main function
 *
 *Description: function that prints alphabet in lowercase with new line
 *
 *Result: 0 (success)
 */

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
