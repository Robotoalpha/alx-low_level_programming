#include "main.h"
/**
 *print_sign - sign of a number.
 *@n: input.
 *
 *Return: 1 and print + if n > 1
 * 0 and print 0 if n = 0
 * -1 and print - if n < 0
 */
int print_sign(int n)
{
int result;
if (n > 0)
{
putchar('+');
result = 1;
}
else if ( n == 0)
{
putchar('0');
result = 0;
}
else
{
putchar('-');
result = -1
}
return (result);
}

