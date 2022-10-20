#include "main.h"

/**
 * main - to checkif letter is uppercase
 * @x - letter to be checked
 * Return: one for uppercase and 0 for any else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
