#include "main.h"
#include <stdio.h>
/**
 * _puts2 - prints evry character of a sting
 * @a: a pointer to an int that will be change
 * @n: return value n
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
