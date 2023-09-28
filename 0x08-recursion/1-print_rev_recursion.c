#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input
 * Return: 0 on Success
 */
void _print_rev_recursion(char *s)
{
	/*Base case: Check if the current character is the null terminator*/
	if (*s == '\0')
	{
		return; /*if it is, return without printing*/
	}
	/*Recursively call the function with the next character in the string*/
	_print_rev_recursion(s + 1);
	/*Print the current character*/
	_putchar(*s);
}
