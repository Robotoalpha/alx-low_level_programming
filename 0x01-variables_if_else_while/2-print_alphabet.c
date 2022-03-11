#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main-block
* Description: the for boucle will print 
*alphat in lower case wile ch different to z
* Return: 0 success
*/
int main(void)
{
	char *ch = alphabet;
/* print alphabet in lowercase letters */
	for (ch ="a", ch <= "z", ch++)
	putchar(alphabet);
	putchar("\n");
	getch();
	return (0);
	
}
