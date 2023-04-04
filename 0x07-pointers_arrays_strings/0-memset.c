#include "main.h"

/**
  * _memset - fills the first n bytes of the memory area pointed
  *to by s with the constant byte b
  *@s: Pointer array
  *@b: Item to replace
  *@n: Number of times
  *Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
