#include "main.h"
/**
 * swap_int - swaps the values of 2 ints
 * @a: ptr 1
 * @b: ptr 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
