#include <stdio.h>
/**
 * main - prints all the numbers in base 16 in lowercase
 *
 * Return: Always 0 (Success/Correct)
 */

int main(void)

{

char base_16;

for (base_16 = 48; base_16 <= 57; base_16++)
{
putchar(base_16);
}

for (base_16 = 97; base_16 <= 102; base_16++)
{
putchar(base_16);
}

putchar ('\n');

return (0);

}
