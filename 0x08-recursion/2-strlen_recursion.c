#includ "main.h"

/**
*_strlen_recursion - main - check the code
@s: character of a string
*Return: always 0.
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1);
	}
	return (0);
}

