#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main body
 * Description : script to print the last number
 * Return:Always 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last;

	last = n % 10;
	if (last > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %d is %d 0\n", n, last);
	else if (last < 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
