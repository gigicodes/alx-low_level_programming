#include "main.h"
/**
 * _islower - Checks for Lowercase letters
 * @c: parameter/character inputted
 *
 * Return: Always 0
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}
