#include <stdio.h>
/**
 * main - writes alphabets in lowercase
 * Return: 0 if exited properly
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
		putchar(i);
	putchar(13);
	return (0);
}
