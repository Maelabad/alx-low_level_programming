#include"main.h"
/**
* _islower - Check if a for lowercase caracter
* @c: variable representing the character
* Return: 1 if true , else 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

