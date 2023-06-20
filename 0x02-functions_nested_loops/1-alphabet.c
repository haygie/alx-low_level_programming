#include "main.h"

/**
 * main - Entry point
 * Description: Prints the alphabet, in lowercase, followed by a new line.
 * Return: void
 */

auto void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	 _putchar('\n');
}
