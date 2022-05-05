#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * 		 and initializes to a specific character
 * @size: size of the array
 * @c: char to be assigned to array
 * Return: pointer to the array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
