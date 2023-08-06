#include <stdio.h>

/**
 * main - print theprogram name
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *agrv[])
{
	(void)argv[];
	printf("%d\n", argc - 1);
	return (0);
}
