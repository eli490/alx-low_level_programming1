#include "main.h"

/**
 * _strlen -count length of string
 * @s: count a pointer *s
 * Return: Always 0.
 */

int _strlen(char *s)
{
int a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
