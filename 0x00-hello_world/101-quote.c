#include <unistd.h>

/**
 * main - prints "and that piee of art is useful" - Dora Korpar, 2015-1019",
 * followed bt a newline, to standard error
 * Return: Alwas 1.
 */

int main(void)

{

	write(2, "and that piece of art useful\" -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
