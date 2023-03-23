#include "main.h"
/**
 * _isupper - function that looks for uppercase chars
 * Return: 1 if c is uppercase
 * else other
 * @c: input char
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
