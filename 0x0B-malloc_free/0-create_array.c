#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char
 * Return: ptr to char
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
