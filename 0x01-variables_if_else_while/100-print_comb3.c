#include <stdio.h>
/**
 * main - entry point
 * Description: programming is about inventing
 * Return: always return 0(success)
 */
int main(void)
{
int c;
int j;
for (c = 10; c <= 19; c++)
{
for (j = 10; j <= 19; j++)
{
if ((j % 10) > (c % 10))
{
putchar((c % 10) + '0');
putchar((j % 10) + '0');
if (c != 18 || j != 19)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
