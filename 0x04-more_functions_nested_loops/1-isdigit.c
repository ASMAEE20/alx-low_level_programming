#include "main.h"

/**
 * _isdigit - checks if numbers are 0 - 9
 * @c: char to be checked
 * Return: 0 or 9;
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (9);
	else
		return (0);
}
