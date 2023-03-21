#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints last digit of a number
 * @r: last digit number to be printed
 * Return: value of last digit
 */

int print_last_digit(int r)
{
	_putchar ('0' + _abs(r % 10));
	return (_abs(r % 10));
}
