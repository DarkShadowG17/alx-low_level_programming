#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: ptr
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, summ = 0, suma = 0;

	for (i = 0; i < size; i++)
	{
		summ += *(a + (size * i + i));
		suma += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", summ);
	printf("%d\n", suma);
}
