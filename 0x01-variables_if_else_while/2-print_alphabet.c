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
	char ch = "a";

/* print alphabet in lowercase letters */
	
	while (ch<= "z")
		putchar(ch++);
		putchar("\n");
	return (0);
	
}
