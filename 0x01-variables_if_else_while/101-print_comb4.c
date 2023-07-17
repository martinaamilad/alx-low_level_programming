#include <stdio.h>

/**
 * main - print comination number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c, i, e;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				if (c < i && i < e)
				{
					putchar(c);
					putchar(i);
					putchar(e);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
