#include "function_pointers.h"

/**
 * print_name - prints a given name
 * @name: name pointer input
 * @f: pointer to void function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
