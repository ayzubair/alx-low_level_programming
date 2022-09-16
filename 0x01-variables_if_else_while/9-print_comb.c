/* Prints all possible combination of single-digit numbers (0-9)*/
#include <stdio.h>
/**
 * main - prints 0, 1, 2,......, 9.
 * followed by a new line.
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
