#include <stdio.h>
/**
 * main - prints name
 * @argc: nbr of cmd line args
 * @argv: array of cmd line args
 * Return: 0 if success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
