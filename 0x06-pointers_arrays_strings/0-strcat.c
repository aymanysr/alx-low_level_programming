#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/*find the length of dest*/
	while (dest[dest_len] != '\0')
		dest_len++;

	/*append src to dest*/
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/*Null-terminate the concatenated string*/
	dest[dest_len] = '\0';

	return (dest);
}
