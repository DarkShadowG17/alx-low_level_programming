#include <stdio.h>
/**
 * main - writes numbers of base 10
 * using putchar
 * Return: 0 if exited properly
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
		putchar (i);
	putchar ('\n');
	return (0);
}
