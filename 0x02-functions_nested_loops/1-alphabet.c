#include "main.h"
/**
 * print_alphabet -print alphabet
 * Return: void
 */
void print_alphabet(void)
	{
		char alp = 'a';

		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}

		_putchar('\n');
	}
