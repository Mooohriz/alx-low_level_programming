#include <stdio.h>

/**
 * main - entry point
 *
 * description: print number 0 to 9 on a line
 * Return: 0
 */
int main(void)
{
char i;

for  (i = '0' ; i <= '9'; ++1)
putchar(i);

putchar('\n');

return (0);
}

