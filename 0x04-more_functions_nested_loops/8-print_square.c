#include "main.h"

/**
  * print_square -   function that prints a square
  *
  * @size: is the size of the square
  *
  * Return: Always 0.
  */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
