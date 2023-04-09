#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: nbr of cmd line args
 * @argv: array of cmd line args
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
