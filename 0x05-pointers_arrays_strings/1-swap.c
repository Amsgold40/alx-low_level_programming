#include "main.h"
/**
 * swap_int - swaps the value of integers
 * @a: first value
 * @b: second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;
}
