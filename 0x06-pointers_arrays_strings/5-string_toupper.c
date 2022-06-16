#include "main.h"
/**
* string_toupper - changes lowercase to uppercase
*@s: string to modify
*
*Return: the string that change for uppercase
*/
 char *string_toupper(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
{
if (s[i] >= 96 && s[i] <=123)
{
s[i] -= 32;
}
i++;
}
return (s);
}

