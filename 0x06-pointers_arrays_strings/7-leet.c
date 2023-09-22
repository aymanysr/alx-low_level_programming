#include "main.h"

/**
 * leet - Encodes a string into 1337 format
 * @s: The input string
 *
 * Return: A pointer to the modified string
 */
char *leet(char *s)
{
	int i, j;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet_map[j] != '\0'; j++)
		{
			if (s[i] == leet_map[j])
			{
				s[i] = leet_replacements[j];
				break; /* Exit the inner loop once a replacement is made*/
			}
		}
	}

	return (s);
}

