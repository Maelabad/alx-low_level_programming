#include "main.h"

/**
* set_string - t sets the value of a pointer to a char.
* @**s: A pointer on another pointer on char
* @*to: a pointer
* Return: Nothing
*/

void set_string(char **s, char *to)
{
	int i;

	for  (i = 0; to[i] != '\0'; i++)
	{
		*(s + i) = to[i];
	}
}
