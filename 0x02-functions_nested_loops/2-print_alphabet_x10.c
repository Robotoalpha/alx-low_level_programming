#include "main.h"
/**
 * print_alphabet_x10-abcd
 * Description of function print_alphabet_x10:
 * this function print alphabet in lower case ten times
 * 
 *  Return: Always return 0 for success
 */
void print_alphabet_x10(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i , j;
 j = 0;
while (j <= 26)
{
i = 0;
while (i <= 10)
{
_putchar(alphabet[j]);
j++;
}
_putchar('\n');
i++;
}
}
