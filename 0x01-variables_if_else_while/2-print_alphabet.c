#include <stdio.h>

/**
* main-block
* Description: the for boucle will print 
*alphat in lower case wile ch different to z
* Return: 0 success
*/
int main(void)
{
	
/* print alphabet in lowercase letters */
	char* ch = "a";
	while (ch <= "z")
	{	
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return (0);
	
}
