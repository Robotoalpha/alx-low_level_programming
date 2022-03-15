#include "main.h"
/**
 * print_alphabet_x10-abcd
 * Description of function print_alphabet_x10:
 * this function print alphabet in lower case ten times
 * 
 *  Return: Always retur 0 for success
 */
void print_alphabet_x10(void)
{
char c = 'a';
int i = 0;
while (c <= 'z')
{
while (i <= 10)
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
