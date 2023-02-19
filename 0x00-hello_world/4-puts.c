#include <stdio.h>
#include <stdio.h>

/**
 * main - entry c programming
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
