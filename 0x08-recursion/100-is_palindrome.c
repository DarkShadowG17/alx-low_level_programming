#include "main.h"
/**
 * _strlen-recursion - strlen
 * @s: ptr to char
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * pali - palindrome
 * @s: ptr to char
 * @l: pos
 * Reurn: bool
 */
int pali(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (pali(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - check if string is a palindrome
 * @s: ptr to char
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pali(s, len - 1));
}
