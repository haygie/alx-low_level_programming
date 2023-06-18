#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar (n);
	}
	putchar('\n');
	return (0);
}
