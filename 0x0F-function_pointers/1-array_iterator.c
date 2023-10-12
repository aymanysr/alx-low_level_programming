#include "function_pointers.h"

/**
 * array_iterator - maps an array through a function pointer
 * @array: the int array
 * @size: the size of the array
 * @action: the funtion pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *endArray = array + size - 1;

	if (array && size && action)
		while (array <= endArray)
			action(*array++);
}
