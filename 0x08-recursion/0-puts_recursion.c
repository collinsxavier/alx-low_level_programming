#include <stdio.h>
#include "main.h"
/**
  * _puts_recursion - Print a string followed by a new line
  * @s: the string to print
  *
  * Return: 0.
  */
void puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return ;
	}

	putchar(*s);
	s++;
	puts_recursion(s);
}
