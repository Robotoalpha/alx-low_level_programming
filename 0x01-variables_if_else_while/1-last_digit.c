#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main-Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	unsigned int last_dig = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	last_dig = n % 10;
	if (last_dig > 5)
	printf("last digit of %d is %d and is greater than 5\n", n, last_dig);
	else if (last_dig == 0)
	printf("last digit of %d is %d and is 0\n", n, last_dig);
	else if (last_dig < 5 && n != 0)
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	return (0);
}
