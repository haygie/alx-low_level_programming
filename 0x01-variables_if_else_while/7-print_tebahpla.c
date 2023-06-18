#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 'z';

	for (n = 'z'; n >= 'a'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
