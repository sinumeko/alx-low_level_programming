#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: number being tested
 * Return: returns output
 */

int print_last_digit(int n) 
{
	int ln = n % 10;

	if (n < 0)
		ln =ln * -n;
		_putchar(ln + '0');
		return (ln);
}
