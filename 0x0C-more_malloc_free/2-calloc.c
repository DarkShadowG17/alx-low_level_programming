#include "main.h"
/**
 * cpy - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *cpy(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: elements
 * @size: bytes
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	cpy(p, 0, (nmemb * size));
	return (p);
}
