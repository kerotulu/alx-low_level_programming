#include <stdio.h>

/**
 * main - Print the lowercase alphabet excluding e and q
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		}

	putchar('\n');

	return (0);
}
