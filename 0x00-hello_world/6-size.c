#include<stdio.h>

/**
 *main - main function
 *
 *Return: 0 when successful
 */

int main(void)
{
int i;
char c;
long l;
longlong ll;
float f;
print("Size of a char: %lu byte(s)\n", sizeof(c));
print("Size of an int: %lu byte(s)\n", sizeof(i));
print("Size of a long int: %lu byte(s)\n", sizeof(l));
print("Size of a long long int: %lu byte(s)\n", sizeof(ll));
print("Size of a float : %lu chars(s)\n", sizeof(f));
return (0);
}
