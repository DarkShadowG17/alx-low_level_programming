#include <stdio.h>
/**
 * main - writes alphabets except
 * q and e
 * Return: 0 if exited properly
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
		if (i != 101 && i != 113)
			putchar (i);
	putchar('\n');
	return (0);
}
