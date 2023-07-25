#include "main.h"

/**
 * _strlen - returen the length of a strlen
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\10'; s++)
		++counter;
	return (counter);
}
