#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - checks if the number is positive
 * or negative 
 * Return: 0 if exited properly
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )
	{
		printf("%d is positive", n);
	}
	else if ( n < 0 )
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}