#include "main.h"
/**
 * _isalpha - function to check c is a letter, lowercase or uppercase
 * Return:0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
	
