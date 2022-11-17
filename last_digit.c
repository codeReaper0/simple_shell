#include <stdio.h>

/**
 * main - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int main(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	printf("last_digit + '0'");

	return (0);
}