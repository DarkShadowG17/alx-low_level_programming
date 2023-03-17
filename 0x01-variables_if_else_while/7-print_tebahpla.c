#include <stdio.h>
/**
 * main - writes alphabets in lowercase
 * and in reverse
 * Return: 0 if exited properly
 */
int main(void)
{
	int i;

	for (i = 122 ; i >= 97 ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
