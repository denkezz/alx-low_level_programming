#include <stdio.h>
/**
 * main - entry point
 * Description: printing numbers
 * Return: always 0(success)
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
