#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: prints alphabets in lowercase & uppercase
 *
 *Return: 0 Always (success)
 */

int main(void)
{
int ch, CH;
ch = 'a';
CH = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
};
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
