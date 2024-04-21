#include "./libft.h"
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
     unsigned int n = size;
     char *ptr = src;
     if (size == 0)
          return (str_len(src));
     while (*src && n - 1)
     {
          *dest++ = *src++;
          n--;
     }
     *dest = '\0';
     return (str_len(ptr));
}