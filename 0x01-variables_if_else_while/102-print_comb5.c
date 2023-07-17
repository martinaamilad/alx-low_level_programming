#include <stdio.h>

/**
 * main - print comibnations of number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c, i, e, k;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (e = 48; e <= 57; e++)
			{
				for (k = 48; k <= 57; k++)
				{
					if (((e + k) > (c + i) && e >= c) || c < e)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(e);
						putchar(k);

						if (c + i + e + k == 277 && c == 57)
						{
							break;
						}
						else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
