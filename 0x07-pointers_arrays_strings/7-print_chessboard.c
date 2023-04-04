#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: char
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(*(*(j + a) + i));
		}
	_putchar('\n');
	}
}
