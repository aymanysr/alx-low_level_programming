#include "main.h"

/**
 * _strncpy - copies a string, up to n characters
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*copy up to n characters from src to dest*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/*fill the remaining characters in dest with null terminators*/

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
