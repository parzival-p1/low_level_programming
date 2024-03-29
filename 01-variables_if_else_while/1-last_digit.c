#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Assign a rand num to the var n each time
 * is executed
 *
 * return - always (0) success
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %i and is %i greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i and is %i 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i and is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
