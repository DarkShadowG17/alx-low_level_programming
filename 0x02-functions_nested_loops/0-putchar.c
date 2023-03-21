#include "main.h"
/**
 * main - prints _putchar
 * Return: 0 if success
 */
int main(void)
{
	char txt[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(txt[i]);
	_putchar('\n');
	return (0);
}

