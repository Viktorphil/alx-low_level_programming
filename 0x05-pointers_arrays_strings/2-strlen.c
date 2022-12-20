#include "main.h"
#include <stdio.h>

/**
 * _strlen - code
 * @s: input string
 * Return: length of a string.
 */
int _strlen(char *s)
{
int count = 0;

while (*(s + count) != '\0')
count++;
return (count);
}
