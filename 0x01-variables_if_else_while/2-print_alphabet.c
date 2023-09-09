#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
