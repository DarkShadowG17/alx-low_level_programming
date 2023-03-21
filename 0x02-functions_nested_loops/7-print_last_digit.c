#include "main.h"
/**
 * print_last_digit - prints the last digit of input
 * @n: n is an int
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int lst = n % 10;

	if (n < 0)
		lst *= -1;
	_putchar(lst + '0');
	return (lst);
}
