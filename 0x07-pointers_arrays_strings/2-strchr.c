#include "main.h"

/**
 * _strchr - locates a character c in a string s
 * @s: the string to be searcher
 * @c: the character to be located
 *
 * Return: if C is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
