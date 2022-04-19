#include "main.h"
/**
 * _puts2 - prints evry character of a sting
 * @str: a pointer to an int that will be changed
 *
 * Return: void
 */
void _puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar (str[a]);
	}
	_putchar('\n');
}
