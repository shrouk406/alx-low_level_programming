#include "main.h"
/**
 * main - check the code
 * print_alphabet -  Prints alphabet from a to z
 * Return: void.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
