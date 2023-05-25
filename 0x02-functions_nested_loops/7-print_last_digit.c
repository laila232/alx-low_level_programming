#include "main.h"
/**
 * print_last_digit - prints the last digit of a number..
 * @n: takes in integer type input for function
 * Return: Returns the value of the last digit of the input
 *
 */
int print_last_digit(int n)
{
int lastdigit;
if (n >= 0)
	lastdigit = n % 10;
else
	lastdigit = -1 * (n % 10);
	_putchar(lastdigit + '0');
return (lastdigit);
}
}
