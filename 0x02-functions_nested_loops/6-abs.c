#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @n: is the int we will use for the argument of the function
 * Return: always 0(success)
 */
int _abs(int n)
{
return (n >= 0 ? n : n * -1);
}
