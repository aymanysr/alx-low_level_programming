#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @s: The input string
 *
 * Return: A pointer to the modified string
 */

char *rot13(char *s)
{
	int i;

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == alphabet[i])
			{
				*s = rot13[i];
				break;
			}
		}

		s++;
	}
	return (ptr);
}
