#include <stdio.h>

/**
 * print_alphabet - make alphabet
 *
 * Return: void
 */
void print_alphabet(void){
	char ch = 'a';

	while (ch <= 'z') {
		putchar(ch)
			ch++;
	}

	putchar('\n');
}
