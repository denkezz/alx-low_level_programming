#include <stdio.h>
/**
 * main - entry point
 * Description: smile in the mirror
 * Return: always 0(success)
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
