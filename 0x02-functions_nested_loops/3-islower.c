#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: checks for lowercase character.
 * Return: return 1 if true or 0 if not
 */

int _islower(int c)
{
	c = 'a';

	if (c <= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
