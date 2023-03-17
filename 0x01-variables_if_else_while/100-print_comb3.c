#include <stdio.h>
/**
 * main - writes diffrent combinations of two digits
 * Return: 0 if exited properly
 */
int main(void)
{
	int i, n;

	for (i = 48 ; i < 57 ; i++)
	{
		for (n = i ; n < 58 ; n++)
		{
			putchar(i);
			putchar(n);
		}
		if (i != 56 && n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
