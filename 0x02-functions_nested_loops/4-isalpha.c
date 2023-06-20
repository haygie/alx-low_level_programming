#include "main.h"

/**
 * main - Entry point
 * Description: checks for alphabetic character.
 */

int _isalpha(int c)
{
	char c;

	if ((c >= 'a' && c <= 'z' || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
