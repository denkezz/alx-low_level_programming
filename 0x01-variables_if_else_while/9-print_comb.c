#include <stdio.h>
/**
 * main - entry point
 * Description: programming is about patience
 * Return: always 0(success)
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
}
if (c != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
