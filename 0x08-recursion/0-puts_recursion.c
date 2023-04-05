#include "main.h"

/*
 * _puts_recursion - uses recursion
 * @s: string to recurse
 */

void _puts_recursion(char *s)
	/*
	 * uses recursion
	 * _puts_recursion - uses recursion
	 */
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s); /*Come on Betty*/
	}
	else
		_putchar('\n'); /*a new line*/
}
