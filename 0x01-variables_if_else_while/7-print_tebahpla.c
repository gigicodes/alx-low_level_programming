#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success/Correct)
 */
int main(void)

{

char r_alphabet;

for (r_alphabet = 122; r_alphabet >= 97; r_alphabet--)
{
putchar(r_alphabet);
}

putchar('\n');

return (0);

}
