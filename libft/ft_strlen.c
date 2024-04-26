#include "./libft.h"
int ft_strlen(char *str)
{
     int i;
     i = 0;
     char c;
     while (*str++)
          i++;
     return i;
}