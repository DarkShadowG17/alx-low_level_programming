#include <stdio.h>
/**
 * main - writes all combinations
 * of single-digits
 * Return: 0 if exited properly
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
