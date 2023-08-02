#include "main.h"

/**
 *
 *
 *
 */
void _puts_recursion(char *s)
{
  if (*s == '\0')
  {
    // Reached the end of the string, so print a newline
    putchar('\n');
    return;
  }

  // Print the current character, then recurse on the rest of the string
  putchar(*s);
  _puts_recursion(s + 1);
}
