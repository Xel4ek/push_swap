#include "libft.h"

void	ft_lstd_del(t_list **list)
{
	if (list)
		while (*list)
		{
			ft_lstd_pop_front(list);
		}
}