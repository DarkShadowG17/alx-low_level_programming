#include "main.h"
/**
 * _isdigit - checks if argument is a num
 * Return: 1 if c is num
 * else otherwise
 * @c: argument char
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
