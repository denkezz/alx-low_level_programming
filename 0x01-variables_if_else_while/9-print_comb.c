#include <stdio.h>
/**
 * main - entry point
 * Description: programming is about patience
 * Return: always 0(success)
 */
int main(void)
{
int c;
for (c = 10; c < 20; c++)
{
putchar((c % 10) + '0');
if (c != 19)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
