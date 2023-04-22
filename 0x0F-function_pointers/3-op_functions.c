#include "3-calc.h"

/**
 * op_add - Returns sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns subtraction of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns multiplication of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: The division of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: The division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remainder of the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: The remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
