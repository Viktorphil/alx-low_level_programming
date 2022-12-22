#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: 0 plus other things which am not inc.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, r;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
r = s1[i] - s2[i];
break;
}
else
{
r = s1[i] - s2[i];
}
i++;
}

return (r);
}
