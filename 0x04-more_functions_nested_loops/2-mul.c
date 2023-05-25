#include "main.h"
/**
 * mul - multiply 2 int
 * @a: first int
 * @b: second int
 * Return: addition of the multiplicattion
 */

int mul(int a, int b)
{
	return (a * b);
}


2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}


3-print_numbers.c

#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

