#include "./libft.h"

inline int	ft_isalpha(int i)
{
	return (ft_lower(i) || ft_upper(i));
}