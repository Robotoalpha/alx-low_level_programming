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
	char a = "a";
	char A = "A";
	int n = 0;
	while (n <= 52)
	{
		if (n <= 26)
			putchar(a);
		else 
			putchar(A);
	}			
		putchar("\n");
			a++;
			A++
			n++	
	return(0);
}	
