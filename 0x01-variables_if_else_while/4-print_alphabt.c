#include <stdio.h>
/**
 * main - entry point
 * Description: programming is positive, zero or negative
 * Return: always zero(success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
