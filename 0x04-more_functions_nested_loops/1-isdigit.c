#include "main.h"

/**
 * _isdigit - checks if  parameter is a number between 0 and 9.
 * @c: input munber.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

