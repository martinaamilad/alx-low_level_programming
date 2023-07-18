#include <stdio.h>

/**
 * print_alphabet - make alphabet
 *
 * Return: void
 */
void print_alphabet(void){
	for (char ch = 'a'; ch <= 'z'; ch++) {
		putchar(ch);
	}
	putchar('\n');
}
