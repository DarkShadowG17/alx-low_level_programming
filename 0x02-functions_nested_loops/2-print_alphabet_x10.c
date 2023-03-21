#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int rnd = 0;
	char txt = 'a';

	while (rnd < 10)
	{
		txt = 'a';
		while (txt <= 'z')
		{
			_putchar(txt);
			txt++;
		}
		_putchar('\n');
		rnd++;
	}
