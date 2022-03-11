#include <stdio.h>
/**
 * main-Entry
 *
 * Description: print alphabet in lowercase then  in 
 * uppercase
 *
 * Return: 0
 */
int main(void)
{
	char ch = "a", CH = "A";
	while (ch <= "z" && CH <= "Z")
	{
		putchar(ch);
		putchar("\n");
		putchar(CH);
	}
			ch++;
			CH++;
	return(0);
}	
