#include <stdio.h>

/**
 * main - Entry point
 * decription: Prints alphabet in lowercase then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 'a';

	int m = 'A';

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
		n++;
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
		m++;
	}
	return (0);
}
