#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the input string
 *
 * Return: a pointer to the modified string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/*convert lower to uppercase by subtracting 32 from ASCII value*/
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
