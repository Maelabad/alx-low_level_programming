#include"main.h"
/**
* _isalpha - Check if a number is lower or upper character
* @c: variable representing the character
* Return: 1 if true , else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
