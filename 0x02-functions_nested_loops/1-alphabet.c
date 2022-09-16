#include "main.h"

/**
 * main - entry point
 *
 * description: function that prints the alphabet
 *
 * in lowercase, followed by a new line
 *
 * print_alphabet - Prints the alphabet in l.case
 *
 * Return (0) Always success
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')

	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
