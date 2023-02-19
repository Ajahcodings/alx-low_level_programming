#include <stdio.h>
/**
 * main - hello put
 *
 * Description: using the main function
 * programming is like building a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	char ch;
	for(ch = 'a' ; ch <= 'z' ; ch++)
	{
		if(ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
