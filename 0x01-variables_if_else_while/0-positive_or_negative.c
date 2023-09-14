#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - A programme with printf function
 * Return: 0 (success)
 */

int main(void)

{
	int n;

	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else if (n < 0)
		printf("%d is negative", n);
	printf('\n')
	return (0);
}
