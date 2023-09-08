#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: function that prints alphabet in lowercase with new line
 *
 *Return: Always 0 (success)
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
