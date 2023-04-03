#include "main.h"

/**
 * set_string - a function that sets the value of pointer
 * to char
 * @s: string
 * @to: character the pointer is pointing to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
