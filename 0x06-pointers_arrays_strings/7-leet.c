#include "main.h"

/**
 * leet - a function
 *
 * @s: string input
 *
 * Return: @s
 */

char *leet(char *s)
{
int i, c = 0;
int s1[] = {97, 101, 111, 116, 108};
int u1[] = {65, 69, 79, 84, 76};
int n[] = {52, 51, 48, 55, 49};

while (s[c] != '\0')
{
for (i = 0; i < 5; i++)
{
if (s[c] == s1[i] || s[c] == u1[i])
{
s[c] = n[i];
break;
}
}
c++;
}
return (s);
}
