#include <stdio.h>
#include <unistd.h>
/**
 *main - Write out some quoted texts.
 *Description: Using the main function
 *this program outputs "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 *followed by a new line"
 */
int main(void)
{
	write("and that piece of art is useful\" Dora Korpar, 2015-10-19\n");
	return (1);
}
