#include <stdio.h>

/**
 * main - print the program name
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int i = 0;
	while (argc --)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
