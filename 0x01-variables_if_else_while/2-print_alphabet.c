#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main-Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	char ch;

/* print alphabet in lowercase letters */
	
	for (ch= "a" ; ch<= "z" ; ch++)
		putchar(ch);
		putchar("\n");
		getch();
	return (0);
	
}
