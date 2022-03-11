#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit=0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	last_digit=n%10;
	printf("last digit of %d is %d\n", n, last_digit);
	if (last_digit>5)
		printf("%d and is greater than 5\n", n);
	else if (last_digit==0)
		printf("%d and is zero\n", n);
	else if (last_digit<6)
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
}
