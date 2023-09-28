#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter++;
		counter += _strlen_recursion(s + 1);
	}
	return (counter);
}
