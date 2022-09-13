#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @n: is the int we will use for the argument of the function
 * Return: always 0(success)
 */
int _abs(int n)
{
if (n > 0)
return (n);
else
return (n * -1);
}

