#include "main.ch"

/**
 * main - print _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Sucess)
 */

int main(void)
{
	char text[9] = "_putchar;
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
