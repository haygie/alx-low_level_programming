#include "main.h"

/**
 * _isupper - defines if character is uppercase or loweercase
 *
 * @c: charater
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
