#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase and then uppercase
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar ('\n');
	return (0);
}

