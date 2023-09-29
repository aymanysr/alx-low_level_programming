#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: The resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(0, n));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * squre root of a number
 * @i: iterator
 * @n: number to calculate the square of
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int i, int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(i + 1, n));
}
