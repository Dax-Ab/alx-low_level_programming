#include "main.h"
/**
 * puts_half - prints evry other character of a sting
 * @str: a pointer to an int that will be change
 *
 * Return: void
 */
void puts-half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
