/* Prints all possible different combinations of three digits.*/
#include <stdio.h>
/**
 * main- prints all possible different combinationsof three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n <= 58; n++)
	{
		for (m = 49; n <= 58; m++)
		{
			for (l = 50; l <= 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 && m != 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
