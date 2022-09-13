#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit
 * @n: value of last digit
 * Return: always 0(success)
 */
int print_last_digit(int n)
{
_putchar('0' + _abs(n % 10))
return (_abs(n % 10));
}
