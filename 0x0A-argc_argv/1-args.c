#include <stdio.h>

/**
 * main - print the program name
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *agrv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
