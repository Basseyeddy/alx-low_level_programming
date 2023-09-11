#include <stdio.h>
/**
 * main - A program to prints all single digit numbers of base 10
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int lastDigit = 0;

	while (lastDigit < 10)
	{
		putchar(lastDigit + '0');
		lastDigit++;
	}
	putchar('\n');
	return (0);
}
