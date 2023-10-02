#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to append from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int i = 0;

	/*find the length of dest*/
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	/*append up to n bytes from src to dest*/
	while (src[i] != '\0' && i < n)
	{
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}

	/*Null-terminate the concatenated string*/
	dest[dest_length] = '\0';

	return (dest);
}
