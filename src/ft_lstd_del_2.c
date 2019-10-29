#include "push_swap.h"

void	ft_lstd_del_2(t_list **list)
{
	if (list)
		while (*list)
		{
			ft_memdel((void**)&(((t_ps_content*)((*list)->content))->content));
			ft_lstd_pop_front(list);
		}
}

void	ft_lstd_del_3(t_list **list)
{
	if (list)
		while (*list)
		{
//			ft_memdel((void**)&(((t_ps_string*)((*list)->content))->string));
//			ft_memdel((void**)&(((t_ps_string*)((*list)->content))->queue));
//			ft_memdel((void**)&(((t_ps_string*)((*list)->content))->string));
			ft_lstd_pop_front(list);
		}
}