#include "main.h"
/**
 * main A program that prints _putchar
 * Return: 0 as success
 */
int main(void)
{
	char a[] = "_putchar";
	
	int c;
	
	for (c = 0;; c < 8; c++)
	{
		_putchar(a[c]);
	}
			_putchar('\n');
	return (0);
}

