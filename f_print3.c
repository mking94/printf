#include "holberton.h"
/**
 * tobin - convert print an integer to binary (base 2).
 *
 * @arg: input
 *
 * Return: void.
 */
int print_double(double n)
{
int count = 0, rest = 1;
double x;
x = n;
if (n < 0)
{
_putchar('-');
x = -x;
count++;
}
while ((x / rest) > 9)
{
rest = rest * 10;
}
while (rest > 0)
{
_putchar(x / rest + '0');
x = ((int)x % (int)rest);
rest = rest / 10;
count++;
}
return (count);
}
