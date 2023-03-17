#include <stdio.h>
#include <stdlib.h>
/**
 * main - writes numbers of base 10
 * Return: 0 if exited properly
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
