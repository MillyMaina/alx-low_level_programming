#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 * Return: Always zero (success)
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
