#include "main.h"

/**
 * isdigit - to check if character is a digit
 * @C: character to be checkef
 * Return:1 for character to be digit and 0 for other else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
