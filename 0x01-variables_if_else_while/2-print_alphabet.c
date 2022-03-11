#include <stdio.h>
#include <stdlib.h>

/**
* main-Entry point
*
* Return: Always 0 (success)
*/
main(void)
{
	int ch;
	clrscr();

/* print alphabet in lowercase letters */
	
	for (ch= "a" ; ch<= "z" ; ch++)
		putchar(ch);
		putchar("\n");
		getch();
}
