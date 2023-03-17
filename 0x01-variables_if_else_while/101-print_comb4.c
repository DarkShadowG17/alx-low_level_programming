 #include <stdio.h>
/**
 * main - a program that prints all possible
 * different combinations of three digits
 * Return: 0 if exited properly
 */
int main(void)
{
	int i, j, k;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			for (k = 48 ; j < 58 ; j++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
