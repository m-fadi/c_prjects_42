#include "./libft.h"

inline int ft_isalnum(int i)
{
     return(ft_isdigit(i) || ft_isalpha(i));
}