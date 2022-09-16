/*This program will assign a random number to the variable n each time it is*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n;
	int m = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and", n, m);
	if (m > 5)
		printf("is greater than 5\n");
	else if (m == 0)
		printf("is 0\n");
	else if (m < 6 && m != 0)
		printf("is less than 6 and not 0\n");
	return (0);
}
