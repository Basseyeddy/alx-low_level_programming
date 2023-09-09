#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase except q and e
 *
 * Return: Always 0(sucess)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
