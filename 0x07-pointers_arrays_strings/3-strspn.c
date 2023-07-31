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
<<<<<<< HEAD
    unsigned int i;
 	
=======
  size_t i,j;
  i=0;

  while(*(s+i)){
    j=0;
    while(*(accept+j)){
      if(*(s+i) == *(accept+j)){
        break;
      }
      j++;
    }
    if(!*(accept+j)){
      return i;
    }
    i++;
  }
  return i;
}
	
>>>>>>> da2b1ad78f3cd1bc6cd81c70152f9bfebcdad2b9
