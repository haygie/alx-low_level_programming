#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
