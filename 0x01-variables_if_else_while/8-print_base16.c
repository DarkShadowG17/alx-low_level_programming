#include <stdio.h>
/**
 * main - writes nmbers of base 16
 * Return: 0 if exited properly
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
		putchar(i);
	for (i = 97 ; i < 103 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
