#include "main.h"

/**
 * print_numbers - print 0 - 9
 *		only useing _putchar twice
 *
 * Return: 1 if its uppercase. 0 if not
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar (num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
