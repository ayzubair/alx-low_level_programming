#include <stdio.h>
/**
 * main - prints the size of various types.
 * Description: using the main function, declare variables for the individual types and print their sizes using the printf function
 * Return:0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;


	printf("Size of a char: %ld byte(s)\n, sizeof(c)");
	printf("Size of an int: %ld byte(s)\n, sizeof(i)");
	printf("Size of a long int: %ld byte(s)\n, sizeof(li)");
	print ("Size of a long long int: %ld byte(s)\n, sizeof(lli)");
	print ("Size of a float: %ld byte(s)\n sizeof(f)");
	return (0);
}

