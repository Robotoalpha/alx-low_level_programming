#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	int last_digit;
	last_digit = n % 10;
	printf("Last digit of n=%d is\n", last_digit);
	if (last_digit>5)
		printf("and is greater than 5\n");
	elseif (last_digit==0)
		printf("and is zero\n");
	elseif (last_digit<6)
		print("and is less than 6 and not 0\n");
	return (0);
}
