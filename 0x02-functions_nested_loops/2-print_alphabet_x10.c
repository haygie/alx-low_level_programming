#include "main.h"

/**
 * main - entry point
 * Description: prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void);

int main(void)
{
	int t;

	char c;

	t = 0;

	while (t < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		t++;
	}
}
