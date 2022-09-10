#include <stdio.h>
/**
 * main - entry point
 * Description: programming is success
 * Return: always 0(success)
 */
int main(void)
{
int c;
int d;
int e;
for (c = 0; c <= 9; c++)
{
for (d = 0; d <= 9; d++)
{
for (e = 0; e <= 9; e++)
{
if (e > d && d > c)
{
putchar(c + '0');
putchar(d + '0');
putchar(e + '0');
if (c != 7 || d != 8 || e != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
