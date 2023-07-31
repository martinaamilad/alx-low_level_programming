#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
  size_t i,j;
  i=0;

  while(*(s+i)){
    j=0;
    while(*(accept+j)){
      if(*(s+i) == *(accept+j)){
        break; //Found a match.
      }
      j++;
    }
    if(!*(accept+j)){
      return i; //No match found.
    }
    i++;
  }
  return i;
}
	
